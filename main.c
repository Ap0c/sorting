// Explanation of program.

/* ---------- Preprocessing ---------- */

#define ARRAY_SIZE 10


/* ---------- Standard Modules ---------- */

#include <stdio.h>


/* ---------- Local Modules ---------- */

#include "sorting.h"


/* ---------- Main ---------- */

int main(int argc, char *argv[]) {

	int *array = random_gen(ARRAY_SIZE);

	print_array(array, ARRAY_SIZE);

	bubblesort(array, ARRAY_SIZE);

	free_array(array);

	print_array(array, ARRAY_SIZE);

	return 0;

}

