cmake_minimum_required(VERSION 3.26)
project(RPG_V4)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPG_V4 files/main.cpp
        files/overworld.cpp
        header/overworld.h
        header/prints.h
        files/prints.cpp
        files/Entity.cpp
        header/Entity.h
        files/Heroes.cpp
        header/Heroes.h
        files/Attack.cpp
        header/Attack.h
)
