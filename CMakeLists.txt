cmake_minimum_required(VERSION 3.16)
project(Desgin_Patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Desgin_Patterns Factory.cpp Adapter_Object.cpp Bridge.cpp Composite.cpp Decorator.cpp Flyweight.cpp Builder.cpp Observer.cpp by_move.cpp for_each.cpp)