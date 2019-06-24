#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TemporalEspacial() {
	int streak = 1;
	int j = 1;

	for(int i = 0; i < 150;i++) {

		int r = (rand() % 512) + 1;

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
}

void aleatoria() {
	for(int i = 0; i < 150;i++) {

		int r = (rand() % 512) + 1;

		printf("2 %d\n", r);
	}	
}

void Temporal() {
	
	for(int i = 0; i < 150;i++) {

		int r = (rand() % 512) + 1;

		if (i % 3 == 0) {
			r = 3;
		}

		else if (i % 5 == 0) {
			r = 5;
		}

		else if(i % 7 == 0) {
			r = 7;
		}

		printf("2 %d\n", r);
	}	
}

void Espacial() {
	int streak = 1;
	int j = 1;

	for(int i = 0; i < 150;i++) {

		int r = (rand() % 512) + 1;

		if (i >= 2+j && i <= 8+j) {
			r = streak;
			streak++;
		}

		if (i == 8+j) {
			j += 10;
		}

		printf("2 %d\n", r);
	}	
}

int main() {
	
	
	srand(time(NULL));

	return 0;
}
