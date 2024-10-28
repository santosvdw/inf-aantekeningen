Pointers
========================
> Het eerste gedeelte van deze aantekeningen ontbreken. Zie hiervoor de slides van 19/09.

## Pointers initialiseren.

``` c
int a_pointer = &a // Lees dit als adres van a
```

Je kunt ook een pointer declareren met een *:

```c
int *a_ptr;
```

Je kunt het sterretje ook gebruiken om de waarde van een variabele aan te passen:

```c
*a_ptr = 3 // De waarde van a is nu 3.
```
Je kunt met pointers alleen wijze naar geïnitialiseerde waardes.

**& betekent maak de pijl, * betekent volg de pijl.**

### Void pointers
Als je een pointer hebt naar eeb adres naar je niet weet wat het type van de variabele is, kan je void * gebruiken als generieke pointer.

### Null pointers

Een pointer kan de waarde NULL hebben, deze wijst dan nergens heen.

### Arrays en pointers

Je kunt een pointer naar het eerste element van een array gebruiken alsof het de array zelf is. Je mag een array ook gewoon toekennen aan de pointer.  Het verschil tussen een array en een pointer naar een array ligt in de hoeveelheid geheugen. Een pointer declareert alleen de ruimte voor een pointer, een array declareert de ruimte voor alle waardes in de array. 

Als je eer array meegeeft aan een functie, wordt er eigenlijk een pointer naar de array gemaakt. Je kan nooit een array zelf meegeven aan een pointer.