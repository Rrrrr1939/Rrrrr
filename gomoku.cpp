#include<stdio.h> 
int main(void) {
	static char a[9][9] =
	{ { ' ', '1', '2', '3', '4', '5', '6', '7', '8' },
	{ '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', },
	{ '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
	{ '8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, };

	int i, j,  k = 0, gyou, retsu, count = 0, flag = 0;
	while (1) {
		while (1) {
			printf("行と列を入力してください。\n");
			scanf_s("%d %d", &gyou, &retsu);
			if ((gyou > 0 && gyou < 9) && (retsu > 0 && retsu < 9) && a[gyou][retsu] == ' ')
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

		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
				printf("%c", a[i][j]);
			printf("\n");

		}





		//横一列
		for (i = 1; i < 9; i++) {
			if (a[gyou][i] == a[gyou][retsu]) {
				k++;


				if (k == 5);

			}
			else
				k = 0;
			if (k == 5) {
				printf("並んでいます。\n");

				flag = 1;
			}

		}





		//縦一列
		k = 0;
		for (i = 1; i < 9; i++) {
			if (a[i][retsu] == a[gyou][retsu]) {
				k++;
				if (i == 5);
			}
			else
				k = 0;
			if (k == 5) {
				printf("並んでいます。\n");
				flag = 1;
			}

		}

		//右下がり
		k = 0;
		for (i = 0; i < 9; i++) {
			if (a[gyou - 4 + i][retsu - 4 + i] == a[gyou][retsu]) {
				k++;
				if (i == 5);
			}
			else
				k = 0;
			if (k == 5) {
				printf("並んでいます。\n");
				flag = 1;
			}

		}
		//右上がり
		k = 0;
		for (i = 0; i < 9; i++) {
			if (a[gyou - 4 + i][retsu + 4 - i] == a[gyou][retsu]) {
				k++;
				if (k == 5);
			}
			else
				k = 0;
			if(k==5){
				printf("並んでいます。\n");
				flag = 1;
			}



		}


		if (flag == 1)
			break;



	}



		return 0;
	}

