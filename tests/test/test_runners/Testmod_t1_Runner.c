#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(mod_t1)
{
  RUN_TEST_CASE(mod_t1, test_sqr_six_times);
}