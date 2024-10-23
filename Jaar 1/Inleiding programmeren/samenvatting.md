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
  Integer types zijn bedoeld om kommagetallen op te slaan.

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
  Een pointer initialiseer je door een \* aan de naam van de variabele toe te voegen bij declaratie. De waarde van de pointer wordt aangemaakt door een & met de naam van de doelvariabele toe te wijzen. Deze & kan gelezen worden als "het adres van"

  ```c
  int *pointer = &andere_variabele;
  ```

- **Dereferencing**
  Door een \* aan een geïnitialiseerde pointer toe te voegen, kan je de waarde lezen waar de pointer naar wijst. Het teken \* dereferentieert de pointer, wat beteeknt dat je toegang krijgt tot de waarde die op het adres van de pointer staat. **& betekent maak de pijl, \* betekent volg de pijl.**

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
  Streams zijn sequenties van data die tussen twee partijen worden verzonden. In C zijn er drie standaard streams:

  1. `stdin`: De invoerstream (die bijvoorbeeld gegevens van het toetsenbord verzend)
  2. `stdout`: De uitvoerstream (die bijvoorbeeld gegevens naar het scherm verzend)
  3. `stderr`: De foutstream (die bijvoorbeeld foutmeldingen naar het scherm verstuurt)

  Streams maken het mogelijk om met verschillende bronnen te werken.

- **Streams openen en sluiten**
  Een stream open je met door een variabele van type FILE * aan te maken: `FILE *variabele = fopen("bestand.txt", "r")`. De stream heet `variabele`en opent`bestand.txt` met leesmachtigingen. Dit zijn de machtigingen die je een stream kan geven:

  | Mode | Beschrijving             | Geldig bestand nodig?                                                                              |
  | ---- | ------------------------ | -------------------------------------------------------------------------------------------------- |
  | `r`  | Lezen                    | Ja, als er geen bestand bestaat ontstaat er een error                                              |
  | `w`  | (Over)schrijven          | Nee, als het bestand niet bestaat wordt er een nieuwe gemaakt                                      |
  | `a`  | Toevoegen                | Nee, als het bestand niet bestaat wordt er een nieuwe gemaakt                                      |
  | `r+` | Lezen en schrijven       | Ja, als er geen bestand bestaat ontstaat er een error                                              |
  | `w+` | Lezen en (over)schrijven | Nee, als het bestand bestaat wordt het overschreven, anders wordt er een nieuwe gemaakt            |
  | `a+` | Lezen en toevoegen       | Nee, als het bestand bestaat wordt er aan het einde geschreven, anders wordt er een nieuwe gemaakt |

  Het is tenslotte ook belangrijk om streams weer te sluiten met `fclose(stream)`. Dit hele proces ziet er dus bihvoorbeeld als volgt uit:

  ```c
  int lees_stream(char filename[])
  {
    FILE *fh = fopen(filename, "r");
    fclose(fh);
  }
  ```

- **Gebufferde I/O**
  De gegevens van streams worden opgeslagen in buffers voordat ze daadwerkelijk gelezen of geschreven kunnen worden. Dit is handig om ervoor te zorgen dat de output van een stream volledig geschreven is voordat deze verzonden wordt. Het versnelt ook het proces van standaard streams: als je bijvoorbeeld van een disk leest, kan je programma niet in één keer alle gegevens lezen, dat gebeurt stapsgewijs. Het is inefficiënt om steeds elke losse byte van de disk te halen. Daarom worden de gegevens eerst in de buffer opgeslagen en kan je daarna stapsgewijs van de buffer lezen, wat veel sneller is.

  Buffers kunnen op verschillende manieren worden ingesteld:

  - **Volledig gebufferd**: De buffer wordt pas geleegd als deze vol is.
  - **Regelgebufferd**: De buffer wordt geleegd na elke nieuwe regel.
  - **Ongebufferd**: De buffer wordt direct geleegd na elke I/O operatie.

- **I/O vanuit de shell**
  Je kunt vanuit de shell ook gebruik maken van **redirection** om gegevens van of naar bestanden te lezen en schrijven. Dit kan je doen met andere bestanden, of zelfs met shell commands.

  Dit zijn twee voorbeelden van het gebruiken van de output stream om naar bestanden te schrijven

  ```shell
  $ ls > file_list.txt // (APPEND) Sla de lijst van alle bestanden in de directory op in file_list.txt
  ```

  ```shell
  $ ls > file_list.txt // (OVERWRITE) Sla de lijst van alle bestanden in de directory op in file_list.txt
  ```

  Ook kan je gebruik maken van de input en output stream. Zo kan je bijvoorbeeld eerst een bestand als input geven aan een programma, en de output naar een bestand schrijven zoals het voorbeeld hieronder:

  ```shell
  $ sort < file_list.txt > sorted_file_list.txt // Gebruik file_list.txt als input voor sort en zet de output van sort in sorted_file_list.txt
  ```

