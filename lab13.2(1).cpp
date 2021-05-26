
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define Z 2

#define SQR(x) ((x)*(x))

#define MAX(x,y) ((x)>(y))?(x):(y)
#define MIN(x,y) ((x)<(y))?(x):(y)

#define PRINT(w) puts("Виведення"); \
printf(#w"=%d\n",w)

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	puts("Lab 13.2 Використання макросів та деректив препроцесора");

	int w1, w2, x, y, m;
	char ch;

	do
	{
#if(Z>1)
		puts("x = ");
		scanf_s("%d", &x);
		puts("y = ");
		scanf_s("%d", &y);
		puts("Знаходимо мінімум з двох чисел");
		w1 = SQR(x + Z);
		PRINT(w1);
		w2 = (x - y);
		PRINT(w2);
		m = MIN(w1, w2);
		puts("min = ");
		PRINT(m);
#else
		puts("x = ");
		scanf_s("%d", &x);
		puts("y = ");
		scanf_s("%d", &y);
		puts("Знаходимо максимум з двох чисел");
		w1 = (x-y);
		PRINT(w1);
		w2 = (y-Z);
		PRINT(w2);
		m = MAX(w1, w2);
		puts("max = ");
		PRINT(m);

#endif
		puts("Продовжити? y/n "); ch = _getch();
	} while (ch == 'y');

	system("pause");

	return 0;
}
