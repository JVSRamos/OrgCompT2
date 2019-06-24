#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	
	srand(time(NULL));
	int streak = 1;
	int j = 1;

	for(int i = 0; i < 150;i++) {

		int r = (rand() % 64) + 1;

		if (i >= 2+j && i <= 8+j) {
			r = streak;
			streak++;
		}

		if (i == 8+j) {
			streak = 1;
			j += 10;
		}

		printf("2 %d\n", r);
	}


	return 0;
}