- **Blocking**
  Over het algemeen zijn I/O operaties blokkerend, wat betekent dat het hele programma geblokkeerd wordt totdat de I/O operatie is voltooid.

- **End of file**
  End of file (EOF) is een speciale waarde die aanegeft aan de input stream dat het einde van het bestand is bereikt. Dit is belangrijk, omdat dit voorkomt dat er buiten het geheugen gelezen wordt. Dit kan bijvoorbeeld als volgt worden toegepast:

  ```c
  // Print het hele bestand tot aan het einde
  int ch;
  while ((ch = fgetc(file)) != EOF) { // Als ch == EOF, dan is het einde van het bestand bereikt.
      putchar(ch);
  }
  ```

- **Manuals**
  In C is het mogelijk om de handleidingen van functies uit libraries te printen via de commandline. Dit doe je als volgt:

  ```shell
  $ man printf
  ```

- **Fouten afhandelen**
  Het is belangrijk om altijd te controleren of een stream correct is geopend. Om dit te doen kan je bijvoorbeeld checken of de stream gelijk staat aan null: `file == NULL`. Als volgt kan je de `perror()` functie gebruiken om een foutmelding te printen.

## LECTURE 8: Custom types maken

- **Enums**
  Een enum is een speciaal type waar je een aantal constante gegevens in kan opslaan. Enums zijn handig om je code leesbaar en consistent te houden.

  ```c
  enum Dag {
    MAANDAG,
    DINSDAG,
    ...,
    ZONDAG
  };

  enum Dag vandaag = MAANDAG;
  ```

  De waardes in de enums zijn zero-indexed, wat betekent dat `MAANDAG` in het bovenstaande voorbeeld gelijk staat aan 0, en `ZONDAG` aan 6. Het is echter ook mogelijk om zelf waardes mee te geven:

  ```c
  enum Level {
    LAAG = 0,
    MIDDEL = 50,
    HOOG = 100
  };
  ```

- **Structs**
  Met structs (structures) kan je meerdere soorten variabelen groeperen. Een struct kan gezien worden als een template die je later kan overnemen en aanvullen met je eigen waarden.

  ```c
  // Declaratie van een struct genaamd Student
  struct Student {
    int id;
    char naam[30];
    int leeftijd;
  };

  // Initalisatie van een struct
  struct Student piet = {12345678, "Piet", 18};

  // Alternatieve methode
  struct Student piet;
  piet.id = 12345678;
  ...
  piet.leeftijd = 18;
  ```

  - _Pointers naar structs_
    Het intialiseren van een pointer naar een struct doe je als volgt:

  ```c
  struct Student piet;
  struct Student* pointer = &piet;

  // Het is ook mogelijk om beide variabelen op het zelfde moment te declareren!
  struct Student piet, *pointer;
  pointer = &piet;
  ```

  Het intialiseren van een pointer naar een struct in C is dus relatief simpel: vergeet gewoon niet dat je niet alleen het struct keyword opschrijft, maar ook de naam van de struct. En vergeet uiteraard niet om naar het adres van de andere struct te wijzen!

  - _Struct pointers dereferencen_
    Een struct pointer dereferencen (oftewel: de waardes van een struct lezen) is relatief simpel, het enige dat je nodig hebt is de struct dereference operator `->`.

  ```c
  struct Student piet, *pointer;
  pointer = &piet;

  int leeftijd_van_piet = pointer->leeftijd;
  ```

- **Typedefs**
  Typedefs (typedefinitions) kunnen gebruikt worden om nieuwe namen te geven aan bestaande types. Typedefs pas je als volgende toe:

  ```c
  typedef bestaand_type nieuwe_naam;

  // Je kan een typedef dus als volgt declareren:
  typedef short unsigned int USHORT;
  USHORT x;
  ```

  Het is niet mogelijk om `static` te gebruiken bij een typedef. Als je een static typedef wilt maken kan dat als volgt:

  ```c
  typedef long int LINT;
  static LINT y;
  ```

- **Unions**
  Een union is netals een struct een samenstelling van variabelen op één plek. Unions en structs lijken erg op elkaar en worden ook op dezelfde manier geinitliaseerd en gebruikt.

  ```c
  union Student student {
    int id;
    char naam[30];
    int leeftijd;
  }

  union Student henk;
  ```

  Het voornaamste verschil tussen een union en een struct is het feit dat alle velden in structs dezelfde hoeveelheid geheugen innemen, terwijl er bij een struct ruimte in het geheugen wordt vrijgemaakt op basis van het type variabele. Alle waarden binnen een struct delen namelijk hetzelfde geheugen, wat betekent dat er maar één variabele actief kan zijn binnen een struct. Dit betekent dat als je bijvoorbeeld `student.leeftijd` initialiseert, `student.naam` en `student.id` overschreven worden.

