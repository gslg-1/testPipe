#include "mod_t1.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(mod_t1);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided


TEST_SETUP(mod_t1)
{
}

TEST_TEAR_DOWN(mod_t1)
{
}

TEST(mod_t1, test_sqr_six_times)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(4, sqr(2));
  TEST_ASSERT_EQUAL(9, sqr(3));
  TEST_ASSERT_EQUAL(16, sqr(4));
  TEST_ASSERT_EQUAL(25, sqr(5));
  TEST_ASSERT_EQUAL(36, sqr(6));
  TEST_ASSERT_EQUAL(49, sqr(7));
}
