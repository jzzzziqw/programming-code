#include <Stdio.h>

int main()
{
	int size;

	printf("�����ﰢ���� ũ�⸦ �Է��ϼ���: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{

		for(int j = 0; j < size; j++)
		{
			if(j>=i)//j�� i���� ũ�ų� ���� ��쿡�� ���.
			printf("*");
		}
		
		printf("\n");
	}

	return 0;

}
/*
4�� �Է����� ���

if(j>=i)

1��° �ݺ�.
i=0
j=0, j=1, j=2, j=3
"****" ���

2��° �ݺ�. 
i=1
j=0, j=1, j=2, j=3
"***" ��� -{j=0}

3��° �ݺ�

i=2
j=0, j=1, j=2, j=3
"**" ��� -{j=0, j=1}

i=3
j=0, j=1, j=2, j=3
"*" ��� -{j=0, j=1, j=2}

*/


#include <Stdio.h>

int main()
{
	int size;

	printf("�����ﰢ���� ũ�⸦ �Է��ϼ���: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{
			if (j <= i)
				printf("*");
		}

		printf("\n");
	}

	return 0;
}
/*
4 �Է�
if(j<=i)

1st
i=0
i=0
"*"

2nd
i=1
j=0, j=1
"**"

3rd
i=2
j=0, j=1, j=2
"***"

4th
i=3
j=0, j=1, j=2, j=3
"****"

*
**
***
****


*/