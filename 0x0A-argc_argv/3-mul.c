/**

File: 3-mul.c
Author: Michael Majemite
Description: This program multiplies two numbers provided as command-line arguments
*/
#include <stdio.h>
#include <stdlib.h>

/**

main - Entry point of the program
@argc: argument count
@argv: argument vector
Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int a, b, result;
if (argc != 3)
{
    printf("Error: Please provide two numbers as command-line arguments.\n");
    return 1;
}

/* Convert command line args to integers */
a = atoi(argv[1]);
b = atoi(argv[2]);

result = a * b;

printf("%d\n", result);

return 0;
}
