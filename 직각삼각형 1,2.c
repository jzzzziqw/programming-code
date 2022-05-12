#include <Stdio.h>

int main()
{
	int size;

	printf("직각삼각형의 크기를 입력하세요: ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{

		for(int j = 0; j < size; j++)
		{
			if(j>=i)//j가 i보다 크거나 같을 경우에만 출력.
			printf("*");
		}
		
		printf("\n");
	}

	return 0;

}
/*
4를 입력했을 경우

if(j>=i)

1번째 반복.
i=0
j=0, j=1, j=2, j=3
"****" 출력

2번째 반복. 
i=1
j=0, j=1, j=2, j=3
"***" 출력 -{j=0}

3번째 반복

i=2
j=0, j=1, j=2, j=3
"**" 출력 -{j=0, j=1}

i=3
j=0, j=1, j=2, j=3
"*" 출력 -{j=0, j=1, j=2}

*/


#include <Stdio.h>

int main()
{
	int size;

	printf("직각삼각형의 크기를 입력하세요: ");
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
4 입력
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