/*
 * File: 1-args.c
 * Author: Michael Majemite
 */

#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: array of pointers to the arguments passed to the program
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    /* unused parameter argv */
    (void) argv;

    /* print the number of arguments */
    printf("%d\n", argc - 1);

    return 0;
}

