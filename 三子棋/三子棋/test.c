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
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ������-��ʼ���ո�
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;//
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
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
		printf("���Ӯ��\n");
	
	}
	else if (ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;

		}
	} while (input);
	return 0;  
}