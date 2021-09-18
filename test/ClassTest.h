#ifndef CLASS_TEST_H
#define CLASS_TEST_H

#include <gtest/gtest.h>
#include "../tools/stack.h"

//  Testing class
class stackTestFixture : public ::testing::Test
{
public:
    Stack<int> stack;
    stackTestFixture();

    virtual void SetUp() override;
    virtual void TearDown() override;
};

#endif