#include <gtest/gtest.h>
#include <iostream>
#include "../tools/stack.h"

#include "ClassTest.h"

// TEST(stack_push_test, push_1)
// {
//     Stack<int> stack = Stack<int>(1);

//     stack.push(1);
//     int value = stack.pop();

//     ASSERT_NE(value, 1);
// }

stackTestFixture::stackTestFixture()
{
}

void stackTestFixture::SetUp()
{
    std::cout << "Set UP" << std::endl;
    this->stack = Stack<int>(10);
}

void stackTestFixture::TearDown()
{
    this->stack = NULL;
    std::cout << "Tear Down" << std::endl;
}

TEST_F(stackTestFixture, IsEmpty_True_init)
{
    this->stack = Stack<int>();

    ASSERT_EQ(this->stack.isEmpty(), true);
}

TEST_F(stackTestFixture, IsEmpty_True_Init_With_Size)
{
    this->stack = Stack<int>(1);

    ASSERT_EQ(this->stack.isEmpty(), true);
}