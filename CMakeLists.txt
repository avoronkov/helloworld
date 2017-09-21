cmake_minimum_required (VERSION 3.1.0)
project (HelloWorld)

set(CMAKE_CXX_STANDARD 14)
add_executable(helloworld hello.cpp main.cpp)
add_executable(unittest hello.cpp test.cpp)
