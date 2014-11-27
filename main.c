// Explanation of program.

/* ---------- Preprocessing ---------- */

#define ARRAY_SIZE 50


/* ---------- Standard Modules ---------- */

#include <stdio.h>


/* ---------- Local Modules ---------- */

#include "sorting.h"


/* ---------- Main ---------- */

int main(int argc, char *argv[]) {

	int *array = random_gen(ARRAY_SIZE);

	printf("\n# ----- Original Data ----- #\n\n");
	print_array(array, ARRAY_SIZE);

	insertion_int(array, ARRAY_SIZE);

	printf("\n# ----- Sorted Data ----- #\n\n");
	print_array(array, ARRAY_SIZE);
	printf("\n");
	free_array(array);

	return 0;

}

