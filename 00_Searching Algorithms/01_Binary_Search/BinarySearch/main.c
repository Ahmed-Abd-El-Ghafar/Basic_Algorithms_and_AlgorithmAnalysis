#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32_t;
typedef enum fun_ret{
    R_NOK,
    R_OK
}fun_ret_t;

#define MAX_ARRAY 9UL
#define ARRAY_INIT {11, 22, 33, 44, 55, 66, 77, 88, 99}
#define ZERO_INIT 0

uint32_t my_array[MAX_ARRAY] = ARRAY_INIT;

/**
  * Binary Search is applied on a "Sorted Array or List" of large size.
  * The time complexity of above algorithm is O(log n) -> Makes it very fast.
  * Limitation : The Array or the List (must be sorted).
  */

/**
  * Steps of implementation :
    1) Start with the middle element :
       1)
  */

/**
  * @brief  Search for uint32_t element in array based data structure .
  * @param  arr_ptr    Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @param  element    The element to search for it.
  * @param  elem_index The index of the element to search for it.
  * @retval Status if the function execution
  */
fun_ret_t binary_search(uint32_t *arr_ptr, uint32_t arr_length, uint32_t element, uint32_t *elem_index){
    uint32_t l_element_counter = ZERO_INIT;
    for(l_element_counter=ZERO_INIT; l_element_counter<arr_length; l_element_counter++){
        if(arr_ptr[l_element_counter] == element){
            *elem_index = l_element_counter;
            return R_OK;
        }
        else{
            // Nothing
        }
    }
    return R_NOK;
}

int main()
{

    return 0;
}
