# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# ================
# Compiler options
# ================

add_compile_options(-std=c++11)
add_compile_options(-Wall)

# Project's name
project(tets1)

# Boost
find_package(Boost REQUIRED
             COMPONENTS locale date_time system filesystem program_options iostreams)
include_directories(${Boost_INCLUDE_DIRS})

# Add subdirectory to the project
add_subdirectory( src )