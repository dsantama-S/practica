#ifndef TM_QUEUE_TEST_SPEC_H_INCLUDED
#define TM_QUEUE_TEST_SPEC_H_INCLUDED
#include "tm_queue.h"

void tm_queue_test_080(void);
void tm_queue_test_090(void);
void tm_queue_test_100(void);
void tm_queue_test_110(void);
void tm_queue_test_120(void);
void expected_values_test_080(bool val1, bool val2, bool val3);
void expected_values_test_090(bool val1, bool val2, bool val3);
void expected_values_test_100(bool val1, bool val2, bool val3, bool val4);
void expected_values_test_110(int val1, int val2, bool val3, int val4, int val5, int val6, bool val7);
void expected_values_test_120(int val1, bool val2, int val3, bool val4, bool val5, int val6, int val7, bool val8);
bool expected_values_test_110_step_8(unsigned char values_received[256]);
bool expected_values_test_110_step_10(unsigned char values_received[256]);
bool expected_values_test_120_step_8(unsigned char values_received[1024]);
bool expected_values_test_120_step_12(unsigned char values_received[1024]);

#endif // TM_QUEUE_TEST_SPEC_H_INCLUDED
