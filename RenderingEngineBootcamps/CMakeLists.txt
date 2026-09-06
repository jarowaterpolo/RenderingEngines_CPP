cmake_minimum_required(VERSION 4.3)
project(RenderingEngineBootcamps)

set(CMAKE_CXX_STANDARD 20)

add_executable(RenderingEngineBootcamps main.cpp
        Functions.h
        Functions.cpp
        DivisorChallenge.cpp
        DivisorChallenge.h
        BC1.h
        BC1.cpp
        BC2.cpp
        BC2.h
        Student.cpp
        Student.h)
