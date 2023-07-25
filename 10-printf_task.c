#include "main.h"

/*CODE TO EVALUATE IF A CHARACTER IS PRINTABLE*/

/**
 * is_printable - This evaluates if a char is printable at the end.
 * @c: This is the character to be evaluated.
 * Return: 1 if c is printable, otherwise 0.
 */
int is_printable(char c) /*Prototype used*/
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/*CODE THAT APPENDS ASCCI IN HEXADECIMALS CODE TO BUFFER*/

/**
 * append_hexa_code - This appends ascci in hexadecimal code to buffer.
 * @buffer: This consists an array of characters
 * @i: This signifies the index at which to start appending.
 * @ascii_code: ASSCI CODE
 * Return: Always (3)
 */
int append_hexa_code(char ascii_code, char buffer[], int i)  /*Prototype used*/ 
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/*CODE THAT VERIFIIES IF A CHAR IS A DIGIT*/

/**
 * is_digit - This will verify if a char is a digit
 * @c: This involves the Char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/*CODE THAT CASTA A NUMBER TO THE SPECIFIED SIDE*/


/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num:  The number to be casted
 * @size: A number indicating the type to be casted.
 * Return: A Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

