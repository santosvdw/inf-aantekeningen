# INLEIDING PROGRAMMEREN (BLOK 1 - JAAR 1)

### Een samenvatting van alle belangrijke concepten

## Belangrijke informatie

- Datum tentamen: 24 oktober 2024
- Toetsstof: alle slides
- Toetswijze: schriftelijk

## To-do

- Bestudeer de programma's uit de slides

## LECTURE 1: Inleiding

### Wat is C?

C is een general-purpose programmeertaal, uitgevonden in 1970.

- **Numerieke waardes**
  Alle gegevens in C worden als numerieke waardes opgeslagen. Dit maakt het makkelijker om ze te lezen voor de computer.
- **Statisch getypeerd**
  Alle variabelen in C zijn statisch getypeerd. Dit betekent dat de variabelen vast zitten aan hun type tijdens compilatie, en dat ze niet van type kunnen veranderen.

  ```c
  int number = 5;
  number = 'a';

  // Zelfs nu blijft number een int
  ```

  Het voordeel hiervan is dat het code veiliger maakt, omdat je niet ineens van een int een char kan maken, zullen er minder fouten ontstaan.

### Hoe werkt een computer?

- **Machinetaal**
  Machinetaal is een low-level programmeertaal die door de computer gelezen kan worden. Machinetaal is binair en bestaat alleen uit binaire bits van 0 en 1. Omdat dit erg moeilijk is voor mensen om te produceren en om te begrijpen, hebben we higher-level programmeertalen uitgevonden, zoals bijvoorbeeld C. Low-level betekent dat er minder stappen nodig zijn om een programmeertaal om te zetten naar machinetaal. Python is bijvoorbeeld high-level, en C is medium-level.

- **Interpreter**
  Een interpreter voert high-level programmeertalen uit zonder ze eerst om te zetten naar machinetaal. Dit wordt bijvoorbeeld gedaan door de code om te zetten naar een intermediate-level taal en die uit te voeren, of door de source code gewoon direct uit te voeren.

### Hoe werkt een compiler?

- **Compiler**
  Een compiler is een computer programma dat computer programma's vertaalt naar machinetaal of een andere low-level taal, zodat het door de computer gelezen kan worden en het omgezet wordt in een executable file (.exe). Een compiler heeft veel verschillende taken, zo moet het onder andere preprocessen, code analyseren, code samenvoegen en code optimaliseren.

- **Gcc**
  GCC (GNU Compiler Collection) is de standaard compiler voor meerdere talen, waaronder C. Een standaard compileercommando ziet er als volgt uit:

  ```shell
  $ gcc programma.c -o programma

  $ ./programma
  ```

- **Preprocessor**
  Een preprocessor (of precompiler) is een programma dat zijn input eerst verwerkt en omzet naar output dat dan weer door een ander programma als input kan worden gebruikt. Dit maakt het mogelijk om andere code samen te voegen met je eigen programma, om dus bijvoorbeeld libraries in je code te gebruiken. Een veelvoorkomend voorbeeld van het gebruiken van libraries in C is door ze bovenaan je bestand aan te roepen met `#include <lib.h>`. Deze libraries zijn gewoon hele stukken code die nu door jou gebruikt kunnen worden in je programma, wat voorkomt dat je allerlei veelvoorkomende functionaliteiten helemaal zelf moet schrijven.

- **Functie**
  Een functie is een vaste set instructies die door de computer uitgevoerd kunnen worden. Functies kunnen een input nemen en een output produceren. Elke functie bevat dan ook een naam, input en output. Bij de input en output is het dan ook belangrijk om te noteren wat voor soort type output het levert: een integer, een character of helemaal wat anders? Soms is er helemaal geen input of output nodig, dan is het type dat deze functies produceren `void`.

  Een functie die een getal met verdubbeld ziet er bijvoorbeeld alsvolgt uit:

  ```c
  int verdubbel (int nummer) {
      return nummer * 2;
  }

  verdubbel(5); // Levert als output 10.
  ```

### Types, waardes en variabelen

- **Variabelen**
  Een variabele is een stukje geheugen dat een bepaalde waarde opslaat. Als je die waarde vaak wilt gebruiken, hoef je alleen maar die variabele aan te roepen, om de waarde te gebruiken.
  Dit is een voorbeeld van een variabele in C:

  ```c
  int getal = 5; // int is het type, getal is de naam, 5 is de waarde
  ```
  Een variabele heeft dus verschillende kenmerken:
  - _Naam_
    De naam van een variabele zegt het al, dit is gewoon hoe die variabele heet. Door de naam van de variabele te gebruiken in je code, gebruik je eigenlijk de waarde van deze variabele.
  - _Waardes_
    De waarde van een variabele is inhoud van de variabele. Deze waarde staat opgeslagen in het geheugen.
  - _Types_
    Variabelen kunnen verschillende vormen aannemen en kunnen dus verschillende types hebben. Zo kan een variabele bijvoorbeeld een integer zijn, of een string. Dit zijn allebei types.

