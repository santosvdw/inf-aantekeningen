# Kennismaking met C
### 1 september 2024

=================================

!!! Zorg ervoor dat je de concepten begrijpt -- let op rode woorden

=================================

## De belangrijkste delen van een computer

1. Het CPU
2. Het geheugen

## Hoe voert een computer een programma uit?

1.  De CPU haalt waardes uit het geheugen via de "bus" (de koperdraden)
2. Op basis van de waardes voert de computer operaties uit
3. De reeks van zulke waardes is een programma in **machinetaal**

## Hoe kan je dan een programma in een andere taal uitvoeren?

1. **Interpreter**: Een programma (in machinetaal) dat een programma in een andere taal decodeert en meteen uitvoert
2. **Compiler**: Een programma (in machinetaal) dat een programma in een andere taal vertaalt naar machinetaal

## Het uitvoeren van een C programma

C is een gecompileerde taal.
1. Installeer gcc
2. maak een tekstbestand met je programma. Geef het bestand de .c extensie
```shell
$ gcc gello_world.c -o hello_world
```
3. Ga naar je shell en compileer je programma
4. Voer het uit
```bash
$ ./hello_world
```

## Eerste programma
```c
1. #include <stdio.h>
2. 
3. int main(void) {
4.     printf("Hello, world\n");
5.    return 0;
6. }
```

1. Een **preprocessor** opdracht die code importeerd
3. Een functie genaamd ¨void¨ wordt aangemaakt.
4. Print een string
5. Return niks als alles goed gaat 

## Waardes en types

Programma's werken met informatie die niet van tevoren vaststaat. Dat zijn **waardes**
Elke waarde heeft een type. Waardes zijn ergens in het geheugen opgeslagen
Types zijn alleen voor de compiler. 
**Je moet altijd de types van je waardes kennen**

### Soorten types:
- Integer types: char, int
- Floating point types: float, double

## Variabelen

Een variabele is een stukje informatie waar je naar kan verwijzen. Deze heeft altijd een naam, een type en een waarde, 
C is **statisch getypeerd**: het type van een variabele wordt gekozen bij initiatie en kan nooit meer veranderen.

## Pythagoras

```c
1. #include <stdio.h>
2. 
3. int main(void) {
4. float lengte;
5. float breedte;
6. printf("Geef de lengte\n");
7. scanf("%f", &lengte);
8. printf("Geef de breedte\n");
9. scanf("%f", &lengte);
10. float diagonal = sqrt(lengte + lengte + breedte + breedte);
11. printf("De diagnoaal is: %f", "diagonal);
12. return 0;
13. }
```

**Declaraties**zijn variabelen die geïntroduceerd worden.
**Assignment** kent een nieuwe waarde toe aan een variabele. Dit is een **statement**. 
**Expressie** combineert waardes tot een eindantwoord (als een rekensom). 
**Format specifiers** gebruik je een format dat aangeeft wat gelezen en uitgevoerd moet worden.