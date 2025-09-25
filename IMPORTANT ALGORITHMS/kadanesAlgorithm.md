# Kadane's Algorithm

## Most optimized way to find the maximum sub array is by using **Kadane's  Alorithm** . 

Given an Array [1,2,3,4,5] what will be the best way to find out the array which gives the maximum sum ?

Solution :- Kadane's Algorithm 

###algorithm :- 
    
    1. Define maximum_sum = INT_MIN (for negative edge cases) and current_sum = 0;

    2. loop i = 0 ---> i < length(arr)

    3. current_sum += arr[i]

    4. the moment we add a negative number our current_sum will be  decreased
