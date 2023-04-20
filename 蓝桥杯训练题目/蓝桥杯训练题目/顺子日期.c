#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // 请在此输入您的代码
    int sum = 0;
    int months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int year, month, day;

    for (year = 2022; year <= 2022; year++) {

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            months[2] = 29;
        }
        else {
            months[2] = 28;
        }
        for (month = 1; month <= 12; month++) {
            int a[5] = { 0 };
            if (month >= 10) {
                a[1] = month / 10;
                a[2] = month % 10;
            }
            else {
                a[1] = 0;
                a[2] = month;
            }
            for (day = 1; day <= months[month]; day++) {
                if (day >= 10) {
                    a[3] = day / 10;
                    a[4] = day % 10;
                }
                else {
                    a[3] = 0;
                    a[4] = day;
                }
                if (a[2] - a[1] == 1 && a[3] - a[2] == 1 || a[4] - a[3] == 1 && a[3] - a[2] == 1) {
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}