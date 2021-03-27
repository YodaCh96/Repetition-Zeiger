#include <stdio.h>
#include <stdlib.h>

// Task 14
void myPrint(char* string) {
	printf("\n%s\n", string);
}

int main()
{
	// Task 1
	int a = 17;
	int b = -6;
	int c;

	// Task 2
	int* pointerA;
	int* pointerB;

	// Task 3
	pointerA = &a;
	pointerB = &b;

	// Task 4
	printf("\nAddress of a: %p", &a);
	printf("\nAddress of pointerA: %p", &pointerA);
	printf("\nValue of a: %d", a);
	printf("\nValue of pointerA: %d\n", *pointerA);

	printf("\nAddress of b: %p", b);
	printf("\nAddress of pointerB: %p", &pointerB);
	printf("\nValue of b: %d", b);
	printf("\nValue of pointerB: %d\n", *pointerB);

	// Task 5
	int* pointerC = &c;

	// Task 6
	// Variable c is not initialised and contains a random value.
	printf("\nAddress of c: %p", c);
	printf("\nAddress of pointerC: %p", &pointerC);
	printf("\nValue of c: %d", c);
	printf("\nValue of pointerC: %d\n", *pointerC);

	// Task 7
	char character = 'x';

	// Task 8
	char* pointer1 = &character;
	char* pointer2 = pointer1;

	// Task 9
	*pointer1 = 'X';
	printf("\nInhalt von pointer2: %c\n", *pointer2);

	// Task 10
	int array[] = { 1, 2, 3, 5, 7 };

	// Task 11a
	// without Pointer
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, array[i]);
	}
	printf("\n");

	// Task 11b
	// with Pointer
	int* arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, *arrayIndex);
		arrayIndex++;

	}
	printf("\n");

	// Task 12a
	// without Pointer
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", &array[i]);
		printf("\n  Wert: %d\n", array[i]);
	}
	printf("\n");

	// Task 12b
	// with Pointer
	arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", arrayIndex);
		printf("\n  Wert: %d\n", *arrayIndex);
		arrayIndex++;
	}
	printf("\n");

	// Task 13
	char name[] = "Ioannis Christodoulakis";

	// Task 14
	myPrint(name);

	return EXIT_SUCCESS;
}