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
* Simple to understand and implement: The recursive implementation closely resembles the mathematical definition of the recurrence relation, making it easy to grasp.
*Corresponds directly to the mathematical definition of the recurrence relation: The code directly reflects the formula F(n) = F(n-3) + F(n-2), making it intuitive for someone familiar with the mathematical expression.

### Disadvantages:

* Exponential time complexity: The recursive function recalculates the same subproblems multiple times, leading to an exponential number of redundant computations. This results in poor performance and limits the practicality for larger values of n.
* Prone to stack overflow: For large values of n, the recursive calls can quickly exceed the stack size, causing a stack overflow error. This restricts the maximum feasible value of n for which the function can be evaluated.

## Iterative Approach:

### Advantages:
* More efficient than the recursive approach: The iterative approach calculates each F(i) only once, eliminating the redundant computations seen in the recursive version. As a result, it is significantly more efficient for larger values of n.
* Linear time complexity: The iterative solution has a linear time complexity O(n), as it iterates from 3 to n, performing a constant-time operation at each step.

### Disadvantages:
Still not the most efficient solution for large values of n: Although the iterative approach is an improvement over the recursive approach, it is not the most optimal solution for very large values of n. Calculating all intermediate F(i) values sequentially can be time-consuming.

## Dynamic Programming (Memoization) Approach:

### Advantages:
* Efficient solution for larger values of n: The memoization approach optimizes the recursive solution by storing previously calculated values in a table (memoization table). This avoids redundant computations and significantly improves performance for larger values of n.
* Linear time complexity: Like the iterative approach, the memoization approach has linear time complexity O(n) due to the reduced number of calculations.

### Disadvantages:
* Slightly more complex to implement due to the use of the memoization table: The dynamic programming approach requires maintaining and updating the memoization table, which adds some complexity to the implementation compared to the simpler recursive or iterative versions.
* May consume additional memory for the memoization table: While the memoization approach improves time complexity, it comes at the cost of increased memory usage due to the need for the memoization table. In some cases, this extra memory overhead may be a concern.

In summary, the recursive approach is the simplest to understand but has poor performance due to redundant computations and is not practical for large n. The iterative approach improves performance but is still not the most efficient solution for very large n. The dynamic programming approach (memoization) offers the most efficient solution, avoiding redundant computations, but it requires some extra memory to store the memoization table. Overall, the dynamic programming approach is often the recommended choice when dealing with recursive problems with overlapping subproblems.

