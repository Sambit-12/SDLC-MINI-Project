/**
 * @file test.c
 * @author Sambit Nayak (nayaksambit99@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "snakewatergun.h"
#include "unity.h"

/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_SWG1(void);
void test_SWG2(void);
void test_SWG3(void);
void test_SWG4(void);
void test_SWG5(void);
void test_SWG6(void);
void test_SWG7(void);



/* Write all the test functions */ 
/**
 * @brief In this project user ables to choose between S W G for Snake Water Gun respectiveley after that computer chooses and then points is displayed so to test the user input and computer input
 * and computer input using if else C random file we are using test case in this project.
 * 
 */

void test_SWG1(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(0, SWG('s','s'));
}
void test_SWG2(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(1, SWG('s','w'));
}
void test_SWG3(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(-1, SWG('w','s'));
}
void test_SWG4(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(1, SWG('w','g'));
}
void test_SWG5(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(-1, SWG('g','w'));
}
void test_SWG6(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(-1, SWG('s','g'));
}
void test_SWG7(void) {
  
   //check
   
   TEST_ASSERT_EQUAL(1, SWG('g','s'));
}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_SWG1);
  RUN_TEST(test_SWG2);
  RUN_TEST(test_SWG3);
  RUN_TEST(test_SWG4);
  RUN_TEST(test_SWG5);
  RUN_TEST(test_SWG6);
  RUN_TEST(test_SWG7);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
