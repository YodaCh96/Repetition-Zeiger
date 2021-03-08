# Repetition Zeiger

Mithilfe dieser Repetitionsaufgabe sollen einige grundlegende Aspekte zur Programmierung mit Zeigern in C aufgefrischt und ggf. vertieft werden.

## Vorbereitung

Erstellen Sie in Visual Studio ein neues Projekt für die Bearbeitung dieser Aufgabe. Schreiben Sie sämtlichen Code, welcher für die Bearbeitung dieser Aufgabe notwendig ist direkt in die main Funktion des neu erstellten Projekts.

## Aufgabenstellung

Zur Repetition von Zeigern schreiben Sie verschiedene, kleinere Code-Sequenzen, welche die Funktionsweise von Zeigern exemplarisch aufzeigen. Gehen Sie dabei schrittweise vor und wählen sie möglichst sinnvolle Bezeichner (Namen) für die verschiedenen Variablen. Achten Sie zudem auf eine übersichtliche Strukturierung des Quellcodes.

- Deklarieren Sie insgesamt drei verschiedene Variablen vom Typ `int` und weisen Sie zwei Variablen einen beliebigen, gültigen Wert zu.
- Deklarieren Sie zwei verschiedene Zeiger vom Typ `int` (ohne Initialisierung). Verwenden Sie dazu unterschiedliche Schreibweisen.
- Initialisieren Sie die beiden Zeiger, indem Sie jeweils auf eine zuvor initialisierte Variable referenzieren.
- Schreiben Sie mithilfe der `printf` Funktion folgende Informationen auf die Konsole (jeweils für beide Variablen-Zeiger-Paare):
    - Speicheradresse der Variable
    - Speicheradresse des Zeigers
    - Wert der Variable
    - Wert der Variable, Zugriff via Zeiger
- Initialisieren Sie einen weiteren Zeiger vom Typ `int` und verweisen Sie auf die dritte, uninitialisierte Variable des gleichen Datentyps.
- Wiederholen Sie die Ausgabe von Punkt 4 mit dem dritten Variablen-Zeiger-Paar. Machen Sie sich vor der Ausführung des Programms Gedanken zum erwarteten Verlauf des Programms.
- Initialisieren Sie eine Variable vom Typ `char` mit einem beliebigen, gültigen Wert.
- Initialisieren Sie zwei Zeiger vom Typ `char`. Einer der beiden Zeiger referenziert die zuvor erstellte char-Variable, der andere Zeiger referenziert den zuvor erstellten Zeiger («Doppelter Verweis»).
- Ändern Sie den Wert der char-Variable mit einem Zeiger und schreiben Sie den Wert der gleichen char-Variable anschliessend unter Verwendung des zweiten Zeigers auf die Konsole.
- Initialisieren Sie ein `int-Array`, welches die fünf kleinsten (positiven) Primzahlen enthält.
- Verwenden Sie eine Schleife und einen Zeiger (sowie ggf. Zeigerarithmetik) um nacheinander alle Zahlen aus dem zuvor initialisierten Array auf die Konsole zu schreiben.
- Ergänzen Sie die zuvor programmierte Ausgabe durch die Ausgabe der Speicheradresse, in welcher die jeweilige Primzahl gespeichert ist.
- Initialisieren Sie eine «String Variable» mit Ihrem vollständigen Namen.
- Definieren Sie die Funktion myPrint mit einen «String Parameter», welche den übergebenen Parameterwert auf die Konsole ausgibt. Rufen Sie diese Funktion anschliessend in der main Funktion mit der zuvor initialisierten «String Variable» auf.
