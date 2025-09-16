#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_CTYPE, "");

	int price = 20;
	int width = 20;
	int length = 80;

	printf("Стоимость 1 кв метра: %d рублей\n", price);
	printf("Ширина ткани: %d м., Длинна ткани: %d м.\n", width, length);
	printf("Площадь ткани: %d кв. метров.\n", width * length);
	printf("Стоимость всей ткани: %d рублей\n", width * length * price);

}