#define _CRT_SECURE_NO_WARNINGS	
#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("*****     1.play     ******\n");
	printf("*****     0.exit     ******\n");
	printf("***************************\n");
}
void game()
{
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化空格
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;//
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Compuermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	
	}
	else if (ret=='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;

		}
	} while (input);
	return 0;  
}