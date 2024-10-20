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

  | Specifier | Type   |
  | --------- | ------ |
  | %c        | char   |
  | %d        | int    |
  | %s        | string |
  | %f        | float  |

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

- **Side effects**
  Als een functie, operatie of expressie een extra effect heeft, los van het primaire doel van de functie, dan noem je dit een side effect.

  ```c
  int verdubbel (int nummer) {
      int resultaat = nummer * 2;
      printf("Het verdubbelde nummer is: %d\n", resultaat); // Side effect
      return resultaat; // Primaire effect
  }
  ```

## LECTURE 2: Types, initialisatie, assignment, expressies en casts

### Geheugen

Geheugen in C moet door de ontwikkelaar van de code zelf beheerd worden. Voor arrays zal je bijvoorbeeld zelf ruimte vrij moeten maken in het geheugen, en deze zal je aan het einde van je programma ook zelf weer moeten vrijgeven, om memory leaks te voorkomen.

- **Geheugen**
  Het geheugen is een verzameling van informatie. Het geheugen in C onthoudt de waardes van onder andere variabelen, en plaats deze waardes op een bepaalde plek in het geheugen. Bij het reserveren van geheugen moet je ook rekening houden met wat voor soort variabele je wilt opslaan: een char neemt bijvoorbeeld minder ruimte in beslag dan een size_t, dus hoef je voor een char ook minder ruimte te reserveren dan voor een size_t.

- **Adres**
  Het adres van een variabele is de plek waar binnen het geheugen de variabele staat opgeslagen. Met het adres kan je dus de waarde van een variabele opvragen.

- **Byte**
  Een byte is het kleinste stukje informatie dat binnen het geheugen kan worden opgeslagen en bestaat uit 8 bits. Over het algemeen zijn chars de enige datatypes die in één byte kunnen worden opgeslagen.

### Ingebouwde types

- **Datatypes**

  - _int_
    Integers (int) zijn hele getallen.

    - Signed, unsigned: Signed betekent dat een integer positief **en** negatief kan zijn. Unsigned betekent dat een integer alleen positief kan zijn.
    - Short, long: Short integers nemen 2 bytes geheugen in beslag dus hun domein is [-32768,32768]. Long integers hebben 8 bytes en kunnen nummers tot ver in de miljarden opslaan.

  - _char_
    Characters (char) zijn enkele karakters

  - _sizeof en size_t_
    **Size_t** wordt gebruikt om de grootte van een array in bytes op te slaan. Deze grootte kan opgevraagd worden met de `size_of()` functie.

  - _Floats en doubles_
    Floats en doubles zijn beide kommagetallen. Doubles kunnen echter veel grotere getallen opslaan dan floats.

- **Implementation defined**
  In C is het niet standaard gedefinieerd hoe de taal zich gedraagd, waardoor sommige elementen van compiler tot compiler verschillen, omdat zij deze op een andere manier uitvoeren. Een goed voorbeeld hiervan is de grootte van een bepaald type, zoals een char. Sommige compilers wijzen een char bijvoorbeeld 4 bits toe, en een andere 8. Dit soort verschillen kunnen ertoe leiden dat bepaalde code niet werkt op andere machines, dus het is belangrijk dat de ontwikkelaar goed oplet en test tijdens dat hij het programma ontwikkelt.

### Typeconversie en casten

- **Casten**
  Door te casten zet je een datatype om naar een ander datatype. Dit wordt soms automatisch gedaan door de compiler, maar je kan het ook zelf doen.

  ```c
  float f = 9.8;
  int i = (int) f; // Cast float f naar een integer
  ```

  Er zijn meerdere redenen om te casten:

  1. Je kunt zelf bepalen welke types variabelen zijn en je voorkomt dat de compiler op een verkeerde manier cast.
  2. Je voorkomt waarschuwingen van de compiler.

  De volgorde waarop de compiler typeconversie toepast is als volgt:

  1. Integer types kleiner dan `int` worden omgezet naar `int`
  2. Als de twee variabelen verschillende types zijn, worden ze omgezet naar het grootste type. Bijvoorbeeld:

  ```c
  float f = 1.2;
  double d = 1.20002;

  double result = 2.40002; // Beide variabelen worden een double omdat doubles meer ruimte in beslag nemen dan floats.
  ```

## LECTURE 3: Controlestructuren, logische operatoren en functies

### Controlestructuren

In C is het mogelijk om code alleen uit te voeren op basis van bepaalde condities.

- **If statement**
  Een if statement voert de code binnen het blok alleen uit als de conditie waar is.

  ```c
  int available = 1;

  if (available) {
      printf("You're available.\n");
  }
  ```

Dit principe kan uitgebreid worden door bepaalde code regelmatig uit te laten voeren terwijl een bepaalde conditie waar is.

