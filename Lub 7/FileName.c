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
	printf("Введите символ: ");
	scanf("%c", &c);
	switch (c>='a' && c <='z')
	{
		case 1:
		printf("Введена буква.\n");
		return 0;
	}
	switch (c>= '0' && c <= '9') 
	{
		case 1:
		printf("Введено число.\n");
		return 0;
	}
	printf("Неизвестный символ\n");
	return 0;
}

task2() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	char c;
	printf("Введите первое число, действие и второе число:\n");
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
		printf("Неизвестный символ\n");
	}
	return 0;
}

dz() {
	setlocale(LC_ALL, "RUS");
	int a;
	printf("Введите порядковое число дня недели:\n");
	scanf("%i",&a);
	switch (a)
	{
	case 1:
		printf("Сегодня понедельник, до воскресенья 6 дней");
		break;
	case 2:
		printf("Сегодня вторник, до воскресенья 5 дней");
		break;
	case 3:
		printf("Сегодня среда, до воскресенья 4 дней");
		break;
	case 4:
		printf("Сегодня четверг, до воскресенья 3 дней");
		break;
	case 5:
		printf("Сегодня пятница, до воскресенья 2 дней");
		break;
	case 6:
		printf("Сегодня суббота, до воскресенья 1 дней");
		break;
	case 7:
		printf("Уже воскресенье");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
}