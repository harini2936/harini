#include <stdio.h>

int main() {
	int mark1,mark2,mark3,mark4,mark5,sum,avg;
	scanf("&mark1:");
	scanf("&mark2:");
	scanf("&mark3:");
	scanf("&mark4:");
	scanf("&mark5:");
	sum=(mark1+mark2+mark3+mark4+mark5);
	avg=((mark1+mark2+mark3+mark4+mark5)/5);
	printf("%d",sum);
	printf("%d",avg);
	return 0;
}
