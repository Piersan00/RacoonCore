cmake_minimum_required(VERSION 3.20)

project(RacoonCore)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(RacoonCore
    src/Core.cpp
    src/Log.cpp
)

add_executable(Sandbox
    Sandbox/main.cpp
)

target_link_libraries(Sandbox
    RacoonCore
)

target_include_directories(RacoonCore
    PUBLIC
        include
)