#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;
typedef enum fun_ret{
    R_NOK,
    R_OK
}fun_ret_t;

#define MAX_ARRAY 5UL
#define ARRAY_INIT {11, 22, 33, 44, 55}
#define ZERO_INIT 0

uint32_t my_array[MAX_ARRAY] = ARRAY_INIT;

int main()
{

    return 0;
}
