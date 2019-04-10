cmake_minimum_required(VERSION 3.1)


project(Asteroids)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(GAMEENGINE "${PROJECT_SOURCE_DIR}/game/gamewindow.h"
    "${PROJECT_SOURCE_DIR}/game/gamewindow.cpp")

set(ENTITIES "${PROJECT_SOURCE_DIR}/elements/entity.h"
    "${PROJECT_SOURCE_DIR}/elements/entity.cpp"
    "${PROJECT_SOURCE_DIR}/elements/spaceship.h"
    "${PROJECT_SOURCE_DIR}/elements/spaceship.cpp")

add_executable(Asteroids main.cpp ${GAMEENGINE} ${ENTITIES})

target_link_libraries(Asteroids ${SDL2_LIBRARIES})


