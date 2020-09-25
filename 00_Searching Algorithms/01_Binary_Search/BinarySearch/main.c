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
       1) If the (target) value is equal to the middle element of the array, then return the index of the middle element.
       2) If not :
          1)
  */

fun_ret_t binary_search_1(uint32_t *arr_ptr, uint32_t arr_length, uint32_t element, uint32_t *elem_index);
fun_ret_t binary_search_2(uint32_t *arr_ptr, uint32_t arr_start, uint32_t start_end, uint32_t element,
                          uint32_t *elem_index);

int main()
{
    uint32_t l_element_index = ZERO_INIT;
    fun_ret_t ret_status = R_NOK;

    printf("l_element_index = %i\n", l_element_index);

    ret_status = binary_search_2(my_array,0, 9, 99, &l_element_index);

    if(R_NOK == ret_status){
        printf("Element Does not Exist !!\n");
    }
    else{
        printf("l_element_index = %i\n", l_element_index);
    }
    return 0;
}

/**
  * @brief  Search for uint32_t element in array based data structure .
  * @param  arr_ptr    Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @param  element    The element to search for it.
  * @param  elem_index The index of the element to search for it.
  * @retval Status if the function execution
  */
fun_ret_t binary_search_1(uint32_t *arr_ptr, uint32_t arr_length, uint32_t element, uint32_t *elem_index){
    uint32_t max_index = arr_length - 1;
    uint32_t min_index = ZERO_INIT;
    uint32_t middel_index = ZERO_INIT;
    while(max_index >= min_index){
        middel_index = (max_index + min_index) / 2;
        if(arr_ptr[middel_index] == element){
            *elem_index = middel_index;
            return R_OK;
        }
        else if(arr_ptr[middel_index] > element){
            max_index = middel_index - 1;
        }
        else{
            min_index = middel_index + 1;
        }
    }
    return R_NOK;
}

/**
  * @brief  Search for uint32_t element in array based data structure .
  * @param  arr_ptr    Pointer to the array.
  * @param  arr_length Number of elements in the Array.
  * @param  element    The element to search for it.
  * @param  elem_index The index of the element to search for it.
  * @retval Status if the function execution
  */
fun_ret_t binary_search_2(uint32_t *arr_ptr, uint32_t arr_start, uint32_t arr_end, uint32_t element,
                          uint32_t *elem_index){
    uint32_t middel_index = ZERO_INIT;
    if(arr_end >= arr_start){
        middel_index = arr_start + (arr_end - arr_start) / 2;
        if(arr_ptr[middel_index] == element){
            *elem_index = middel_index;
            return R_OK;
        }
        else if(arr_ptr[middel_index] > element){
            return binary_search_2(my_array, arr_start, middel_index-1, element, elem_index);
        }
        else{
            return binary_search_2(my_array, middel_index+1, arr_end, element, elem_index);
        }
    }
    return R_NOK;
}
