#include <stdio.h>

int main()
{
	unsigned short n;
	unsigned long long bin = 0;
	
	printf("Enter number in decimal: ");
	scanf("%hu", &n);
	
	for (unsigned long long mul = 1, temp = n; temp; temp >>= 1, mul *= 10)
		bin += (temp & 1) * mul;
	
	printf("%hu in binary: %llu", n, bin);
}