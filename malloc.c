#include<stdio.h>



int main()
{
	int x = 50;
	int y = 45;
	int size = 0;
	int b = 0;
	char arr[10] = { 0 };
	int i = 0;
	int j = 0;



	printf("�Է��� ������ ����= ");
	scanf("%d",&size );
	int* num = (int *)malloc(sizeof(int)*size);


	

	for (i = 0; i < size; i++)
	{
		printf("�Է��� ����= ");
		scanf("%d", &num[i]);
		j = j + num[i];
	}
	printf("\n\n%d", j);
	system("pause");
	return 0;
}
