#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Student
{
	char name[20];
	long int no;
	char sex;
	int age;
};
//int main()
//{
//	struct Student s = {"gucheng",170403,'M',18};
//	printf("name:%s\nno:%ld\nsex:%c\nage:%d\n", s.name, s.no, s.sex, s.age);
//	return 0;
//}
struct Stu2
{
	int arr[10];
	int *p;
	struct Student s;

};
void Printf1(struct Stu2 ret)
{
	printf("%d\n", ret.arr[1]);
	printf("%d\n", *(ret.p));
	printf("%c\n", ret.s.sex);
}
void Printf2(struct Stu2 *a)
{
	printf("%d\n", a->arr[1]);
	printf("%d\n", *(a->p));
	printf("%c\n", a->s.sex);
}
int main()
{
	int a = 10;
	struct Stu2 s1 = { { 1, 2, 3 }, &a, { "gucheng", 170403, 'M', 18 } };
	Printf1(s1);
	struct Stu2 * ps = &s1;
	Printf2(ps);
	/*printf("%d\n", s1.arr[2]);
	printf("%d\n",ps->arr[2]);
	printf("%d\n", *(s1.p));
	printf("%d\n", (ps->p);*/
	return 0;
}