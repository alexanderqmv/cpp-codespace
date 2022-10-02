#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c_prob = 0, c_tab = 0, c_newString = 0;
	int symbol;

	for (; (symbol=getchar()) != EOF;)
	{
		if (symbol == ' ')
		{
			c_prob++;
		} 
		if (symbol == '\t') 
		{
			c_tab++;
		}
		if (symbol == '\n') {
			c_newString++;
		}
		printf("probs = %d\ntabs = %d\nnew strings = %d",c_prob,c_tab,c_newString);
		
	}
	return 0;
}
