#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;
typedef enum fun_ret{
    R_NOK,
    R_OK
}fun_ret_t;

#define MAX_ARRAY 9UL
#define ARRAY_INIT {99, 22, 77, 44, 88, 66, 33, 55, 11}
#define ZERO_INIT 0

uint32_t my_array[MAX_ARRAY] = ARRAY_INIT;

/**
  * Bubble sort is a simple sorting algorithm.
  * Comparison-based algorithm.
  * Each pair of adjacent elements is compared :
    * The elements are "Swapped" if they are not in order.
*/

/**
  * This algorithm is not suitable for large data sets as its average and worst
    case complexity are of Ο(n^2) where 'n' is the number of items.
*/

void swap(uint32_t *first, uint32_t *second);
fun_ret_t bubble_sort(uint32_t *my_array, uint32_t arr_length);
fun_ret_t bubble_sort_optimized(uint32_t *my_array, uint32_t arr_length);
fun_ret_t print_array(uint32_t *my_array, uint32_t arr_length);

int main()
{
    print_array(my_array, MAX_ARRAY);
    bubble_sort_optimized(my_array, MAX_ARRAY);
    print_array(my_array, MAX_ARRAY);
    return 0;
}

/**
  * @brief  Swap two elements
  * @param  first  Pointer to the first element.
  * @param  second Pointer to the second element.
  * @retval Non
  */
void swap(uint32_t *first, uint32_t *second){
    *first = *first ^ *second;
    *second = *first ^ *second;
    *first = *first ^ *second;
}

/**
  * @brief  Implement Bubble Sorting
  * @param  my_array Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @retval Status if the function execution
  */
fun_ret_t bubble_sort(uint32_t *my_array, uint32_t arr_length){
    uint32_t l_counter1 = ZERO_INIT, l_counter2 = ZERO_INIT;
    if(arr_length < 0){
        return R_NOK;
    }
    else{
        for(l_counter1=ZERO_INIT; l_counter1<arr_length-1; ++l_counter1){
            for(l_counter2=ZERO_INIT; l_counter2<arr_length-l_counter1-1; ++l_counter2){
                if(my_array[l_counter2] > my_array[l_counter2+1]){
                    swap(&my_array[l_counter2], &my_array[l_counter2+1]);
                }
            }
            printf("Inner : "); print_array(my_array, MAX_ARRAY);
        }
    }
    return R_OK;
}

/**
  * @brief  Implement Bubble Sorting
  * @param  my_array Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @retval Status if the function execution
  */
fun_ret_t bubble_sort_optimized(uint32_t *my_array, uint32_t arr_length){
    uint32_t l_counter1 = ZERO_INIT, l_counter2 = ZERO_INIT;
    uint32_t l_swap_flag = 0;
    if(arr_length < 0){
        return R_NOK;
    }
    else{
        for(l_counter1=ZERO_INIT; l_counter1<arr_length-1; ++l_counter1){
            for(l_counter2=ZERO_INIT; l_counter2<arr_length-l_counter1-1; ++l_counter2){
                if(my_array[l_counter2] > my_array[l_counter2+1]){
                    swap(&my_array[l_counter2], &my_array[l_counter2+1]);
                    l_swap_flag = 1;
                }
            }
            if(0 == l_swap_flag){
                break;
            }
            else{}
            printf("Inner : "); print_array(my_array, MAX_ARRAY);
        }
    }
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
