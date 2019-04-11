cmake_minimum_required(VERSION 3.1)

project(Asteroids)

set(Asteroids_VERSION_MAJOR 0)
set(Asteroids_VERSION_MINOR 1)
set(Asteroids_VERSION_PATCH 0)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")


find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_DIRS})
include_directories("${PROJECT_SOURCE_DIR}/assets")

set(GAMEENGINE "${PROJECT_SOURCE_DIR}/game/gamewindow.h"
    "${PROJECT_SOURCE_DIR}/game/gamewindow.cpp"
    "${PROJECT_SOURCE_DIR}/game/game.h"
    "${PROJECT_SOURCE_DIR}/game/game.cpp")

set(ENTITIES "${PROJECT_SOURCE_DIR}/elements/entity.h"
    "${PROJECT_SOURCE_DIR}/elements/entity.cpp"
    "${PROJECT_SOURCE_DIR}/elements/spaceship.h"
    "${PROJECT_SOURCE_DIR}/elements/spaceship.cpp"
    "${PROJECT_SOURCE_DIR}/elements/asteroid.h"
    "${PROJECT_SOURCE_DIR}/elements/asteroid.cpp")

FILE(COPY ${PROJECT_SOURCE_DIR}/assets/space-shuttle.png DESTINATION "${CMAKE_BINARY_DIR}/assets")
FILE(COPY ${PROJECT_SOURCE_DIR}/assets/asteroid.png DESTINATION "${CMAKE_BINARY_DIR}/assets")

add_executable(Asteroids main.cpp ${GAMEENGINE} ${ENTITIES})

target_link_libraries(Asteroids ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})



if (${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    install(TARGETS Asteroids DESTINATION bin)
    set(CPACK_GENERATOR "DEB")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Alejandro Martinez, Sebastian Niedworok")
    set(CPACK_PACKAGE_VERSION_MAJOR ${RadMag_VERSION_MAJOR})
    set(CPACK_PACKAGE_VERSION_MINOR ${RadMag_VERSION_MINOR})
    set(CPACK_PACKAGE_VERSION_PATCH ${RadMag_VERSION_PATCH})
    set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Asteroids")
    set(CPACK_DEBIAN_PACKAGE_DEBUG)
    set(CPACK_DEB_COMPONENT_INSTALL ON)
    set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
    set(CPACK_DEBIAN_PACKAGE_GENERATE_SHLIBS ON)
    include(CPack)

endif()
