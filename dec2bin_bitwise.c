#include <stdio.h>

int main()
{
	// Declaring n as short and bin as long long to accomodate for every binary number n can be converted to
	unsigned short n;
	unsigned long long bin = 0;
	
	printf("Enter number in decimal: ");
	scanf("%hu", &n);
	
	// Loop starts by initialising temp to n; uses 'bitwise and' with 1 to compare LSB with 1, multiplies with place value; temp is right shifted after every
	//    iteration, and mul is multiplied by 10 to increase place value; the exit condition is to check if temp has turned zero or not.
	for (unsigned long long mul = 1, temp = n; temp; temp >>= 1, mul *= 10)
		bin += (temp & 1) * mul;
	
	printf("%hu in binary: %llu", n, bin);
}
