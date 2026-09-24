cmake_minimum_required(VERSION 3.10)

# Default to Clang if standard CXX variable isn't set
if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER "clang++")
endif()

project(IDCardGenerator VERSION 1.0 LANGUAGES CXX)

# Require modern C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add compiler flags for Clang warnings
add_compile_options(-Wall -Wextra -pedantic)

# Executable target
add_executable(id_card main.cpp)
