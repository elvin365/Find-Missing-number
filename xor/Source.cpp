#include<stdio.h>
const int N = 256;

int main()
{
	int k = 0;//xor
	int l = 0;
	for (int i = 0; i < N; i++)
	{
		k = k ^ i;// XOR
	}
	for (int i = 0; i < N; i++)
	{
		if (i != 100)// missed number
			l = l ^ i;
	}
	printf("%d", l^k);
	return 0;


	
}