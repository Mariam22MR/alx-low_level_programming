#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/* print the alphabet - print lowercase alphabet */

void print_alphabet(void);


/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/* islower -  checks for lowercase character
 * @c - to chaeck
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c);

/*isalpha - to chaeck the alphapt chracter
 *@c to check
 *Return 1 if lowercase or upercase - 0 if not alphapet
 */

 int _isalpha(int c);

 /**
  *print_sign print the sign of number
  *@n to check 
  *Return 1 if posstive 0 if zero and -1 if negtive
  */
int print_sign(int n);
/**
 * _abs - computes the absolute value
 */
int _abs(int);

/*
 *print_last_digit - to print the last digit
 */
int print_last_digit(int);

/* jack_buer will count every minut during 24 h
 */
void jack_bauer(void);

/*times_tabal to print 9 tabal
 */

void times_table(void);
/* add will add 2 int and return the result */

int add(int, int);

/* print_to_98 will print from n to 98*/

void print_to_98(int n);

/*print_times_table- print if n greater than 15 and less than 0
 * n will chack 
 * return will be 0
 */

void print_times_table(int n);


#endif
