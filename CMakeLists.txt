cmake_minimum_required(VERSION 3.23)
project(FIrstCLProject)

set(CMAKE_CXX_STANDARD 20)

#add_executable(FIrstCLProject main.cpp pow.cpp)

add_executable(pow pow.cpp)
add_executable(main main.cpp)
add_executable(tree tree.cpp)