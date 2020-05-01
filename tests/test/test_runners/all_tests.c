#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(ProductionCode);
  RUN_TEST_GROUP(ProductionCode2);
  RUN_TEST_GROUP(mod_t1);
  RUN_TEST_GROUP(mod_t2);
  RUN_TEST_GROUP(mod_t3);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
