#include "unity.h"
#include <calendar.h>

#define PROJECT_NAME  "Calendar"

/* Prototypes for all the test functions */
void gotoxy(void);
void SetColor(void);
void display(void);
int getkey(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(gotoxy);
  RUN_TEST(SetColor);
  RUN_TEST(display);
  RUN_TEST(getkey);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void gotoxy(void) {
  TEST_ASSERT_EQUAL(("January","February","March","April","May","June","July","August","September","October","November","December"));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL((else));
}

void SetColor(void) {
  TEST_ASSERT_EQUAL(("Mon","Tue","Wed","Thu","Fri","Sat","Sun"));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL((else));
}

void display(void) {
  TEST_ASSERT_EQUAL(1945);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(<=1945);
}

void getkey(void) {
  TEST_ASSERT_EQUAL(31,28,31,30,31,30,31,31,30,31,30,31);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(else);
}
