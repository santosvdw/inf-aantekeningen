Strings en arrays
========================

# Arrays
Een array is een datatype dat is opgebouwd uit een vast aantal waardes van hetzelfde type. Deze kan je als volgt declareren:
``` c
int getallen[100]; // Dit is een array genaamd getallen die 100 waardes kan opslaan.
```

Een array kan je ook direct initialiseren. Dit gebeurt als volgt:
``` c
int getallen[5] = {0,3,5,6,7};
```
Als je een array gelijk initialiseert hoef je niet per se de grootte op te geven. Je mag wel minder waardes opgeven dan de grootte van de array, maar niet meer.

Waardes binnen array kan je aanroepen met hun indexcijfer: `a[0] = 5;`

## Strings
Een string is een array van chars. Het einde van een string wordt gemarkeerd door een char met waarde '\0'. De format specifier voor een string is '%s". Er zijn verschillende functies die gemaakt zijn voor strings, zie hiervoor de powerpoint.