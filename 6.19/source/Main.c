#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	int a[13] = {0};
	int b, c;
	srand(time);
	for (int i = 1; i <=36000 ; i++)
	{
		b = (rand() % 6) + 1;
		c = (rand() % 6) + 1;
		a[b + c]++;
	}
	for (int i = 2; i <= 12; i++)
	{
		printf("%d�I�X�{�����ƬO%d��\n", i, a[i]);
		
	}
	system("Pause");
	return 0;
}