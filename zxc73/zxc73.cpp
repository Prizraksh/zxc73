#include "iostream"
#include "locale.h"
#include "stdio.h"
#include "math.h"
using namespace std;

int t, p, k, n1, n2;
double c;
int main()
{
	locale::global(locale(""));
	p = 0;
	k = 0;
	printf("\nВведите количество тетрадей: ");
	scanf_s("%d", &t);
	if (t >= 20)
	{
		int n1 = t / 20;
		t = t - 20 * n1;
		p = p + n1;
	}
	if (p >= 20)
	{
		int n2 = p / 20;
		p = p - 20 * n2;
		k = k + n2;
	}
	double c = (double)(t * 20 + p * 370 + k * 7000) / 100;
	printf("\nДля макисмальной выгоды нужно купить: ");
	printf("%d", t);
	printf(", Пачек: ");
	printf("%d", p);
	printf(", Коробок: ");
	printf("%d", k);
	printf("\nСумма покупки ");
	printf("%f", c);
	printf(" долларов\n");
}