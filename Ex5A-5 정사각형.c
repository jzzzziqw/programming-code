#include <stdio.h>

int main()
{
	int size;
	
	printf("���簢���� ũ�⸦ �Է��ϼ���: ");
	scanf_s("%d", &size);

	for (int i = 0; i < 4; i++)//�� �ݺ�
	{
		for (int j = 0; j < 4; j++) //�� �� �ϼ�
		{
			printf("*");
		}

		printf("\n");

	}


		return 0;

}

/*��ȣ �Ű� �Ἥ ����*/