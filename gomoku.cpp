#include<stdio.h> 
int main(void) {
	static char a[6][6] =
	{ { ' ', '1', '2', '3', '4', '5' },
	{ '1', ' ', ' ', ' ', ' ', ' ' },
	{ '2', ' ', ' ', ' ', ' ', ' ' },
	{ '3', ' ', ' ', ' ', ' ', ' ' }, { '4', ' ', ' ', ' ', ' ', ' ' },
	{ '5', ' ', ' ', ' ', ' ', ' ' }, };
	int i, j, gyou, retsu, count = 0, flag = 0;
	while (1) {
		while (1) {
			printf("行と列を入力してください。\n");
			scanf_s("%d %d", &gyou, &retsu);
			if ((gyou > 0 && gyou < 6) && (retsu > 0 && retsu < 6) && a[gyou][retsu] == ' ')
			{
				if (count % 2 == 1)
					a[gyou][retsu] = 'X';

				else a[gyou][retsu] = 'O';
				count++;
				break;

			}
			else
			{
				printf("正しい値を入力してください。\n");
				continue;

			}


		}

		for (i = 0; i < 6; i++)
		{
			for (j = 0; j < 6; j++)
				printf("%c", a[i][j]);
			printf("\n");

		}


		//横一列
		for (i = 1; i < 6; i++) {
			if (a[gyou][i] != a[gyou][retsu])break;
			if (i == 5){
				printf("並んでいます。\n");
				flag = 1;
			}
			else printf("並んでいません\n");
		}

		//縦一列
		for (i = 1; i < 6; i++)
		{
			if (a[i][retsu] != a[gyou][retsu])break;
			if (i == 5){
				printf("並んでいます。\n");
				flag = 1;
			}
			else printf("並んでいません\n");
		}
		if (gyou == 3 && retsu == 3); {
			//右下がり
			for (i = 1; i < 6; i++)
			{
				if (a[i][i] != a[gyou][retsu])break;
				if (i == 5){
					printf("並んでいます。\n");
					flag = 1;
				}
				else ("並んでいません\n");
			}
			//右上がり
			for (i = 1; i < 6; i++)
			{
				if (a[i][6 - i] != a[gyou][retsu])break;
				if (i == 5){
					printf("並んでいます。\n");
					flag = 1;
				}
				else ("並んでいません\n");

			}
		}


		if (flag==1)
			break;

	}




	return 0;
}
