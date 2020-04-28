#include "unity.h"
#include "example.h"




void test_functionundertest(void)
{
    TEST_ASSERT_EQUAL_INT8(15, crazyFunction(12,8));
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_functionundertest);
    return UNITY_END();
}