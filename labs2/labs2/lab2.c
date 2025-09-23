#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_CTYPE, "");

	float area, cost;

	float price = 500;
	float length = 3;
	float width = 0.8;


	area = width * length;
	cost = area * price;

	printf("Стоимость 1 кв метра: %.0f рублей\n", price);
	printf("Ширина ткани: %.1f м., Длинна ткани: %.0f м.\n", width, length);
	printf("Площадь ткани: %.1f кв.м.\n", area);
	printf("Стоимость всей ткани: %.0f рублей\n", cost);

}

