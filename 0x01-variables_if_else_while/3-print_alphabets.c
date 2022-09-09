#include <stdio.h>
 /**
  *Description: main - prints lower case then upper followed by new line.
  *
  * *Return: 0 if functional
  */
int main(void)

{
		char ch;
		
		for(ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return 0;
}
