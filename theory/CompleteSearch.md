# Basic Complete Search 
In this type of problem all we need is to check all possibilities in the solution space, whether it be all elements, pairs or permutations. Usually only works for small spaces.

The time complexity of the problem vary:
- O(N) - for linear search
- O(N²) - for checking pairs
- O(N³) - for checking triplets
- O($2^n$) - for all subsets
- O(N!) - for all permutations
- O($B^D$) - for recursive backtracking 

# Subsets
## Generating all Subsets Recursively
If the problem is small enough we can simply solve it by generating all existing subsets recursively and testing them.

## Generating Subsets with Bitmasks
A bitmask is a way to represent the subsets, we take an integer like 3 and use it binary representation 0011, with the 1 representing the element in that position. The integer 0 would represent the empty subset.

```cpp
1 << x;
```
It means that we are going to shift to the left the position of 0001 x times. Basically we are doing 2^x, we use it to thle us how many subsets are going to be generated if we have x elements in the original set.

## Permutation
Permutations can be placed into lexicographical order in almost the same way. We first group permutations by their first element; if the first element of two permutations are equal, then we compare them by the second element; if the second element is also equal, then we compare by the third element, and so on.

In cpp we have the function next_permutation() that takes an vector and modify the vector to be the next permutation and return true, if it not possible to do a next permutation it returns false.

## Backtracking
A backtracking algorithm begins with an empty solution and extends the solution step by step. The search recursively goes through all different ways how a solution can be constructed.

