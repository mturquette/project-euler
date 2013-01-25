/*
 * http://projecteuler.net/problem=1
 */

#include <stdio.h>

int main (void) {
	int i, sum;

	for (i = 0, sum = 0; i < 1000; i++) {
		if (!(i % 3)) {
			sum += i;
			printf("%d is a multiple of 3\n", i);
		} else if (!(i % 5)) {
			sum += i;
			printf("%d is a multiple of 5\n", i);
		} else
			printf("%d is not a multiple\n", i);
	}

	printf("final result: %d\n", sum);

	return 0;
}
