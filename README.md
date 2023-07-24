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

