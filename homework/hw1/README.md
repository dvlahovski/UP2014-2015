## Homework 0

#### Deadline - 01.12.2014 23:56

### Task 0
Write a program, which reads from the standart input (using cin) the coordinates of 6 points and prints "true" or "false" if the
triangle that is defined from the first three points is similar to the triangle defined from the other three points

Example:
```c++
1 1
4 1
6 5
// From here are the coordinates of the second triangle
-2 -2
3 -1
1 3
// -> false

-2.14 3.2
-0.18 -2.4
3.48 2.84
// From here are the coordinates of the second triangle
-0.98 0.6
0.98 -5
4.64 0.24
// -> true

0.1 0.3
6.1 -2.88
7.3 -5.74
// From here are the coordinates of the second triangle
-0.5 -0.03
7.3 -4.16
8.86 -7.88
// -> true
```
The input data for ever point are 2 float numbers divided by a space. Every pair of numbers is on a new line
The ouput data should be "true" or "false" (only that)

### Task 1
By a given date, print the next one (the input date will be correct)

Example:
```c++
28 02 2014
// -> 01.02.2014
// 2014 is not a leap year

28 02 2008
// -> 29.02.2008
// 2008 is a leap year

28 02 2100
// -> 01.03.2100
//2100 IS NOT a leap year

31 12 1999
// -> 01.01.2000
```
The input data are 3 integers divied by spaces
The output date should be the next date in the given format "dd.mm.yyyy"

### Task 2
Print all numbers below 50000 which are equal to the sum of the factorials of their digits (such number is 145 = 1! + 4! + 5!)

Input data: none
Output data: every number that complies the aforementioned condition should be printed on a new line

### Task 3
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.
There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
Print all the circular primes below 1000 (every number on a new line)


#### Important: scoring the homeworks and format ####
Every task should be in a separate file, named task#.cpp where # is the number of the task.
You read the input data, make your calculations, and print the output and exit (no more, no less)
Please, keep in mind that for every task a specific format is given both for input and output data. This is so, because
the homeworks will be automatically checked - that means that a program (written by us) will run each homework, give
the input data and will expect the output data in exactly the specified format. For example, on task0, if
you print "The given triangles are similar" insted of printing "true" - this will be considered as a wrong answer
and therefore your task is wrong. 