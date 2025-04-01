#include "Math.h"
#include <stdarg.h>
#include <stdio.h>

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return (int) x + y;
}

int Math::Add(double x, double y, double z)
{
	return (int) x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return (int) x * y;
}

int Math::Mul(double x, double y, double z)
{
	return (int) x * y * z;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	va_list vl;// fac o variabila-lista de tip va_list

	va_start(vl, count);// va_start primeste acea lista de argumente si count=numarul de argumente

	int s = 0;
	for (int i = 0; i <= count; i++)
	{
		int val = va_arg(vl, int);//val primeste cate un argument din lista
		s = s + val;
	}
	return s;
}

char* Add(const char* str1, const char* str2) {

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	char* result = (char*)malloc(len1 + len2 + 1);
	if (!result) return NULL;

	strcpy(result, str1);
	strcat(result, str2);

	return result; 
}