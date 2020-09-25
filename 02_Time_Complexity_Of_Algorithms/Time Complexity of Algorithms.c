
/**
  * For any defined problem, there can be (N) number of solution.
    -> Need to decide which solution is the best based on the circumstances ?
*/

/**
  * Example : Find the square of a number
    -> Solution 1 :
    for i=1 to n
        do n = n + n
    // when the loop ends n will hold its square
    return n
    ****************************
    -> Solution 2 :
    return n*n
*/

/**
  * What is Time Complexity ?
    - Time complexity of an algorithm signifies "The total time required by the program to run till its completion".
    - The time complexity of algorithms is most commonly expressed using the "Big O notation".
        - It's an asymptotic notation to represent the time complexity.

    - Time Complexity is most commonly estimated by :-
        - Counting the number of elementary steps performed by any algorithm to finish execution.
        - At -> Solution 1 : The loop will run (n number) of times.
            -> Time Complexity = n
            -> As the value of (n) will increase the time taken will also increase.
        - At -> Solution 2 : Time complexity is "constant"
            -> Time Complexity = "constant" -> Not dependent on the value of "n" -> 1 Step

    - Algorithm's performance may vary with different types of input data
        - We usually use the (Worst-case Time complexity) of an algorithm
            -> Maximum time taken for any input size.
*/

/**
  * Calculating Time Complexity ?
    - The most common metric for calculating time complexity is (Big O notation).
    - Remove all constant factors -> Running time can be estimated in relation to (N)

    - Example 1 :
        statement;
        -> Time Complexity will be Constant (Single statement).
        -> The running time of the statement will not change in relation to (N).

    - Example 2 :
        for(i=0; i < N; i++)
        {
            statement;
        }
        -> Time Complexity : Linear
            -> The running time of the loop is directly proportional to (N).
            -> When N doubles -> running time doubles

    - Example 3 :
        for(i=0; i < N; i++)
        {
            for(j=0; j < N;j++)
            {
            statement;
            }
        }
        ->
*/








