# Repetition Zeiger

## Repetitionsaufgabe

Mithilfe dieser Repetitionsaufgabe sollen einige grundlegende Aspekte zur Programmierung mit Zeigern (Pointer) in C bzw. C++ aufgefrischt und ggf. vertieft werden.

## Vorbereitung

Erstellen Sie in Visual Studio ein neues Projekt für die Bearbeitung dieser Aufgabe. Schreiben Sie sämtlichen Code, welcher für die Bearbeitung dieser Aufgabe notwendig ist direkt in die main Funktion des neu erstellten Projekts.

## Vorgehensweise

Bearbeiten Sie diese Aufgabe alleine und möglichst selbständig, d.h. ohne Verwendung von Hilfsmitteln.

Halten Sie allfällige Fragen oder Unklarheiten während der Bearbeitung schriftlich fest. Entweder als Kommentar im Quellcode oder als Notiz an einem geeigneten Ort. Halten Sie auch (überraschende) Beobachtungen und Tatsachen fest.

## Aufgabenstellung

Zur Repetition von Zeigern schreiben Sie verschiedene, kleinere Code-Sequenzen, welche die Funktionsweise von Zeigern exemplarisch aufzeigen. Gehen Sie dabei schrittweise vor und wählen sie möglichst sinnvolle Bezeichner (Namen) für die verschiedenen Variablen. Achten Sie zudem auf eine übersichtliche Strukturierung des Quellcodes.

### Aufgabe 1

Deklarieren Sie insgesamt drei verschiedene Variablen vom Typ int und weisen Sie zwei Variablen einen beliebigen, gültigen Wert zu.

```c
int a = 17;
int b = -6;
int c;
```

### Aufgabe 2

Deklarieren Sie zwei verschiedene Zeiger vom Typ int (ohne Initialisierung). Verwenden Sie dazu unterschiedliche Schreibweisen.

```c
int *pointerA;
int* pointerB;
```

### Aufgabe 3

Initialisieren Sie die beiden Zeiger, indem Sie jeweils auf eine zuvor initialisierte Variable referenzieren.

```c
pointerA = &a;
pointerB = &b;
```

### Aufgabe 4

Schreiben Sie mithilfe der printf Funktion folgende Informationen auf die Konsole (jeweils für beide Variablen-Zeiger-Paare):

a. Speicheradresse der Variable
b. Speicheradresse des Zeigers
c. Wert der Variable
d. Wert der Variable, Zugriff via Zeiger

```c
printf("\nAddress of a: %p", &a);
printf("\nAddress of pointerA: %p", &pointerA);
printf("\nValue of a: %d", a);
printf("\nValue of pointerA: %d\n", *pointerA);

printf("\nAddress of b: %p", b);
printf("\nAddress of pointerB: %p", &pointerB);
printf("\nValue of b: %d", b);
printf("\nValue of pointerB: %d\n", *pointerB);
```

### Aufgabe 5

Initialisieren Sie einen weiteren Zeiger vom Typ int und verweisen Sie auf die dritte, uninitialisierte Variable des gleichen Datentyps.

```c
int *pointerC = &c;
```

### Aufgabe 6

Wiederholen Sie die Ausgabe von Punkt 4 mit dem dritten Variablen-Zeiger-Paar. Machen Sie sich vor der Ausführung des Programms Gedanken zum erwarteten Verlauf des Programms.

```c
printf("\nAddress of c: %p", c);
printf("\nAddress of pointerC: %p", &pointerC);
printf("\nValue of c: %d", c);
printf("\nValue of pointerC: %d\n", *pointerC);
```

### Aufgabe 7

Initialisieren Sie eine Variable vom Typ char mit einem beliebigen, gültigen Wert.

```c
char character = 'x';
```

### Aufgabe 8

Initialisieren Sie zwei Zeiger vom Typ char. Einer der beiden Zeiger referenziert die zuvor erstellte char-Variable, der andere Zeiger referenziert den zuvor erstellten Zeiger («Doppelter Verweis»).

```c
char *pointer1 = &character;
char *pointer2 = pointer1;
```

### Aufgabe 9

Ändern Sie den Wert der char-Variable mit einem Zeiger und schreiben Sie den Wert der gleichen char-Variable anschliessend unter Verwendung des zweiten Zeigers auf die Konsole.

```c
*pointer1 = 'X';
printf("\nInhalt von pointer2: %c\n", *pointer2);
```

### Aufgabe 10

Initialisieren Sie ein int-Array, welches die fünf kleinsten (positiven) Primzahlen enthält.

```c
int array[] = {1, 2, 3, 5, 7};
```

### Aufgabe 11

Verwenden Sie eine Schleife und einen Zeiger (sowie ggf. Zeigerarithmetik) um nacheinander alle Zahlen aus dem zuvor initialisierten Array auf die Konsole zu schreiben.

```c
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
```

### Aufgabe 12

Ergänzen Sie die zuvor programmierte Ausgabe durch die Ausgabe der Speicheradresse, in welcher die jeweilige Primzahl gespeichert ist.

```c
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
```

### Aufgabe 13

Initialisieren Sie eine «String Variable» mit Ihrem vollständigen Namen.

```c
char name[] = "Ioannis Christodoulakis";
```

### Aufgabe 14

Definieren Sie die Funktion myPrint mit einen «String Parameter», welche den übergebenen Parameterwert auf die Konsole ausgibt. Rufen Sie diese Funktion anschliessend in der main Funktion mit der zuvor initialisierten «String Variable» auf.

```c
void myPrint(char *string) {
    printf("\n%s\n", string);
}

myPrint(name);
```
