#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n - 1; 0 <= i; i--) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < n - i; j++)
			printf("*");
			printf("\n");
	}
}