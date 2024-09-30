# Minimum version of CMake required
cmake_minimum_required(VERSION 3.29)

# Project name
project(solutions)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the directories for leetcode and codewars solutions
set(LEETCODE_DIR "${CMAKE_SOURCE_DIR}/leetcode")
set(CODEWARS_DIR "${CMAKE_SOURCE_DIR}/codewars")

# Collect all .cpp files from both leetcode and codewars directories
file(GLOB_RECURSE LEETCODE_CPP_FILES "${LEETCODE_DIR}/*.cpp")
file(GLOB_RECURSE CODEWARS_CPP_FILES "${CODEWARS_DIR}/*.cpp")

# Combine both lists of files
list(APPEND ALL_CPP_FILES ${LEETCODE_CPP_FILES} ${CODEWARS_CPP_FILES})

# Create an executable for each .cpp file
foreach(FILE ${ALL_CPP_FILES})

    # Extract the filename without the extension for the executable name
    get_filename_component(FILE_NAME ${FILE} NAME_WE)

    # Add an executable for each file
    add_executable(${FILE_NAME} ${FILE})

endforeach()