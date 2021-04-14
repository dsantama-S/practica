#include "basic_types.h"
#include "tm_queue.h"
#include "tm_queue_test_spec.h"

#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Results of tm_queue_test_080: \n\n");
    tm_queue_test_080();
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Results of tm_queue_test_090: \n\n");
    tm_queue_test_090();
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Results of tm_queue_test_100: \n\n");
    tm_queue_test_100();
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Results of tm_queue_test_110: \n\n");
    tm_queue_test_110();
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Results of tm_queue_test_120: \n\n");
    tm_queue_test_120();
    printf("------------------------------------------------------------------------------------------------------------\n");
    return 0;
}
