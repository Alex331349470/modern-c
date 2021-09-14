#include <stdio.h>

int main(void)
{
	int product_num, day, month, year;
	float product_price;

	printf("Enter item number: ");
	scanf("%d", &product_num);

	printf("Enter unit price: ");
	scanf("%f", &product_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%6.2f\t\t%.2d/%.2d/%.4d\n", product_num, product_price, month, day, year);

	return 0;
}