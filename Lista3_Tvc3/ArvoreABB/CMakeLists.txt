cmake_minimum_required(VERSION 3.8)
project(ArvoreABB)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ArvoreABB.cpp
        ArvoreABB.h
        main.cpp
        No.h
        NoFila.h
        PilhaEncad.cpp
        PilhaEncad.h)

add_executable(ArvoreABB ${SOURCE_FILES})