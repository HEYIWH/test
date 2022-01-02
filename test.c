#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("**********Play:  1**********\n");
	printf("**********Exit:   0**********\n");
	printf("****************************\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		else if (guess > ret)
			printf("猜大了！\n");
		else
			printf("猜小了!\n");
	}
}


int main()
{
	
	int input = 0;
	do
	{
		menu();
		printf("请选择: >");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
