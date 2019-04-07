cmake_minimum_required(VERSION 3.1)


project(Asteroids)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Asteroids main.cpp)

target_link_libraries(Asteroids ${SDL2_LIBRARIES})


