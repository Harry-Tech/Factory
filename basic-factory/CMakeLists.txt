cmake_minimum_required(VERSION 3.8)
project(basic_factory)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp IObject.h Toy.cpp Toy.h Wrap.cpp Wrap.h Toys/Car.cpp Toys/Car.h Toys/Plane.cpp Toys/Plane.h Wraps/Paper.cpp Wraps/Paper.h Wraps/Box.cpp Wraps/Box.h Factory.cpp Factory.h)
add_executable(basic_factory ${SOURCE_FILES})