- **Integer types**
Integer types zijn bedoeld om alle hele positieve en negatieve getallen, inclusief 0 op te slaan.
- **Floating point types**
Integer types zijn bedoeld om alle niet-hele positieve en negatieve getallen op te slaan.

- **Declaraties**
Het declareren van een functie of variabele betekent het aanmaken van een variabele of functie in het programma.

- **Format specifiers**
Format specifiers geven de compiler van het programma aan wat voor soort data er geprint moet worden, bij het gebruik van een printf() functie. Een aantal format specifiers zijn bijvoorbeeld:

    | Specifier | Type |
    |---|---|
    |%c | char|
    %d | int
    %s | string
    %f | float

### Assignments en expressies

- **Assignment**
Bij een assignment sla je een (nieuwe) waarde op in een al gedeclareerde variabele.

    ```c
    int voorbeeld = 1; // Declaratie
    voorbeeld = 5; // Assignment
    ```

- **Statement**
Een statement is een instructie voor de computer. Elke regel code die wordt uitgevoerd is een statement.
    ```c
    printf("Dit is een statement.\n");
    ```

- **Expressie**
Expressies zijn combinaties van variabelen en operators die samen nieuwe waardes vormen, oftewel: rekensommen. Met expressies is het belangrijk om te weten dat ze dezelfde precedentieregels volgen als met normale rekensommen: eerst haakjes wegwerken, dan delen en vermenigvuldigen en ten slotte optellen en aftrekken, altijd van links naar rechts.

### While en if
In C is het mogelijk om code alleen uit te voeren op basis van bepaalde condities.

- **If statement**
Een if statement voert de code binnen het blok alleen uit als de conditie waar is.

    ```c
    int available = 1;

    if (available) {
        printf("You're available.\n");
    }
    ```

- **While loop**
Een while loop voert de code telkens uit, terwijl de conditie waar is.

    ```c
    int teller = 0;

    while (teller < 10) {
        printf("teller = %d\n", teller);
        teller++;
    }
    ```

## LECTURE 2: Types, initialisatie, assignment, expressies en casts

### Geheugen

- **Geheugen**

- **Adres**

- **Byte**

### Ingebouwde types

- **Datatypes**

  - _int_

    - Signed, unsigned
    - Short, long
    - Literals

  - _char_

    - Literals

  - _sizeof en size_t_

  - _Floats en doubles_

- **Implementation defined**

### Declaratie en initialisatie

- **Variabelen**

- **Expressies**

- **Precedence**

- **Side effects**

### Typeconversie en casten

- **Type conversies**

- **Casten**

## LECTURE 3: Controlestructuren, logische operatoren en functies

### Logische operatoren

- **If statements**

- **Logische operatoren**

  - Short-circuiting

- **Goto**

### Controlestructuren

- **Loops en whilestructuren**

## LECTURE 4: Functies en scope

### Functies

- **Opbouw van functies**

  - Naam
  - Invoer
  - Uitvoer

- **Doel van functies**

- **Argumenten en parameters**

- **Return**

- **Recursie**

### Scope

- **Scope**

- **Lifetime**

- **Call by value**

### Testen

- **System test**

- **Unit test**

- **Assertions**

## LECTURE 5: Strings en arrays

- **Array**

- **Index**

- **Strings**

## LECTURE 6: Pointers

- **Pointers**

- **Pointer initialiseren**

- **Dereferencing**

- **Void pointers**

- **Null pointers**

- **Arrays en pointers**

- **Pointer pointers**

## LECTURE 7: Input en output

### I/O

- **Streams**

  - Eigenschappen

- **Stream openen**

- **Stdin, stdout, stderr**

- **Gebufferde I/O**

- **I/O vanuit de shell**

- **Blocking**

- **End of file**

- **Manuals**

- **Fouten afhandelen**

## LECTURE 8: Custom types maken

- **Enums**

- **Structs**

  - _Pointers naar structs_
  - _Struct pointers dereferencen_

- **Typedefs**

- **Unions**

## LECTURE 9: Geheugen

### Geheugenmodel

- **Segmenten**
  - _Stack_
  - _Text_
  - _Heap_
  - _Bss en data_

### Recursieve functies

- **Recursieve functies**

### Geheugen gebruiken

- **Globale variabelen**

- **Static variabelen**

- **Malloc en free**

- **Memory leaks**

## LECTURE 10: Headers, proprocessors en linken

### Compileerstadia

- **Object files**

- **Executable**

1. **Preprocess**

2. **Compile**

3. **Link**

- _Extern_

- _Static_

- _Makefiles en make_

### Header files

- **Header files**

- **#include, #define, #if**

- **Modularisatie**
- _Interface_
- _Implementatie_
- _Moet een struct in de header?_
