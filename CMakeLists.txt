cmake_minimum_required(VERSION 3.17)
project(Simple2DCarGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(Simple2DCarGame main.cpp game.cpp car.cpp enemy.cpp road.cpp direction.cpp point.cpp tree.cpp)
#target_link_directories(Simple2DCarGame ${PROJECT_SOURCE_DIR}/pdcurses.a)
target_link_libraries(Simple2DCarGame ${PROJECT_SOURCE_DIR}/pdcurses.a)