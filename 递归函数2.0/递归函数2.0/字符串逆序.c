//#define _CRT_SECURE_NO_WARNINGS	
////��дһ������reverse_string(char *string)(�ݹ�ʵ��)  �������� ���������ӡ Ҫ�� ����ʹ��c�������е��ַ�������
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	* str=*(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "bipt";
//		//[b] [i] [p] [t] [\0]
//		reverse_string(arr);
//		printf("%s\n", arr);
//		return 0;
//}