#include<stdio.h>;
#include<math.h>;
#include<stdlib.h>;
int main()
{
	int i;
	scanf_s("%d", &i);
	if (i % 4 == 0)
	{
		if (i % 100 != 0)
		{

			printf("%d������\n", i);

		}
	}
	if (i % 400 == 0)
	{
		printf("%d������\n", i);
	}
	system("pause");
	return 0;
}