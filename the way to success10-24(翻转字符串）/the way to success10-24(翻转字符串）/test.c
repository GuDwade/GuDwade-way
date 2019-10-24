#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void reserve(char *begin, char *end)
{
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}
int main()
{
	char input[100];
	gets(input);
	reserve(input, input + strlen(input)-1);
	char* begin = input;
	while (*begin)
	{
		char *end = begin;
		while (*end != ' '&& *end)
		{
			end++;
		}
		reserve(begin,end-1);
		if (*end)
		{
			begin = end + 1;
		}
		else
		{
			begin = end;
		}
	}
	printf("%s\n", input);
	return 0;
}