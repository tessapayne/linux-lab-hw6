#include <stdio.h>

int main(void) {
	long  long sum = 0;
	int x;

	printf("Enter positive integers (<=0 to stop): ");
	while (scanf("%d", &x) == 1 && x > 0) sum += x;

    	printf("Sum is: %lld\n", sum);
    	return 0;
}
