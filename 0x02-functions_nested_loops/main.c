#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints the characters of the "_putchar" message
 *              one by one and adds a new line after printing all characters.
 *
 * Return: 0 on success
 */
int main(void)
{
    char text[] = "_putchar";
    int i;

    /* Print each character of the "_putchar" message */
    for (i = 0; text[i] != '\0'; i++)
    {
        _putchar(text[i]);
    }

    /* Add a new line after printing the "_putchar" message */
    _putchar('\n');

    return (0);
}