- **While loop**
  Een while loop voert de code telkens uit, terwijl de conditie waar is.

  ```c
  int teller = 0;

  while (teller < 10) {
      printf("teller = %d\n", teller);
      teller++;
  }
  ```

- **For loop**
  Een for loop voert de code telkens uit, totdat de teller van de loop de limiet heeft bereikt.
  ```c
  for (int i = 0; i < 10; i++) {
    printf("i = %d\n", i);
  }
  ```

### Logische operatoren

- **Logische operatoren**
  Om twee waardes met elkaar te vergelijken heb je operatoren nodig. Dit kan met wiskundige of met logische operatoren.

  Wiskundige operatoren:
  | Operator | Betekenis |
  | --- | --- |
  | == | Gelijk aan |
  | > | Groter dan |
  | < | Kleiner dan |
  | >= | Groter dan of gelijk aan |
  | <= | Kleiner dan of gelijk aan |

  Logische operatoren:
  | Operator | Betekenis |
  | --- | --- |
  | && | Allebei de expressies zijn waar |
  | &#124;&#124; | Een van de twee expressies is waar |

  De logische operatoren zijn short-circuiting, wat betekent dat het tweede deel van de expressie alleen geëvalueerd wordt als het eerste deel waar (of niet waar) is. Dit wordt gedaan om de snelheid van het programma te optimaliseren.

## LECTURE 4: Functies en scope

### Functies

- **Functie**
  Een functie is een vaste set instructies die door de computer uitgevoerd kunnen worden. Functies kunnen een input nemen en een output produceren. Elke functie bevat dan ook een naam, input en output. Bij de input en output is het dan ook belangrijk om te noteren wat voor soort type output het levert: een integer, een character of helemaal wat anders? Soms is er helemaal geen input of output nodig, dan is het type dat deze functies produceren `void`.

  Een functie die een getal met verdubbeld ziet er bijvoorbeeld alsvolgt uit:

  ```c
  int verdubbel (int nummer) {
      return nummer * 2;
  }

  verdubbel(5); // Levert als output 10.
  ```

- **Argumenten en parameters**
  Parameters zijn de waarden die een functie ontvangt, zoals de variabele `int nummer` in het bovenstaande voorbeeld. Argumenten zijn de waardes van deze parameters zodra ze aan een functie worden meegegeven, in het bovenstaande voorbeeld is `5` het argument.

- **Return**
  Als je een functie hebt die een waarde terug moet geven, zoals bij de functie `int verdubbel()` hierboven, dan is het verplicht om een waarde met `return` terug te geven in die functie. Met return geef je het einde van een functie aan, alle code die onder een return statement staat wordt niet uitgevoerd. Het is belangrijk om met return statements rekening te houden dat de variabele die je terug geeft van het juiste type is, en niet dat je een float retourneerd terwijl de functie een integer als output had gegeven. Bij void functies zoals `void print_naam(char[] naam` is het niet verplicht om een return statement te gebruiken, en is het zelfs verkeerd om een waarde bij de return statement te zetten. Als je toch een void functie met een return wilt afsluiten, typ dan simpelweg `return;`.

- **Recursie**
  Recursie betekent dat een functie zichzelf aanroept. Dit kan bijvoorbeeld gebeuren bij het berekenen van reeksen.

### Scope

- **Scope**
  De scope van een variabele is het gebied binnen een bestand waar de variabele toegankelijk is. Een variabele die binnen een functie gedeclareerd wordt is bijvoorbeeld alleen maar toegankelijk binnen die functie, en zal uit het geheugen verwijderd worden zodra de functie klaar is. Je kan ook globale variabelen hebben, die overal in het bestand beschikbaar zijn, het is echter belangrijk om die niet te vaak te gebruiken, omdat je bestand dan onoverzichtelijk kan worden.

- **Lifetime**
  De lifetime van een variabele betekent hoe lang deze variabele in het geheugen beschikbaar blijft.

Er zijn drie soorten variabelen en deze hebben alle drie een andere lifetime.
| Soort variabele | Lifetime |
| --- | --- |
| Automatisch | De lifetime van deze variabele is vanaf het moment dat de functie wordt aangeroepen tot het einde van de functie |
| Statisch | De lifetime van deze variabele is vanaf het moment dat het programma start tot het einde van het programma |
| Dynamisch | De lifetime van deze variabele is vanaf het moment dat er handmatig geheugen wordt toegewezen (bijvoorbeeld met `malloc()`) tot dat het geheugen weer wordt vrijgegeven (met `free()`) |

