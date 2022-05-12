#include <stdio.h>

int main()
{
	int size;
	
	printf("정사각형의 크기를 입력하세요: ");
	scanf_s("%d", &size);

	for (int i = 0; i < 4; i++)//행 반복
	{
		for (int j = 0; j < 4; j++) //한 줄 완성
		{
			printf("*");
		}

		printf("\n");

	}


		return 0;

}

/*괄호 신경 써서 쓰기*/