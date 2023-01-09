#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
// 将数组逆序输出 
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}

}
int main()
{
	char arr[] = "bipt";
	//[b] [i] [p] [t] [\0]
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}