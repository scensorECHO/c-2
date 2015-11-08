// binary to decimal converter

#include <stdio.h>

int convert(int b, int c, int t);

/*	main function:
	creates variables for the binary and decimal digits, 
	asks user for binary value, a passes values to a
	recursive function, the binary value and starting
	multiplier 1
*/
int main()
{
	int binary;
	int decimal;
	
	printf("Enter a binary number: ");
	scanf("%d",&binary);

	decimal = convert(binary, 1, 0);
	printf("Decimal value of %d is %d:",binary,decimal);
}

/*	convert function:
	recursive algorithm that passes the remaining
	of the binary number using a base 10 modulator
	to process the last value, as well as a coefficient
	which is doubled everytime the function is called 
*/
int convert(int b, int c, int t)
{
	if(b>0){
		t+=b%10;
		convert(b/10,c*2,t);
	} else {
		return t;
	}
}