#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "RUS");
	char c;

	printf("������� ����� ������: ");
	scanf("%c", &c);

	switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	case 1:
		printf("������� �����\n");
		break;
	default:
		switch (c >= '0' && c <= '9') {
		case 1:
			printf("������� �����\n");
			break;
		default:
			printf("����������� ������\n");
		}
	}
	return 0;
}