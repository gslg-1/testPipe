#include "mod_t3.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(mod_t3);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided


TEST_SETUP(mod_t3)
{
}

TEST_TEAR_DOWN(mod_t3)
{
}

TEST(mod_t3, testSortUp)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(36, getGreatest(17,36));
  TEST_ASSERT_EQUAL(0, getGreatest(0,0));
  TEST_ASSERT_EQUAL(255, getGreatest(17,255));
  TEST_ASSERT_EQUAL(255, getGreatest(0,255));
}

TEST(mod_t3, testSwap)
{
  //All of these should pass
  TEST_IGNORE_MESSAGE("Ignoriere diesen Test")
}