#include <stdio.h>
#include <stdlib.h>

void B (void) {
    printf("b\n");
}

int main() {
	int a, b;
	scanf ("%d%d", &a, &b);
	printf("%d\n", a+b);
    B();
	return 0;
}

