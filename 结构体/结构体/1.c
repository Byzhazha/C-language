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
//	//��Ա����
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}; s1, s2;//s1��s2Ҳ�ǽṹ�������������ȫ�ֱ���
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)//�ṹ�崫�Σ�Ҫ���ṹ��ĵ�ַ
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'l',520,13.14},"�����",20,"������"};
//	printf("%s\n", s.name);
//	struct Stu* ps = &s;
//	printf("%lf\n", (*ps).sb.d);
//	printf("%lf\n", ps->sb.d);
//	print1(s);
//	print2(&s);
//}