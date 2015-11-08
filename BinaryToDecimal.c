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
	unsigned int binary;
	unsigned int decimal;
	
	printf("Enter a binary number: ");
	scanf("%d",&binary);

	decimal = convert(binary, 1, 0);

	if(binary > 1111111111){
		printf("Entered value is too large to be processed\n",binary);
	} else if(binary > 11111) {
		printf("Entered value of %d is outside requirements of assignment\n",binary);
		printf("However, decimal value of %d is %d\n",binary,decimal);
	} else {
		printf("Decimal value of %d is %d:",binary,decimal);
	}
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
		t+=(b%10)*c;
		convert(b/10,c*2,t);
	} else {
		return t;
	}
}