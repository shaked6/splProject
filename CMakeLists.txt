cmake_minimum_required(VERSION 3.15)
project(splProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(splProject
        include/Action.h
        include/Session.h
        include/User.h
        include/json.hpp
        include/Watchable.h
        src/Main.cpp
        src/User.cpp
        src/Session.cpp
        src/Action.cpp src/Watchable.cpp)