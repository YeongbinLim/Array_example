#include<stdio.h>

int main()
{
	char arr[5] = { 0, };
	char arr1[5] = { 0, };
	char arr2[5] = { 0, };
	char arr3[5] = { 0, };
	char arr4[5] = { 0, };
	char *temp=0;
	int i,j;
	
	
		scanf("%s", arr);
		printf("%s ภิทยตส \n", arr);

		scanf("%s", arr1);
		printf("%s ภิทยตส \n", arr1);

		scanf("%s", arr2);
		printf("%s ภิทยตส \n", arr2);
		scanf("%s", arr3);
		printf("%s ภิทยตส \n", arr3);
		scanf("%s", arr4);
		printf("%s ภิทยตส \n", arr4);

		char *order[5] = { arr,arr1,arr2,arr3,arr4 };


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (strcmp(order[j], order[j + 1])>0) {
				temp= order[j];
				order[j]= order[j + 1];
				order[j+1]=temp;



			}
		}
	}
		for (i = 0; i < 5; i++) {
			
			printf("\n %s \n", order[i]);
		}
	system("pause");
	return 0;
}
