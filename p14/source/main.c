#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int Count = 0;

	fptr = fopen("welcome.txt", "r");
	if (fptr!=NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			Count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", Count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}