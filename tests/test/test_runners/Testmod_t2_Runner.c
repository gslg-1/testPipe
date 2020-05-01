#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(mod_t2)
{
  RUN_TEST_CASE(mod_t2, findBiggest_three_times);
}