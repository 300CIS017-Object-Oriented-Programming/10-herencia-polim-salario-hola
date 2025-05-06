cmake_minimum_required(VERSION 3.10)
project(NominaEmpleados)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB SOURCES "src/*.cpp")

add_executable(NominaEmpleados ${SOURCES})
