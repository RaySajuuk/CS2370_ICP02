cmake_minimum_required(VERSION 3.6)
project(CS2370_ICP02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BasicShape.cpp BasicShape.h Circle.cpp Circle.h DATE.cpp DATE.h DATETIME.cpp DATETIME.h Rectangle.cpp Rectangle.h TIME.cpp TIME.h)
add_executable(CS2370_ICP02 ${SOURCE_FILES})