#include <stdio.h>
#define size 6

int main(void) {
  int arrNum[size] = {1, 2, 3, 100000, 5, 6};

	for (int i = 0; i < size - 1; i++) {
		if (arrNum[i] > arrNum[i + 1]) {
			printf("Not ascending order");
			return -1;
		}
	}
	printf("Ascending order");
  return 0;
}