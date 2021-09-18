# Minimum version 
cmake_minimum_required(VERSION 3.21.2)

# Set 
set(This ExampleTests)

set(Sources 
ExampleTests.cpp
ClassTest.cpp
)

set(Headers 
ClassTest.h
)

add_executable(${This} ${Sources} ${Headers})
target_link_libraries(${This} PUBLIC 
gtest_main
Test_Dev
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
