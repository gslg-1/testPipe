#include "mod_t2.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(mod_t2);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided


TEST_SETUP(mod_t2)
{
}

TEST_TEAR_DOWN(mod_t2)
{
}

TEST(mod_t2, findBiggest_three_times)
{
  uint8_t arr1[] = {22,78,65,53,98,56,15,17};
  uint8_t arr1_length = 8;
  uint8_t arr2[] = {22,78,65,53,56};
  uint8_t arr2_length = 5;
  uint8_t arr3[] = {22};
  uint8_t arr3_length = 1;
  //All of these should pass
  TEST_ASSERT_EQUAL(98, findBiggest(arr1,arr1_length));
  TEST_ASSERT_EQUAL(78, findBiggest(arr2,arr2_length));
  TEST_ASSERT_EQUAL(22, findBiggest(arr3,arr3_length));
}
