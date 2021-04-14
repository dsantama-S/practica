#include "tm_queue.h"
#include "tm_queue_test_spec.h"

#include <stdio.h>
#include <stdlib.h>

void ploting_bools(bool bool_to_plot)
{
    if (bool_to_plot == 1)
        printf("|TRUE| ");
    else if (bool_to_plot == 0)
        printf("|FALSE| ");
}

bool expected_values_test_110_step_8(unsigned char values_received[256])
{
    static int j;
    unsigned char expected_values[10][256];
    int starting_counter = 0;
    bool function_value = TRUE;

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<256; j++)
		expected_values[i][j] = starting_counter + j;
        starting_counter +=16;
    }

    for (int i=0; i<256; i++)
    {
        if (values_received[i] != expected_values[j][i])
        {
            printf("Error, expected value: %x, value obtained: %x \n", expected_values[j][i], values_received[i]);
            function_value = FALSE;
        }
    }
    j += 1;
    return function_value;
}

bool expected_values_test_110_step_10(unsigned char values_received[256])
{
    static int j;
    unsigned char expected_values[4][256];
    int starting_counter = 192;
    bool function_value = TRUE;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<256; j++)
		expected_values[i][j] = starting_counter + j;
        starting_counter +=16;
    }
    for (int i=0; i<256; i++)
    {
        if (values_received[i] != expected_values[j][i])
        {
            printf("Error, expected value: %x, value obtained: %x \n", expected_values[j][i], values_received[i]);
            function_value = FALSE;
        }
    }
    j += 1;
    return function_value;
}

bool expected_values_test_120_step_8(unsigned char values_received[1024])
{
    static int j;
    unsigned char expected_values[10][1024];
    int starting_counter = 1;
    bool function_value = TRUE;

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<1024; j++)
		expected_values[i][j] = starting_counter + j;
        starting_counter +=1;
    }
    for (int i=0; i<1024; i++)
    {
        if (values_received[i] != expected_values[j][i])
        {
            printf("Error, expected value: %x, value obtained: %x \n", expected_values[j][i], values_received[i]);
            function_value = FALSE;
        }
    }
    j += 1;
    return function_value;
}

bool expected_values_test_120_step_12(unsigned char values_received[1024])
{
    static int j;
    unsigned char expected_values[10][1024];
    int starting_counter = 11;
    bool function_value = TRUE;

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<1024; j++)
		expected_values[i][j] = starting_counter + j;
        starting_counter +=1;
    }
    for (int i=0; i<1024; i++)
    {
        if (values_received[i] != expected_values[j][i])
        {
            printf("Error, expected value: %x, value obtained: %x \n", expected_values[j][i], values_received[i]);
            function_value = FALSE;
        }
    }
    j += 1;
    return function_value;
}

void expected_values_test_080(bool val1, bool val2, bool val3)
{
    if (val1 == 0)
        printf("Step 6: TRUE\n");
    else
        printf("Step 6: expected value = 0, obtained value = %d\n", val1);
    if (val2 == 1)
        printf("Step 8: TRUE\n");
    else
        printf("Step 8: expected value = 1, obtained value = %d\n", val2);
    if (val3 == 0)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected value = 0, obtained value = %d\n", val3);
}

void expected_values_test_090(bool val1, bool val2, bool val3)
{
    if (val1 == 1)
        printf("Step 6: TRUE\n");
    else
        printf("Step 6: expected value = 1, obtained value = %d\n", val1);
    if (val2 == 0)
        printf("Step 8: TRUE\n");
    else
        printf("Step 8: expected value = 0, obtained value = %d\n", val2);
    if (val3 == 1)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected value = 1, obtained value = %d\n", val3);
}

void expected_values_test_100(bool val1, bool val2, bool val3, bool val4)
{
    if (val1 == 0)
        printf("Step 6: TRUE\n");
    else
        printf("Step 6: expected value = 0, obtained value = %d\n", val1);
    if (val2 == 0)
        printf("Step 8: TRUE\n");
    else
        printf("Step 8: expected value = 0, obtained value = %d\n", val2);
    if (val3 == 1)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected value = 1, obtained value = %d\n", val3);
    if (val4 == 0)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected value = 0, obtained value = %d\n", val4);
}

