# Minimum version 
cmake_minimum_required(VERSION 3.21.2)

# Set 
set(This ExampleTests)

set(Sources 
ExampleTests.cpp)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC 
gtest_main
Test_Dev
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
