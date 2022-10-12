#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "RUS");
	char c;

	printf("Введите любой символ: ");
	scanf("%c", &c);

	switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	case 1:
		printf("Введена буква\n");
		break;
	default:
		switch (c >= '0' && c <= '9') {
		case 1:
			printf("Введена цифра\n");
			break;
		default:
			printf("Неизвестный символ\n");
		}
	}
	return 0;
}