void expected_values_test_110(int val1, int val2, bool val3, int val4, int val5, int val6, bool val7)
{
    if ((val1 == 10) && (val2 == 2))
        printf("Step 6: TRUE\n");
    else
        printf("Step 6: expected value of TRUEs = 10 and FALSEs = 2, obtained values = %d and %d\n", val1, val2);
    if (val3 == 1)
        printf("Step 7: TRUE\n");
    else
        printf("Step 7: expected value = 1, obtained values = %d\n", val3);
    if (val4 == 10)
        printf("Step 8: TRUE\n");
    else
        printf("Step 8: expected value of TRUEs = 10, obtained value = %d\n", val4);
    if (val5 == 4)
        printf("Step 9: TRUE\n");
    else
        printf("Step 9: expected value of TRUEs = 4, obtained value = %d\n", val5);
    if (val6 == 4)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected value of TRUEs = 4, obtained value = %d\n", val6);
    if (val7 == 1)
        printf("Step 11: TRUE\n");
    else
        printf("Step 11: expected value = 1, obtained value = %d\n", val7);
}

void expected_values_test_120(int val1, bool val2, int val3, bool val4, bool val5, int val6, int val7, bool val8)
{
    if (val1 == 10)
        printf("Step 6: TRUE\n");
    else
        printf("Step 6: expected value of TRUEs = 10, obtained value = %d\n", val1);
    if (val2 == 1)
        printf("Step 7: TRUE\n");
    else
        printf("Step 7: expected value = 1, obtained values = %d\n", val2);
    if (val3 == 10)
        printf("Step 8: TRUE\n");
    else
        printf("Step 8: expected value of TRUEs = 10, obtained value = %d\n", val3);
    if (val4 == 1)
        printf("Step 9: TRUE\n");
    else
        printf("Step 9: expected value = 1, obtained value = %d\n", val4);
    if (val5 == 0)
        printf("Step 10: TRUE\n");
    else
        printf("Step 10: expected = 0, obtained value = %d\n", val5);
    if (val6 == 10)
        printf("Step 11: TRUE\n");
    else
        printf("Step 11: expected value of TRUEs = 10, obtained value = %d\n", val6);
    if (val7 == 10)
        printf("Step 12: TRUE\n");
    else
        printf("Step 12: expected value of TRUEs = 10, obtained value = %d\n", val7);
    if (val8 == 1)
        printf("Step 13: TRUE\n");
    else
        printf("Step 13: expected value = 1, obtained value = %d\n", val8);
}

void tm_queue_test_080(void)
{
    t_tm_queue queue_1;
    unsigned char sent [32];
    unsigned char received [32];
    bool value_step_6, value_step_8, value_step_10;

    for (int i=0; i<32; i++)
    {
	    sent[i] = 0;
	    received[i] = 0;
    }
    tm_queue_init(&queue_1);
    for (int i=0; i<32; i++)
	    sent[i] = (128+i);
    value_step_6 = tm_queue_is_full(&queue_1);
    for (int i=0; i<10; i++)
	    tm_queue_insert_item(&queue_1, sent, 32);
    value_step_8 = tm_queue_is_full(&queue_1);
    tm_queue_extract_item(&queue_1, received, 32);
    value_step_10 = tm_queue_is_full(&queue_1);
    expected_values_test_080(value_step_6, value_step_8, value_step_10);
}

void tm_queue_test_090(void)
{
    t_tm_queue queue_1;
    unsigned char sent[32];
    unsigned char received [32];
    bool value_step_6, value_step_8, value_step_10;

    tm_queue_init(&queue_1);
    for (int i=0; i<32; i++)
    {
	    sent[i] = 0;
	    received[i] = 0;
    }
    for (int i=0; i<32; i++)
	    sent[i] = (144+i);
    value_step_6 = tm_queue_is_empty(&queue_1);
    tm_queue_insert_item(&queue_1, sent, 32);
    value_step_8 = tm_queue_is_empty(&queue_1);
    tm_queue_extract_item(&queue_1, received, 32);
    value_step_10 = tm_queue_is_empty(&queue_1);
    expected_values_test_090(value_step_6, value_step_8, value_step_10);
}

