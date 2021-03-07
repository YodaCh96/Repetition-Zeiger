#include <stdio.h>
#include <stdlib.h>

// Gehört zum Aufgabenteil 14
void myPrint(char *string) {
	printf("\n%s\n", string);
}

int main()
{
	// 1
	int a = 17;
	int b = -6;
	int c;

	// 2
	int *pointerA;
	int *pointerB;	// Alternative Schreibweise (wird "korrigiert" durch Auto-Formatierung): int* pointerB;

	// 3
	pointerA = &a;
	pointerB = &b;

	// 4
	printf("\nAddress of a: %p", &a);
	printf("\nAddress of pointerA: %p", &pointerA);
	printf("\nValue of a: %d", a);
	printf("\nValue of pointerA: %d\n", *pointerA);

	printf("\nAddress of b: %p", b);
	printf("\nAddress of pointerB: %p", &pointerB);
	printf("\nValue of b: %d", b);
	printf("\nValue of pointerB: %d\n", *pointerB);

	// 5
	int *pointerC = &c;

	// 6
	// Erwartung: Variable c ist nicht initialisiert und enthält einen zufälligen (bzw. unsinnigen) Wert.
	printf("\nAddress of c: %p", c);
	printf("\nAddress of pointerC: %p", &pointerC);
	printf("\nValue of c: %d", c);
	printf("\nValue of pointerC: %d\n", *pointerC);

	// 7
	char character = 'x';

	// 8
	char *pointer1 = &character;
	char *pointer2 = pointer1;

	// 9
	*pointer1 = 'X';
	printf("\nInhalt von pointer2: %c\n", *pointer2);

	// 10
	int array[] = {1, 2, 3, 5, 7};

	// 11a (ohne Zeiger)
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, array[i]);
	}
	printf("\n");

	// 11b (mit Zeiger)
	int *arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, *arrayIndex);
		arrayIndex++;

	}
	printf("\n");

	// 12a (ohne Zeiger)
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", &array[i]);
		printf("\n  Wert: %d\n", array[i]);
	}
	printf("\n");

	// 12b (mit Zeiger)
	arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", arrayIndex);
		printf("\n  Wert: %d\n", *arrayIndex);
		arrayIndex++;
	}
	printf("\n");

	// 13
	char name[] = "Ioannis Christodoulakis";

	// 14
	myPrint(name);


	return EXIT_SUCCESS;
}