- **Call by value**
  Dit is een methode van compilers waarbij de waarde van een argument bij het aanroepen van een functie simpelweg gekopieerd wordt, inplaats van dat de gehele variabele gekopieerd wordt. Dit betekent dat aanpassingen die binnen de functie gedaan worden geen effect hebben op de oospronkelijke variabele. Dit is belangrijk, omdat het ongewenste side effects kan voorkomen.

### Testen

Het is ook mogelijk om in C programma's te testen. Op deze manier weet je zeker dat de code ook daadwerkelijk werkt zoals gewenst.

- **System test**
  System tests testen het gehele programma, inclusief alle componenten erin.

- **Unit test**
  Een unit test test individuele componenten, om zo zeker te weten dat ze ook werken als gewenst.

- **Assertions**
  Met assertions kan je gemakkelijk unit tests doen. Je kan namelijk simpelweg een testen of een functie met een bepaalde input gelijk staat aan de verwachte uitkomst. Als dat niet zo is, stopt het hele programma en wordt er een foutmelding gegeven, anders gaan het programma gewoon verder.
  ```c
  assert(function(argument) == gewenste_waarde);
  // De volgende code wordt alleen uitgevoerd als de assert waar is
  ```

## LECTURE 5: Strings en arrays

- **Array**
  Een array is een verzameling van waardes van hetzelfde type. Arrays zijn statisch getypeerd en er moet bij declaratie ook gelijk al aangegeven worden wat de lengte van het array is (als de array niet geïnitialiseerd is), anders hoef je niet per se de lengte van het array mee te geven.

  ```c
  int getallen[100]; // Een ongeïnitaliseerde array met ruimte voor 100 getallen
  char groet[] = "Hallo!"; // Een geïnitialiseerde array met ruimte voor 6 karakters
  ```

- **Index**
  Met de index kan je een bepaalde waarde uit een array aanwijzen en ophalen. Het is belangrijk om te weten dat veel talen zoals C zero-indexed zijn, wat betekent dat de eerste waarde van een array met index 0 kan worden opgehaald, oftewel met `getallen[0]`.

- **Strings**
  Strings zijn verzamelingen van chars, oftwel: tekst. Er is geen speciaal datatype voor strings in C, dus als je een tekst in een variabele wilt opslaan, moet je een array van karakters aanmaken.

## LECTURE 6: Pointers

- **Pointers**
  Pointers zijn variabelen die naar het geheugenadres van een andere variabele wijzen. Pointers hebben verschillende voordelen, maar een noemenswaardige is dat pointers het mogelijk maken om variabelen buiten de scope van een functie te gebruiken.

- **Pointer initialiseren**
  Een pointer initialiseer je door een \* aan de naam van de variabele toe te voegen bij declaratie (de ster kan weggelaten worden als je de variabele ook gelijk initialiseert). De waarde van de pointer wordt aangemaakt door een & met de naam van de doelvariabele toe te wijzen. Deze & kan gelezen worden als "het adres van"

  ```c
  int pointer = &andere_variabele;
  int *pointer_twee;
  pointer_twee = &andere_variabele;
  ```

  In dit geval zijn er twee pointers aangemaakt die allebei naar het adres van `andere_variabale` wijzen.

- **Dereferencing**
Door een * aan een geïnitialiseerde pointer toe te voegen, kan je de waarde lezen. **& betekent maak de pijl, * betekent volg de pijl.**

- **Void pointers**
Void pointers zijn speciaal omdat ze naar elke soort variabele kunnen wijzen `void *ptr;`. Je kan deze gebruiken als je bij het schrijven van de code niet helemaal zeker weet naar wat voor type variabele je wijst. Je moet het echter wel naar een type typecasten voordat je hem kan dereferencen.

- **Null pointers**
Null pointers wijzen niet naar een geldig geheugenadres, maar naar een NULL waarde, wat betekent dat de pointer nog geen bruikbare waarde heeft. De pointer kan later echter een nieuwe waarde toegewezen krijgen, waardoor deze wel bruikbaar wordt.

- **Arrays en pointers**
Arrays lijken erg op pointers, maar zijn niet hetzelfde. Je kan wel toegang krijgen tot een geheel array door een pointer te maken naar de eerste index van het array. Als je een array meegeeft aan een functie, wordt het array zelf niet meegegeven, maar een pointer naar het array. Als een array meegeeft aan een functie is het vaak wel belangrijk om de lengte van de array mee te geven. Een ander verschil tussen arrays en pointers is dat een array na declaratie niet aangepast kan worden, een pointer wel.

- **Pointer pointers**
Pointer pointers slaan het adres van een andere pointer op. Dit kan handig zijn voor het creeëren van tweedimensionale arrays, of andere geavanceerde datastructuren. Om een pointer pointer te initialiseren, moet je eerst een pointer hebben die al naar een geldig geheugenadres wijst. 

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

```

```
