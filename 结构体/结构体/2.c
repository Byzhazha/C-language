#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(int argc, char* argv[])
{
    // ���ڴ��������Ĵ���
    int count[26] = { 0 }, max = 0, i;
    char ch;
    while ((ch = getchar()) != '\n')
        count[ch - 'a']++;
    for (i = 1; i < 26; i++)
        if (count[i] > count[max])
            max = i;
    printf("%c\n%d", max + 'a', count[max]);
    return 0;
}