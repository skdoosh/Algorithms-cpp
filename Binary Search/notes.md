# Binary Search
## Purpose
Finds the position of a target value within a sorted array
## Working
1. Compares the target value to the middle element of the array, returns the position of the middle value if it is equal to the target value.
2. If they are not equal, the half in which the target cannot lie (since the array is sorted) is eliminated.
3. The search continues in the remaining half, repeating the above two points.
4. If the search ends with the remaining half being empty, the target is not in the array.

This iterative procedure keeps track of the search boundaries with the two variables 𝐿 and 𝑅.
The middle position is calculated as the floor of 
(𝐿+𝑅)/2, which is the greatest integer less than or equal to (𝐿+𝑅)/2.

## Time Complexity
Binary search runs in logarithmic time in the worst case, making 𝑂(log 𝑛) comparisons, where 𝑛 is the number of elements in the array. Binary search is faster than linear search except for small arrays. However, the array must be sorted first to be able to apply binary search.