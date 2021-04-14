#include "unity.h"
#include<testcal.h>

#define PROJECT_NAME "CALCONV"

void test_cal(void);
void test_conv(void);

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_cal);
  RUN_TEST(test_conv);
 // RUN_TEST(test_multiply);
  //RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_cal(void) {
  TEST_ASSERT_EQUAL(10, cal(5,5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, cal(50, 2));
}

void test_conv(void) {
  TEST_ASSERT_EQUAL(8192.00,1024.00, conv(1, 1));
  
  /* Dummy fail*/
  
}