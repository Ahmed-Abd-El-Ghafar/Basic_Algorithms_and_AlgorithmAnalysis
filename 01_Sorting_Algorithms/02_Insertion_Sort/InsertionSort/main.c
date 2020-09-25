#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;
typedef signed int sint32_t;
typedef enum fun_ret{
    R_NOK,
    R_OK
}fun_ret_t;

#define MAX_ARRAY 9UL
#define ARRAY_INIT {99, 88, 77, 66, 55, 44, 33, 22, 11}
#define ZERO_INIT 0
#define NO_SWAP 0

uint32_t my_array[MAX_ARRAY] = ARRAY_INIT;

/**
  * Insertion Sort is a simple and efficient sorting algorithm.
  * It is usually implemented when the user has a 'small data set'.
  *
*/

/**
  * Algorithm for Insertion Sort :
    1) If the element is the first one, it is already sorted.
    2) Move to next element.
    3) Compare the current element with all elements in the sorted array.
        1) If the element in the sorted array is smaller than the current element, iterate to the next element.
        2) Otherwise, shift all the greater element in the array by one position towards the "right".
    4) Insert the value at the correct position.
    5) Repeat until the complete list is sorted.
*/

fun_ret_t insertion_sort(uint32_t *my_array, uint32_t arr_length);
fun_ret_t print_array(uint32_t *my_array, uint32_t arr_length);

int main()
{
    print_array(my_array, MAX_ARRAY);
    insertion_sort(my_array, MAX_ARRAY);
    print_array(my_array, MAX_ARRAY);
    return 0;
}

/**
  * @brief  Implement Insertion Sorting
  * @param  my_array Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @retval Status if the function execution
  */
fun_ret_t insertion_sort(uint32_t *my_array, uint32_t arr_length){
    sint32_t l_counter1 = ZERO_INIT, l_counter2 = ZERO_INIT;
    sint32_t buffer_elem = ZERO_INIT;
    printf("Insertion sort start \n");
    for(l_counter1 = 1; l_counter1 < arr_length; l_counter1++){
        buffer_elem = my_array[l_counter1];
        l_counter2 = l_counter1 - 1;
        while((buffer_elem < my_array[l_counter2]) && (l_counter2 >= 0)){
            my_array[l_counter2 + 1] = my_array[l_counter2];
            l_counter2 = l_counter2 - 1;
            print_array(my_array, MAX_ARRAY);
        }
        my_array[l_counter2 + 1] = buffer_elem;
        print_array(my_array, MAX_ARRAY);
    }
    printf("Insertion sort done \n");
    return R_OK;
}

/**
  * @brief  Print the array
  * @param  my_array Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @retval Status if the function execution
  */
fun_ret_t print_array(uint32_t *my_array, uint32_t arr_length){
    uint32_t l_counter = ZERO_INIT;
    if(arr_length < 0){
        return R_NOK;
    }
    else{
        printf("Data : ");
        for(l_counter=ZERO_INIT; l_counter<arr_length; ++l_counter){
            printf("%i\t", my_array[l_counter]);
        }
        printf("\n");
    }
    return R_OK;
}
