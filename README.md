# Dereferencing a NULL Pointer in C
This repository demonstrates a common error in C programming: dereferencing a null pointer.  Dereferencing a null pointer is a serious error that can lead to program crashes, unpredictable behavior, or security vulnerabilities.  The example showcases the error and provides a solution.

## Bug
The `bug.c` file contains code that attempts to dereference a null pointer. This is undefined behavior in C and often causes a segmentation fault.

## Solution
The `bugSolution.c` file presents a corrected version, demonstrating how to avoid dereferencing null pointers by properly checking for null before accessing the pointer's memory location.