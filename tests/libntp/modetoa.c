#include "testcalshims.h"
//#include "config.h"
//#include "libntptest.h" //used for google test framework, not needed
#include "unity.h"
//#include "ntp_stdlib.h"



void test_KnownMode(void) {
	const int MODE = 3; // Should be "client"
	TEST_ASSERT_EQUAL_STRING("client", modetoa(MODE));

}

void test_UnknownMode(void) {
	const int MODE = 100;

	TEST_ASSERT_EQUAL_STRING("mode#100", modetoa(MODE));
//	EXPECT_STREQ("mode#100", modetoa(MODE));
}