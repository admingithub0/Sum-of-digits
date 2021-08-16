#include<stdio.h>
int sum (int a);
int main()
{
	int num, output;
	printf("Enter the number : ");
	scanf("%d",&num);
	output = sum(num);
	printf("Sum of digits in %d is %d\n", num, output);
	return 0;
}
int sum (int num)
{
	if (num !=0)
	{
		return (num%10 + sum(num/10));
	}
	else
	{
		return 0;
	}
}
