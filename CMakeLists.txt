# Minimum version 
cmake_minimum_required(VERSION 3.21.2)

set(This Test_Dev)

# Call the project name - PROJECT_NAME
project(${This} C CXX)

# Set 
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

# Create an exe file 
# add_executable(${PROJECT_NAME} hello.cpp stack.cpp)
# add_executable(${PROJECT_NAME} hello.cpp)

add_subdirectory(tools)
add_subdirectory(test)
add_subdirectory(googletest)

set(Sources 
    hello.cpp
    tools/stack.cpp
)

add_library(${This} STATIC ${Sources})


target_include_directories(${PROJECT_NAME} PUBLIC tools)
# target_link_directories(${PROJECT_NAME} PUBLIC tools)
# target_link_libraries(${PROJECT_NAME} tools)

add_executable (hello ${Sources})
