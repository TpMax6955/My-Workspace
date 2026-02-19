cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(my_executable main.cpp)

# Ejecutable para el programa de Interes Compuesto (ic.cpp)
add_executable(ic_executable ic.cpp)

