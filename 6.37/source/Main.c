#include<stdlib.h>
#include<stdio.h>
int maximum(int a[],int i, int n)
{
	if (i == n) return a[n];
	else {
		if (a[i] < maximum(a, i + 1, n))
		return maximum(a, i + 1, n);
		else
		return a[i];
		
	}
}

int main()
{
	int a[8];
	printf("¿é¤J8­Ó¼Æ¦r¡G\n");
	for (int i = 0; i < 8  ; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Maximum element of the array is: %d", maximum(a,0, 8));
	system("pause");
	return 0;

}