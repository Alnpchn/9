#include<stdio.h>
#include<locale.h>
#define ROW 4
#define COL 6
void main()
{
	int row, col;
	int temp = 5;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", temp);
		printf("\n");
	}
	printf("\n");
	system("pause");
}