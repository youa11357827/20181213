#include<stdlib.h>
#include<stdio.h>
int	BinarySearch(int start,int end,int search);
int main(void)
{
	int start, end,search;
	printf("�п�J�_�l�Ʀr");
	scanf_s("%d", &start);
	printf("�п�J���I�Ʀr");
	scanf_s("%d", &end);
	printf("�п�J�n�j�M���Ʀr");
	scanf_s("%d", &search);
	BinarySearch(start, end, search);
	if (BinarySearch(start, end, search)==-1)
	{
		printf("%d���b�ƦC��", search);
	}
	else
	{
		printf("%d�b�ƦC��", search);
	}
	system("Pause");
	return 0;
}
int	BinarySearch(int start, int end, int search)
{
	int mid;
	mid = (end + start) / 2;
	if (search<=end && search>=start)
	{
		if (search == mid)
		{
			return mid;
		}
		else if (search == start)
		{
			return 	start;
		}
		else if (search == end)
		{
			return end;
		}
		else if (search > mid)
		{
			start = mid;
			return 	BinarySearch(start, end, search);
		}
		else if (search < mid)
		{
			end = mid;
			return 	BinarySearch(start, end, search);
		}
	}
	else
	{
		return -1;
	}
	
}