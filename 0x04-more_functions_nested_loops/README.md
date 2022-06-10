0x04. C - More functions, more nested loops

In this lesson, here are the following things we learnt;

1. Nested loops are and how to use them
2. Functions and how to use them
3. Declaration and definition of a function
4. Prototype
5. Variables
6. The gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
7. Header files and how to use them with #include

We were tasked to come up with solutions for the following tasks below in other to meet with the learning objectives of this lesson

TASKS

0. isupper

Write a function that checks for uppercase characte using the prototype int _isupper(int c); which returns i if c is uppercase and returns 0 otherwise.


1. isdigit

Write a function that checks for a digit (0 through 9) with prototype int _isdigit(int c); which returns 1 if c is a digit and returns 0 otherwise.


2. Collaboration is multiplication

Write a function that multiplies two integers using the prototype int mul(int a, int b); .


3. The numbers speak for themselves

Write a function that prints the numbers, from 0 to 9, followed by a new line with prototype void print_numbers(void); using _putchar twice in the code


4. I believe in numbers and signs

Write a function that prints the numbers, from 0 to 9, followed by a new line with prototype void print_most_numbers(void); does not print 2 and 4 and _putchar can be used twice in the code.


5. Numbers constitute the only universal language

Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line with Prototype: void more_numbers(void); and _putchar only use _putchar 3 times in the code.


6. The shortest distance between two points is a straight line

Write a function that draws a straight line in the terminal which uses prototype void print_line(int n); with _putchar function being used to print. Where n is the number of times the character _ should be printed. If n is 0 or less, the function should only print \n


7. I feel like I am diagonally parked in a parallel universe

Write a function that draws a diagonal line on the terminal with prototype void print_diagonal(int n); and _putchar function to print.


8. You are so much sunshine in every square inch

Write a function that prints a square, followed by a new line with prototype void print_square(int size); ,Where size is the size of the square and putchar function to print.


9. Fizz-Buzz

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.Each number or word should be separated by a space.


10. Triangles

Write a function that prints a triangle, followed by a new line with prototype void print_triangle(int size);


11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
Compile with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm



12. Numbers have life; they're not just symbols on paper

Write a function that prints an integer with Prototype: void print_number(int n);. The use of  _putchar function to print is allowed but not the use of long or arrays or any form of hard-coding.
