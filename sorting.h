// Header for the sorting module.

/* ---------- Standard Modules ---------- */




/* ---------- Function Prototypes ---------- */

// Swap two elements in an array.
void swap(int *array, int i, int j);
// Sorts an integer array with bubblesort.
void bubblesort(int *array, int size);

// Generates an integer array of (bad) random numbers.
int *random_gen(int size);
// Frees an integer array.
void free_array(int *array);

// Prints an integer array.
void print_array(int *array, int size);
