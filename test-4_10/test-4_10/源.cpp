#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 0
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 16;
//	int left = 0;
//	int right = sizeof(a) / sizeof(a[0]) - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if(a[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("-1\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char p[20] = { 0 };
//	for (i = 0; i <= 2; i++)
//	{
//		printf("请输入密码：\n");
//			scanf("%s", p);
//		if (0==strcmp(p,"789"))
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("****  1.play  0.eit    ***\n");
	printf("**************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大");
		}
		else if (guess < ret)
		{
			printf("猜小");
		}
		else
		{
			printf("猜对了");
			break;
		}
	}
	printf("%d\n", ret);
}
int main()
{
	int input = 0;srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;

}

