cmake_minimum_required(VERSION 3.16)
project(Desgin_Patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(Desgin_Patterns WorkersFactory.cpp Adapter_Object.cpp Bridge.cpp Composite.cpp Decorator.cpp Flyweight.cpp Builder.cpp Observer.cpp)