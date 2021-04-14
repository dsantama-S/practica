#include "tm_queue.h"
#include "basic_types.h"

#include <stdio.h>
#include <stdlib.h>

void tm_queue_init(t_tm_queue* queue)
{
    for (int i=0; i<(NUM_ITEMS + 1); i++)
    {
	queue->num_bytes[i] = 0;
	for (int j=0; j<SIZE_ITEMS; j++)
		queue->tm_queue[i][j] = 0;
    }
    queue->extract  = 0;
    queue->insert = 0;
}

bool tm_queue_is_full(t_tm_queue* queue)
{
    bool queue_full = FALSE;
    int queue_state = ((queue->extract) - (queue->insert));

    if ((queue_state < 0) && (queue_state + (NUM_ITEMS+1) == 1))
        queue_full = TRUE;
    else if (queue_state == 1)
        queue_full = TRUE;
    return queue_full;
}

bool tm_queue_is_empty(t_tm_queue* queue)
{
    bool queue_empty = FALSE;
    int queue_state = ((queue->extract) - (queue->insert));

    if (queue_state == 0)
        queue_empty = TRUE;
    return queue_empty;
}

bool tm_queue_is_more_than_half_full(t_tm_queue* queue)
{
    bool queue_half_full = FALSE;
    bool queue_empty = tm_queue_is_empty(queue);
    int queue_state = ((queue->extract) - (queue->insert));

    if (queue_empty == FALSE)
    {
        if ((queue_state < 0) && ((queue_state + (NUM_ITEMS+1)) <= (NUM_ITEMS/2)))
            queue_half_full = TRUE;
        else if ((queue_state >= 0) &&(queue_state <= (NUM_ITEMS/2)))
            queue_half_full = TRUE;
    }
    return queue_half_full;
}

bool tm_queue_insert_item(t_tm_queue* queue, unsigned char data[], int num_bytes)
{
    bool queue_full = tm_queue_is_full(queue);
    bool insert_try = TRUE;

    if (queue_full == TRUE)
        insert_try = FALSE;
    else
    {
        for (int i=0; i<=num_bytes; i++)
            queue->tm_queue[queue->insert][i] = data[i];
        queue->insert += 1;
        if (queue->insert == (NUM_ITEMS+1))
            queue->insert = 0;
    }
    return insert_try;
}

bool tm_queue_extract_item(t_tm_queue* queue, unsigned char data[], int num_bytes)
{
    bool queue_empty = tm_queue_is_empty(queue);
    bool extract_try = TRUE;

    if (queue_empty == TRUE)
        extract_try = FALSE;
    else
    {
        for (int i=0; i<=num_bytes; i++)
       	    data[i] = queue->tm_queue[queue->extract][i];
        queue->extract += 1;
        if (queue->extract == (NUM_ITEMS+1))
            queue->extract = 0;
    }
    return extract_try;
}