void tm_queue_test_100(void)
{
    t_tm_queue queue_1;
    unsigned char sent[32];
    unsigned char received[32];
    bool value_step_6, value_step_8, value_step_10, value_step_12;

    tm_queue_init(&queue_1);
    for (int i=0; i<32; i++)
    {
	    sent[i] = (160+i);
	    received[i] = 0;
    }
    value_step_6 = tm_queue_is_more_than_half_full(&queue_1);
    for (int i=0; i<5; i++)
	    tm_queue_insert_item(&queue_1, sent, 32);
    value_step_8 = tm_queue_is_more_than_half_full(&queue_1);
    tm_queue_insert_item(&queue_1, sent, 32);
    value_step_10 = tm_queue_is_more_than_half_full(&queue_1);
    tm_queue_extract_item(&queue_1, received, 32);
    value_step_12 = tm_queue_is_more_than_half_full(&queue_1);
    expected_values_test_100(value_step_6, value_step_8, value_step_10, value_step_12);
}

void tm_queue_test_110(void)
{
    t_tm_queue queue_1;
    bool value_step_6, value_step_7, value_step_9, value_step_11;
    int starting_counter=0, trues_step_6=0, falses_step_6=0, trues_step_8=0, trues_step_9=0, trues_step_10 = 0;
    unsigned char sent[16][256];
    unsigned char received[14][256];
    tm_queue_init(&queue_1);

    for (int i=0; i<16; i++)
    {
        for (int j=0; j<256; j++)
            sent[i][j] = starting_counter + j;
        starting_counter +=16;
    }
    for (int i=0; i<14; i++)
    {
        for (int j=0; j<256; j++)
            received[i][j] = 0;
    }
    for (int i=0; i<12; i++)
    {
        value_step_6 = tm_queue_insert_item(&queue_1, sent[i], 256);
        if (value_step_6 == 1)
            trues_step_6 += 1;
        else
            falses_step_6 += 1;
    }
    value_step_7 = tm_queue_is_full(&queue_1);
    for (int i=0; i<10; i++)
    {
        tm_queue_extract_item(&queue_1, received[i], 256);
        if (expected_values_test_110_step_8(received[i]) == 1)
            trues_step_8 += 1;
    }
    for (int i=12; i<16; i++)
    {
        value_step_9 = tm_queue_insert_item(&queue_1, sent[i], 256);
        if (value_step_9 == 1)
            trues_step_9 += 1;
    }
    for (int i=10; i<14; i++)
    {
        tm_queue_extract_item(&queue_1, received[i], 256);
        if (expected_values_test_110_step_10(received[i]) == 1)
            trues_step_10 += 1;
    }
    value_step_11 = tm_queue_is_empty(&queue_1);
    expected_values_test_110(trues_step_6, falses_step_6, value_step_7, trues_step_8, trues_step_9, trues_step_10, value_step_11);
}

void tm_queue_test_120(void)
{
    t_tm_queue queue_1;
    bool value_step_6, value_step_7, value_step_9, value_step_10, value_step_12, value_step_13;
    unsigned char sent[20][1024];
    unsigned char received[10][1024];
    int starting_counter = 1, trues_step_6 = 0, trues_step_8 = 0, trues_step_11 = 0, trues_step_12 = 0;
    tm_queue_init(&queue_1);

    for (int i=0; i<20; i++)
    {
        for (int j=0; j<1024; j++)
            sent[i][j] = starting_counter + j;
        starting_counter +=1;
    }
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<1024; j++)
            received[i][j] = 0;
    }
    for (int i=0; i<10; i++)
    {
        value_step_6 = tm_queue_insert_item(&queue_1, sent[i], 1024);
        if (value_step_6 == 1)
            trues_step_6 += 1;
    }
    value_step_7= tm_queue_is_full(&queue_1);
    for (int i=0; i<10; i++)
    {
        tm_queue_extract_item(&queue_1, received[i], 1024);
        if (expected_values_test_120_step_8(received[i]) == 1)
            trues_step_8 += 1;
    }
    value_step_9 = tm_queue_is_empty(&queue_1);
    value_step_10 = tm_queue_extract_item(&queue_1, received[0], 1024);
    for (int i=10; i<20; i++)
    {
        tm_queue_insert_item(&queue_1, sent[i], 1024);
        if (expected_values_test_120_step_12(sent[i]) == 1)
            trues_step_11 += 1;
    }
    for (int i=0; i<10; i++)
    {
        value_step_12 = tm_queue_extract_item(&queue_1, received[i], 1024);
        if (value_step_12 == 1)
            trues_step_12 += 1;
    }
    value_step_13 = tm_queue_is_empty(&queue_1);
    expected_values_test_120(trues_step_6, value_step_7, trues_step_8, value_step_9, value_step_10, trues_step_11, trues_step_12, value_step_13);

}
