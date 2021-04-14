#ifndef TM_QUEUE_H_INCLUDED
#define TM_QUEUE_H_INCLUDED

#include "basic_types.h"
#define NUM_ITEMS 10
#define SIZE_ITEMS 1040

typedef struct
{
    unsigned char tm_queue[NUM_ITEMS + 1][SIZE_ITEMS];
    int num_bytes[NUM_ITEMS + 1]; //ARRAY QUE CONTIENE EL NUMERO DE BYTES DE CADA ELEMENTO
    int extract;
    int insert;

}   t_tm_queue;

void tm_queue_init(t_tm_queue* queue);

bool tm_queue_is_full(t_tm_queue* queue);

bool tm_queue_is_empty(t_tm_queue* queue);

bool tm_queue_is_more_than_half_full(t_tm_queue* queue);

bool tm_queue_insert_item(t_tm_queue* queue, unsigned char data[], int num_bytes);

bool tm_queue_extract_item(t_tm_queue* queue, unsigned char data[], int num_bytes);

#endif // TM_QUEUE_H_INCLUDED
