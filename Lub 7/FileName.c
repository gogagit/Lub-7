#include <stdio.h>
#include <locale.h>
main () {
	//task1();
	//task2();
	dz();
	}

task1 ()
{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("������� ������: ");
	scanf("%c", &c);
	switch (c>='a' && c <='z')
	{
		case 1:
		printf("������� �����.\n");
		return 0;
	}
	switch (c>= '0' && c <= '9') 
	{
		case 1:
		printf("������� �����.\n");
		return 0;
	}
	printf("����������� ������\n");
	return 0;
}

task2() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	char c;
	printf("������� ������ �����, �������� � ������ �����:\n");
	scanf("%f %c %f",&x,&c,&y);
	switch (c)
	{
	case '*':
		printf("a*b=%f\n", x * y);
		break;
	case '/':
		printf("a/b=%f\n", x / y);
		break;
	case '+':
		printf("a+b=%f\n", x + y);
		break;
	case '-':
		printf("a-b=%f\n", x - y);
		break;
	default:
		printf("����������� ������\n");
	}
	return 0;
}

dz() {
	setlocale(LC_ALL, "RUS");
	int a;
	printf("������� ���������� ����� ��� ������:\n");
	scanf("%i",&a);
	switch (a)
	{
	case 1:
		printf("������� �����������, �� ����������� 6 ����");
		break;
	case 2:
		printf("������� �������, �� ����������� 5 ����");
		break;
	case 3:
		printf("������� �����, �� ����������� 4 ����");
		break;
	case 4:
		printf("������� �������, �� ����������� 3 ����");
		break;
	case 5:
		printf("������� �������, �� ����������� 2 ����");
		break;
	case 6:
		printf("������� �������, �� ����������� 1 ����");
		break;
	case 7:
		printf("��� �����������");
		break;
	default:
		printf("����������� ������\n");
	}
	return 0;
}