## LECTURE 9: Geheugen

### Geheugenmodel

- **Segmenten** [(Bron)](https://www.geeksforgeeks.org/memory-layout-of-c-program/)
  - _Stack_
    De stack wordt gebruikt om variabelen en informatie op te slaan met een beperkte lifetime. De stack heeft geen vaste grootte, maar wordt groter of kleiner aan de hand van het aantal en de grootte van de variabelen die erin zijn opgeslagen. Zodra een functie eindigt, wordt de stack leeggemaakt.
  - _Heap_
    De heap wordt gebruikt voor het dynamisch toewijzen van geheugen aan variabelen. Om het geheugen van de heap te beheren kan je de `malloc()` en `free()` functies gebruiken.
  - _Text_
    Het text segment wordt gebruikt om instructies (zoals functies) in op te slaan. Het text segment is voor programma's read-only, wat betekent dat programma's alleen instructies kunnen lezen van de text en ze niet kunnen aanpassen.
  - _Bss_
    Het bss segment slaat alle ongeïnitialiseerde variabelen op. In het geval van `int x;` zou `x` bijvoorbeeld in de bss terecht komen.
  - _Data_
    Het datasegment slaat alle geïnitaliseerde globale en statische variabelen op.

### Recursieve functies

- **Recursieve functies**
  Recursieve functies zijn functies die zichzelf aanroepen en bestaan uit drie onderdelen.

  ```c
  int som(int n) {
    // Onderdeel 1: base condition: als dit gedeelte bereikt wordt, stop dan de recursie.
    if (n == 0) {
      return 0;
    }

    // Onderdeel 2: de recursie: roep de functie opnieuw aan, met een nieuw argument.
    int result = n + som(n-1);

    // Onderdeel 3: het resultaat
    return result;
  }
  ```

  Deze functie zal zichzelf aanroepen, totdat hij aankomt bij de base condition (in dit geval n == 0). Alle uitkomsten voor `som(n)` zullen op de stack worden opgeslagen, en zodra de base condition is bereikt zullen al deze waarden opgeteld worden tot het uiteindelijke resultaat dat in onderdeel 3 wordt geretourneerd en zal de stack weer vrijgemaakt worden. Het is belangrijk om te onthouden dat de stack werkt met het "LIFO" principe (Last In, First Out), oftewel: recursieve functies worden op de omgekeerde volgorde aangeroepen als ze de basisvoorwaarde hebben bereikt, wat betekent dat ze eigenlijk achterstevoren werken en dat ze beginnen met de laatste conditie.

### Geheugen gebruiken

- **Globale variabelen**
  Globale variabelen zijn variabelen die overal in een programma beschikbaar zijn (onbeperkte scope). Ze moeten buiten functies worden gedeclareerd. Globale variabelen worden opgeslagen in het datasegment van het geheugen.

- **Static variabelen**
  Globale variabelen zijn variabelen die lokaal opgeslagen en dus een beperkte scope hebben. Maar in tegenstelling tot automatische variabelen worden deze variabelen niet op de stack geplaatst, maar in het datasegment, waardoor deze variabelen in het geheugen opgeslagen blijven, zelfs als de functie al afgelopen is.

- **Malloc en free**
  `Malloc()` en `free()` zijn twee functies die gebruikt kunnen worden om dynamisch geheugen van de heap te alloceren en vrij te maken. Met `malloc()` kan je een bepaalde hoeveelheid geheugen alloceren op de heap en met `free()` kan je dit geheugen weer vrijgeven, zodat het opnieuw kan worden gebruikt.

- **Memory leaks**
  Memory leaks ontstaan als het geheugen dat met `malloc()` gealloceerd wordt op de heap niet vrijgegeven wordt met `free()`. Aangezien gegevens van de heap niet altijd vrijgemaakt worden aan het einde van een programma, kan het zijn dat deze gegevens die niet meer nodig zijn geheugen blijven opnemen. Dit kan erg onhandig zijn en leiden tot overbodige gegevensopslag, wat computers slomer maakt.

## LECTURE 10: Headers, proprocessors en linken

### Compileerstadia [(Bron)](https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/)

Het compileren van een C bestand naar een executable file gebeurt in 4 fases.

1. **Preprocess**
   In deze fase worden de eerste bewerkingen aan het programma gemaakt. Bij het preprocessen van de sourcefile worden onder andere comments weggehaald, worden bijgevoegde bestanden "uitgepakt", worden conditionele compilaties (zoals `#ifndef` of `#define`) uitgevoerd en worden macro's uitgebreid.

2. **Compile**
   In deze fase worden de preprocessed bestanden omgezet naar assembly instructies.

3. **Assembler**
   In deze fase worden de instructies in assembly omgezet naar een object file.

4. **Link**
   In deze laatste fase worden alle functies met hun definities gelinkt. Het doel van het linken is om de object bestanden met de libraries te linken, zodat alle functies met hun definities kunnen worden gebruikt.

- **Object files**
  Object files zijn bestanden in machinecode die uiteindelijk vertaald worden naar executable files, maar nog niet helemaal compleet zijn. Ze worden gegenereerd in de assembly fase.

- **Executable**
  Executable bestanden zijn bestanden die in machinetaal zijn geschreven en dus door machines gelezen en uitgevoerd kunnen worden.

- _Extern_
  Met het keyword `extern` geef je aan dat je een variabele uit een ander bestand gebruikt.

- _Static_
  Met het keyword `static` maak je een statische variabele aan, die niet op de heap wordt geplaatst, maar in het datasegment van het geheugen. Deze variabele wordt geïnitieerd zodra de funtie waarbinnen deze zich bevindt wordt aangeroepen, maar blijft opgeslagen in het geheugen, zelfs zodra de functie afgelopen is. Als de variabele buiten een functie wordt gedeclareerd, betekent dit dat de variabele alleen toegankelijk is binnen het bestand en niet erbuiten.

- _Makefiles en make_
  Makefiles en zijn bestanden die aangeven hoe bestanden aan elkaar gelinkt kunnen worden en hoe deze gecompileerd moeten worden. Met de `make` command kan je de instructies in de makefile uitvoeren.

### Header files

- **Header files**
  Header files zijn bestanden die eindigen met `.h` en zijn gemaakt om een interface te bieden bij het gebruik van code buiten de sourcefile. Header files kunnen in het bestand gezet worden met de `#include` macro, en zullen bij het preprocessen uitgevouwen worden tot hele code die dus wordt samengevoegd met de sourcefile.

- **#include, #define, #if**
  Dit zijn macro's die bij het preprocessen worden verwerkt.

  1. `#define`: maak een constante variabele aan die bij het preprocessen overal wordt vervangen met zijn waarde.

  ```c
  // Source code
  #define LIMIET 100
  printf("Het limiet is %d.\n", LIMIET);

  // Preprocessed code
  printf("Het limiet is %d.\n", 100);
  ```

  2. `#if`, `#ifndef`, `#endif`: gebruik het tussenliggende codeblok alleen als de conditie waar is.

  ```c
  #ifndef COMPILE_MAIN
  int main() {...}
  #endif
  ```

  3. `#include`: voeg de headerfiles toe van externe bestanden/libraries zodat de functies/variabele daarvan in je sourcefile gebruikt kunnen worden.

  ```c
  #include <stdio.h> // Gebruik library header file
  #include "diy.h" // Gebruik een lokale header file
  ```

- **Modularisatie**
  Modularisatie is een methode die toegepast kan worden om meerdere bestanden samen in één bestand samen te voegen, zodat het in één programma gebruikt kan worden. Elke module dient een goed georganizeerde interface te hebben, die uitlegt hoe alle functies van een module werken.

- _Interface_
  Een interface is een bestand met een aantal functiedeclaraties, zonder de implementatie van deze functies. Dit zorgt ervoor dat de code achter de functies privé kan blijven, indien de ontwikkelaar dat wilt.

- _Implementatie_
  De implementatie van het interface wordt geregeld in een C bestand met dezelfde naam. De code die in dat bestand geschreven wordt zal door de linker samengevoegd worden met de object file van de source file, waardoor de code van de module samen kan werken met de broncode.

- _Moet een struct in de header?_
  Of een struct in de header gedefineerd moet worden hangt af van de wensen van de ontwikkelaar. Als de ontwikkelaar wilt dat zijn module als een 'black box' functioneert en de gebruiker dus geen toegang mag hebben tot de broncode van de module, wordt het aangeraden om een **forward declaration** te doen, anders kan de ontwikkelaar de struct gewoon in de header initialiseren. Een forward declaration houdt in dat je de struct in de header declareert en in de implementatie initialiseert, waardoor gebruikers de struct-leden niet zelf kunnen aanpassen en de struct alleen kunnen bereiken met pointers. Het voordeel van het initialiseren van de struct in de header is dat de gebruiker zelf ook toegang heeft tot de struct in zijn code, als de struct in het bijbehorende implementatiebestand wordt gedefinieerd heeft de gebruiker geen toegang tot de struct, en kan de gebruiker er alleen maar naar lezen en schrijven met behulp van functies die door de ontwikkelaar zelf zijn geschreven.
