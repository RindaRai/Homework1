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
	printf("������� ���������� � �����: ");
	scanf_s("%d", &a);
	printf("������� ���������� � ������: ");
	scanf_s("%d", &b);
	c = (float) b / 0.45;
	if (c > a) {
		printf("���������� � ������ ������, ��� � �����\n");
	}
	else
		printf("���������� � ����� ������, ��� � ������\n");
	goto start;*/
	//12
	/*int a, b;
start:
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	if (a > b) {
		printf("������ ����� - ����������� \n");
	}
	else
		printf("������ ����� - ����������� \n");
	goto start;*/



	//11
	/*int a, b;
start:
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	if (a > b) {
		printf("������ ����� ������ ������� \n");
	}
	else
		printf("������ ����� ������ ������� \n");
	goto start;*/

	//10
	/*int s, a, r;
start:

	printf("������� ������� ��������: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &r);
	s = a * sqrt(2);
	if (r >= s) {
		printf("������� �������� � ����\n");
	}
	else printf("������� �� �������� � ����\n");
	goto start;*/

	//9
	/*int r, a, l;
	start:
	printf("������� ������ �����:");
	scanf_s("%d", &r);
	printf("������� ������� ��������:");
	scanf_s("%d", &a);
	if (a > r) {
		printf("���� �������� � �������. \n");
	}
	else 
		printf("���� �� �������� � �������. \n"); 
	goto start;*/


	//8
	/*int a, b;
start:
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	if (a > b)
		printf("������ ����� ������������, ������ ����������� \n");
	else
		printf("������ ����� ������������, ������ ����������� \n");
	goto start;
*/

	//7
	/*int a, b, p, d,r,k;
	printf("������� ������� �:");
scanf_s("%d", &a);
printf("������� ������� b: ");
scanf_s("%d", &b);
p = 2 * (a + b);
r = a * a;
k = b * b;
printf("�������� ��������������: %d\n", p);
d = sqrt(r + k);
printf("��������� ��������������: %d\n", d);*/

	//6
	/*int a, b, c, p, r, k;
	printf("������� ����� �: ");
	scanf_s("%d", &a);
	printf("������� ����� b: ");
	scanf_s("%d", &b);
	r = a * a;
k = b * b;
	c = sqrt(r + k);
	p = a + b + c;
	printf("�������� ������������: %d\n", p);*/

	//5
	/*int a, b, c, r, k;
	printf("������� ����� �: ");
	scanf_s("%d", &a);
	printf("������� ����� b: ");
	scanf_s("%d", &b);
	r = a * a;
k = b * b;
	c = sqrt(r+k);
	printf("���������� �����: %d\n", c);*/

	//4
	/*int s, d, i;
	printf("������� ������� ����������: ");
	scanf_s("%d", &d);
	i = 3.14;
	s = i * ((d*d) / 4);
	printf("������� ����������: %d\n", s);*/
	
	
	
	//3
	/*int r, d,p;
	printf("������� ������ ����������: ");
	scanf_s("%d", &r);
	p = 3.14;
		d = 2 * p*r;
	printf("������� ����������: %d\n", d);*/



	//2 �������
	/*int a, p;
	printf("������� ������� ��������: ");
	scanf_s("%d", &a);
	p = 4 * a;
	printf("�������� ��������: %d\n", p);*/
	
	
	
	//1 �������
	/*int x, y;
	printf("������� �������� x: ");
	scanf_s("%d", &x);
	y = 7 * x + 5;
	printf("�����: %d\n", y);*/
	system("pause");





}