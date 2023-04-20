//#define _CRT_SECURE_NO_WARNINGS	
//#include<stdio.h>
//
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}; s1, s2;//s1和s2也是结构体变量，不过是全局变量
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)//结构体传参，要传结构体的地址
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'l',520,13.14},"李佳阳",20,"想你了"};
//	printf("%s\n", s.name);
//	struct Stu* ps = &s;
//	printf("%lf\n", (*ps).sb.d);
//	printf("%lf\n", ps->sb.d);
//	print1(s);
//	print2(&s);
//}