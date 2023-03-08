#include <unistd.h>
/*putchar function*/
int _putchar (char c);
/**
int _putchar(char c)
{
return (write(1, &c, 1));
}
*/

/*this function outputs strings followed by a new line*/
void _puts_recursion(char *s);

/* print strings in reverse*/
void _print_rev_recursion(char *s);

/* print out string length */
int _strlen_recursion(char *s);

/*return factorial of a number*/
int factorial(int n);

/*returns x raised to the power of y*/
int _pow_recursion(int x, int y);

/*returns the square root of a number*/
int is_prime_number(int n);

/*returns 1 if the input integer is a prime number, otherwise return 0.*/
int is_prime_number(int n);

/*a function that returns 1 if a string is a palindrome and 0 if not.*/
int is_palindrome(char *s);

/*a function that compares two strings*/
int wildcmp(char *s1, char *s2);
