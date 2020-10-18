#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count(char* num)
{
	int a = 0;
	while (num[a] != '\0')
	{
		a++;
	}
	return a;
}

int opp(char* num)
{
	int sum = 0;
	for (int i = 0; i < count(num); i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			sum += num[i] - 48;
		}
	}
	return sum;
	

}
int main()
{
	char num[1000];
	scanf("%[^\n]s", num);
	printf("%d", opp(num));
	return 0;
}