#include<stdlib.h>
#include<stdio.h>
int	BinarySearch(int start,int end,int search);
int main(void)
{
	int start, end,search;
	printf("請輸入起始數字");
	scanf_s("%d", &start);
	printf("請輸入終點數字");
	scanf_s("%d", &end);
	printf("請輸入要搜尋的數字");
	scanf_s("%d", &search);
	BinarySearch(start, end, search);
	if (BinarySearch(start, end, search)==-1)
	{
		printf("%d不在數列中", search);
	}
	else
	{
		printf("%d在數列中", search);
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