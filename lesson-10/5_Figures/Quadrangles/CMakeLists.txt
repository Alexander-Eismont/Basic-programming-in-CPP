# Sources
file(GLOB SRCS "src/*.cpp")
# Headers
file(GLOB_RECURSE HDRS "include/*.h")

cmake_minimum_required(VERSION 3.10)

project(QuadrangleLib)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../../../bin/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../../bin/)
set(EXECUTABLE_OUTPUT_PATH ../../../bin/)

set(SOURCES ${SRCS})
set(HEADERS ${HDRS})

add_library(QuadrangleLib SHARED ${HEADERS} ${SOURCES})

target_link_libraries(QuadrangleLib FigureLib)
