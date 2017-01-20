cmake_minimum_required(VERSION 3.6)
project(CS2370_ICP02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BasicShape.cpp BasicShape.h Circle.cpp Circle.h Date.cpp Date.h Datetime.cpp Datetime.h Rectangle.cpp Rectangle.h Time.cpp Time.h)
add_executable(CS2370_ICP02 ${SOURCE_FILES})