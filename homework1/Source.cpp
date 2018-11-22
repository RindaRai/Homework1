#include <stdio.h>
#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");


	//13
	/*int a, b;
	float c;
start:
	printf("¬ведите рассто€ние в футах: ");
	scanf_s("%d", &a);
	printf("¬ведите рассто€ние в метрах: ");
	scanf_s("%d", &b);
	c = (float) b / 0.45;
	if (c > a) {
		printf("–ассто€ние в метрах больше, чем в футах\n");
	}
	else
		printf("–ассто€ние в футах больше, чем в метрах\n");
	goto start;*/
	//12
	/*int a, b;
start:
	printf("¬ведите первое число: ");
	scanf_s("%d", &a);
	printf("¬ведите второе число: ");
	scanf_s("%d", &b);
	if (a > b) {
		printf("¬торое число - минимальное \n");
	}
	else
		printf("ѕервое число - минимальное \n");
	goto start;*/



	//11
	/*int a, b;
start:
	printf("¬ведите первое число: ");
	scanf_s("%d", &a);
	printf("¬ведите второе число: ");
	scanf_s("%d", &b);
	if (a > b) {
		printf("ѕервое число больше второго \n");
	}
	else
		printf("¬торое число больше первого \n");
	goto start;*/

	//10
	/*int s, a, r;
start:

	printf("¬ведите сторону квадрата: ");
	scanf_s("%d", &a);
	printf("¬ведите радиус круга: ");
	scanf_s("%d", &r);
	s = a * sqrt(2);
	if (r >= s) {
		printf(" вадрат впишетс€ в круг\n");
	}
	else printf(" вадрат не впишетс€ в круг\n");
	goto start;*/

	//9
	/*int r, a, l;
	start:
	printf("¬ведите радиус круга:");
	scanf_s("%d", &r);
	printf("¬ведите сторону квадрата:");
	scanf_s("%d", &a);
	if (a > r) {
		printf(" руг впишетс€ в квадрат. \n");
	}
	else 
		printf(" руг не впишетс€ в квадрат. \n"); 
	goto start;*/


	//8
	/*int a, b;
start:
	printf("¬ведите первое число: ");
	scanf_s("%d", &a);
	printf("¬ведите второе число: ");
	scanf_s("%d", &b);
	if (a > b)
		printf("ѕервое число максимальное, второе минимальное \n");
	else
		printf("¬торое число максимальное, первое минимальное \n");
	goto start;
*/

	//7
	/*int a, b, p, d,r,k;
	printf("¬ведите сторону а:");
scanf_s("%d", &a);
printf("¬ведите сторону b: ");
scanf_s("%d", &b);
p = 2 * (a + b);
r = a * a;
k = b * b;
printf("ѕериметр пр€моугольника: %d\n", p);
d = sqrt(r + k);
printf("ƒиагональ пр€моугольника: %d\n", d);*/

	//6
	/*int a, b, c, p, r, k;
	printf("¬ведите катет а: ");
	scanf_s("%d", &a);
	printf("¬ведите катет b: ");
	scanf_s("%d", &b);
	r = a * a;
k = b * b;
	c = sqrt(r + k);
	p = a + b + c;
	printf("ѕериметр треугольника: %d\n", p);*/

	//5
	/*int a, b, c, r, k;
	printf("¬ведите катет а: ");
	scanf_s("%d", &a);
	printf("¬ведите катет b: ");
	scanf_s("%d", &b);
	r = a * a;
k = b * b;
	c = sqrt(r+k);
	printf("√ипотенуза равна: %d\n", c);*/

	//4
	/*int s, d, i;
	printf("¬ведите диаметр окружности: ");
	scanf_s("%d", &d);
	i = 3.14;
	s = i * ((d*d) / 4);
	printf("ѕлощадь окружности: %d\n", s);*/
	
	
	
	//3
	/*int r, d,p;
	printf("¬ведите радиус окружности: ");
	scanf_s("%d", &r);
	p = 3.14;
		d = 2 * p*r;
	printf("ƒиаметр окружности: %d\n", d);*/



	//2 задание
	/*int a, p;
	printf("¬ведите сторону квадрата: ");
	scanf_s("%d", &a);
	p = 4 * a;
	printf("ѕериметр квадрата: %d\n", p);*/
	
	
	
	//1 задание
	/*int x, y;
	printf("¬ведите значение x: ");
	scanf_s("%d", &x);
	y = 7 * x + 5;
	printf("ќтвет: %d\n", y);*/
	system("pause");





}