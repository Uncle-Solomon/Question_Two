# BitNine Question 2 
This repository contains three C programs that calculate the value of the Fibonacci sequence for a given input n. Each program uses a different approach to compute the Fibonacci number and provides the result in the terminal.

## Prerequisites
Make sure you have the following installed on your system:

* C Compiler (e.g., GCC)

## How to Run
* Clone or download the repository to your local machine.
* Open a terminal or command prompt and navigate to the downloaded repository folder.

### Dynamic Approach
* Compile the Dynamic_Approach.c program using the C compiler:
```
gcc -o Dynamic_Approach Dynamic_Approach.c
```
* Run the compiled executable:
```
./Dynamic_Approach
```
### Iterative Approach
* Compile the Iterative_Approach.c program using the C compiler:
```
gcc -o Iterative_Approach Iterative_Approach.c
```
* Run the compiled executable:
```
./Iterative_Approach
```
### Recursive Approach
* Compile the Recursive_Approach.c program using the C compiler:
```
gcc -o Recursive_Approach Recursive_Approach.c
```
* Run the compiled executable:
```
./Recursive_Approach
```
#### Example Output
* For each approach, the program will print the value of F(n) where n is the input value.

#### Notes
* The example value of n in each program is set to 10. You can modify this value in the main() function to calculate the Fibonacci number for a different n.
* The maximum value of n for memoization in the Dynamic_Approach.c program is defined as MAX_N (100 in this case). You can adjust this value if you need to compute Fibonacci numbers for larger n.


# Discussion on Advantages and Disadvantages to each approach

## Recursive Approach:
### Advantages
* Simple to understand and implement: The recursive implementation is easy to understand since it closely reflects the mathematical formula of the recurrence relation. The code directly reflects the formula F(n) = F(n-3) + F(n-2) and is therefore straightforward for those who are familiar with the mathematical statement.

### Disadvantages:

* Exponential time complexity: The recursive function recalculates the exact same sub problems numerous times, resulting in an exponential amount of redundant calculations. This leads to poor performance and restricts the practical use of bigger values of n.

* Prone to stack overflow:  For large values of n, recursive calls might soon surpass the stack capacity, resulting in a stack overflow fault. This limits the function's maximum practical n value for which it may be evaluated.

## Iterative Approach:

### Advantages:
* More efficient than the recursive method: The iterative method calculates each F(i) just once, avoiding the unnecessary calculations found in the recursive method. As a result, for bigger values of n, it is substantially more efficient.
* Linear time complexity: Because it iterates from 3 to n, the iterative solution has a linear time complexity of O(n) performing a constant-time operation at each step.

### Disadvantages:
* For high values of n, this is still not the most economical solution: Although the iterative strategy outperforms the recursive approach, it is not the best answer for very high values of n. It can be time-consuming to calculate all intermediate F(i) values sequentially.

## Dynamic Programming (Memoization) Approach:

### Advantages:
* More efficient for bigger n values: The memoization technique optimises the recursive solution by putting previously computed values in a table (memoization table). This eliminates duplicate computations and boosts efficiency dramatically for bigger values of n.
* Linear time complexity: Because of the reduced amount of calculations, the memoization strategy, like the iterative approach, has linear time complexity O(n).

### Disadvantages:
* Slightly more difficult to implement due to the usage of the memoization table: The dynamic programming technique necessitates the maintenance and updating of the memoization table, which adds some complexity to the implementation when compared to the simpler recursive or iterative approaches.
* The memoization table may require more memory: While the memoization strategy reduces time complexity, it comes at the expense of greater memory utilisation owing to the necessity for the memoization table. This additional memory burden may be an issue in some instances.


In summary, the recursive strategy is the easiest to grasp, but it performs poorly owing to repeated calculations and is impractical with a large value for "n". Although the iterative strategy increases speed, it is not the most efficient option for really large values of "n" as well. The dynamic programming technique (memoization) provides the most efficient solution by minimising duplicate calculations; nevertheless, it takes some extra system memory to keep the memoization table. When dealing with recursive issues with overlapping subproblems, it is frequently advised and has become common pratice to use the dynamic programming technique.


