#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleName_given_2_2_5_expects_is_isoceles (void) {
	char *triangleName = getTriangleName(2, 2, 5);
	
	TEST_ASSERT_EQUAL_STRING("Isosceles", triangleName);
}
	
void test_getTriangleName_given_15_36_36_expects_is_isoceles (void) {
	char *triangleName = getTriangleName(15, 36, 36);
	
	TEST_ASSERT_EQUAL_STRING("Isosceles", triangleName);
}

void test_getTriangleName_given_21_56_21_expects_is_isoceles (void) {
	char *triangleName = getTriangleName(21, 56, 21);
	
	TEST_ASSERT_EQUAL_STRING("Isosceles", triangleName);
}
	
void test_getTriangleName_given_2_2_2_expects_is_equailateral (void) {
	char *triangleName = getTriangleName(2, 2, 2);
	
	TEST_ASSERT_EQUAL_STRING("Equilateral", triangleName);
}

void test_getTriangleName_given_12_12_12_expects_is_equailateral (void) {
	char *triangleName = getTriangleName(12, 12, 12);
	
	TEST_ASSERT_EQUAL_STRING("Equilateral", triangleName);
}

void test_getTriangleName_given_65_65_65_expects_is_equailateral (void) {
	char *triangleName = getTriangleName(65, 65, 65);
	
	TEST_ASSERT_EQUAL_STRING("Equilateral", triangleName);
}

void test_getTriangleName_given_7_2_6_expects_is_scalene (void) {
	char *triangleName = getTriangleName(7, 2, 6);
	
	TEST_ASSERT_EQUAL_STRING("Scalene", triangleName);
}

void test_getTriangleName_given_18_96_25_expects_is_scalene (void) {
	char *triangleName = getTriangleName(18, 96, 25);
	
	TEST_ASSERT_EQUAL_STRING("Scalene", triangleName);
}

void test_getTriangleName_given_93_7_43_expects_is_scalene (void) {
	char *triangleName = getTriangleName(93, 7, 43);
	
	TEST_ASSERT_EQUAL_STRING("Scalene", triangleName);
}

void test_getTriangleName_given_10_minus2_50_expects_is_not_a_triangle (void) {
	char *triangleName = getTriangleName(10, -2, 50);
	
	TEST_ASSERT_EQUAL_STRING("This is not a triangle!", triangleName);
}

void test_getTriangleName_given_0_2_10_expects_is_not_a_triangle (void) {
	char *triangleName = getTriangleName(0, 2, 10);
	
	TEST_ASSERT_EQUAL_STRING("This is not a triangle!", triangleName);
}	

void test_getTriangleName_given_13_0_minus5_expects_is_not_a_triangle (void) {
	char *triangleName = getTriangleName(13, 0, -5);
	
	TEST_ASSERT_EQUAL_STRING("This is not a triangle!", triangleName);
}

void test_getTriangleName_given_minus0_56_minus23_expects_is_not_a_triangle (void) {
	char *triangleName = getTriangleName(-0, 56, -23);
	
	TEST_ASSERT_EQUAL_STRING("This is not a triangle!", triangleName);
}

