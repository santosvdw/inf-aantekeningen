Datatypes (05/09/24)
========================

## Geheugen en waardes

Het computergeheugen is een reeks **woorden**. Een **woord** is een reeks bits.

## Waardes en types
Programmeertalen bieden **datatypes**. De omgangsvorm van de computer met het datatype in C staat nog niet vast.**Implementation defined**  betekent dat het ???

## Datatype: int
Dit datatype ondersteunt in ieder geval de getallen -32767 tot 32767. (Minstens 2^16 bits). Je kan de int ook een eigenschap toewijzen (short int 2^16, long int 2^32 & long long int 2^64. Deze print je met "%hd, %ld, %lld"

### Signed en unsigned
Deze getallen zijn altijd positief en hebben dus een groter bereik. deze print je met "%hu, %u, %lu, %llu" Het bereik ligt dan tussen 0 en het totale aantal bits. Deze types heten: unsigned short, unsigned, unsigned long en unsigned long long.

### Hoe herkent C integers?
In de expressie 
```c 
3 * x - 5
```
staan twee ints letterlijk opgeschreven. Dit zijn **literals**. Deze zijn altijd positief. C gebruikt altijd het eerste type dat past: short, normaal, etc. Je kunt de letters u of l gebruiken om expliciet te maken wat voor soort type het moet worden. ZO kan je bijvoorbeeld 3ul schrijven op een getal 3 dat een unsigned long type is. 
Een 0 aan het begin betekent dat het getal in het octale getalstelsel geteld wordt, dus 011 wordt 13. 0x aan het begin betekent het hexadecimale stelsel. 0x3a maakt het getal 58 als int. 

## Datatype: char
Char is een numeriek type netals int. Het heet char omdat het vaak gebruikt wordt om een letter in op te slaan. Een **byte** is de kleinste groep bits die tegelijk uit het geheugen gelezen of geschreven kan worden. Het datatype in C is de kleinste hoeveelheid geheugen die tegelijk gelezen kan worden die minstens 8 bits is. 

### Char literals
Er zijn enkele codes die je kan schrijven ipv een symbool, zoals \n voor newline, \r voor carriage return, \0 voor null, \t voor tab, etc. 

### Signed of unsigned
Chars kunnen ook signed of unsigned zijn. Signed heeft een bereik van [-127,127] en Unsigned heeft een bereik van [0,255]. Als je de letter wilt printen kan je "%c" gebruiken, als je de waarde wilt printen als getal kan je "%hhd" en "%hhu" gebruiken.

## Datatype: sizeof en size_t
De operator **sizeof** geeft de grootte van een type of een waarde in termen van het aantal chars dat ermee overeen komt. Het resultaat van *sizeof* is een nieuw integertype, **size_t**

## Datatype: floats en doubles
Dit zijn floating point getallen. Hoe die werken is **implementation defined**. Een float heeft in totaal 32 bits en een double 64. In een double kan je ook wetenschappelijke notatie gebruiken (e.g. 3e5).

## Variabelen
Variabelen hebben een naam en een type, en om een variabele te maken gebruik je een **declaratie**.  De naam van een variabele is belangrijk en hoofdlettergevoelig. De naam mag bestaan uit underscores, letters en cijfers, maar de cijfers mogen niet vooraan staan. Sommige **keywords**, als while, const, etc. mogen niet als naam gebruikt worden.

Het toekennen van een waarde aan een variabele heet **initialisatie**.  Met de optie -Wuninitialized kan je de compiler laten waarschuwen als je variabelen gebruikt voordat ze zijn geïnitialiseerd. Als je na de declaratie van een variabele een waarde toekent heet dat een **assignment**. 

### Constanten
Je kunt bij initialisatie aangeven dat een variabele nooit mag veranderen, met de const kwalificatie. 
``` c
const int getal = 6 // De waarde van getal zal nooit veranderd kunnen worden
```

## Expressies
Een expressie is een combinatie van verschillende onderdelen, die samen worden gecombineerd.. C kan een expressie **evalueren** (uitrekenen), en dit levert bijna altijd een waarde op.
```c 
3 * x - 5
```

### Rekenoperatoren
In C zijn er numerieke operatoren die gebruikt kunnen worden in expressies, zoals +-/* en %. Sommige operatoren hebben voorrang boven anderen, dit heet **precedence**. Deze volgorde is hetzelfde als bij wiskunde.
1. Eerst: unaire operatoren (+3, -8)
2. Dan: Vermenigvuldigen, delen, modulo: (3 *4, 3 / 4, 3 % 4)
3. Als laatst: Optellen en aftellen (3 + 4, 4 - 3)

Als operatoren gelijke prioriteit hebben werken we van links naar rechts, dat heet **links-associatief**.

### Assignment operatoren
Er zijn verschillende shorthand voor rekenvoudige expressies: zoals "-=", "*=", etc. Maar ook "variabele++" of "++variabele"

### Typeconversies
Als in een expressie twee waardes niet van hetzelfde type zijn, wordt er typeconversie toegepast. Assignment opreatoren vertalen altijd het type van de rechterkant naar het type van de linkerkant
``` c
short s = 3; // int wordt short int
float f = 3 / 5; // Eerst wordt 3 /5 uitgerekend, want er wordt van links naar rechts gerekend, en dit getal wordt omgezet naar 0
float g = 3 / 5.0; // Eerst wordt 3 omgezet naar een double, dus dan wordt het een double gedeeld door een double en dan krijg je wel 0.6
```

Je kunt ook een type afdwingen met een **cast** expressie.
```c
float h = (float) 3 / 5; // Dit heeft 0.6
```

### Hoe werkt conversie?
- Bij het vertalen van float of double naar integer wordt het getal naar 0 afgerond.
- Bij het vertalen van double naar float is niet gespecificeerd hoe het wordt afgerond.
- Als een waarde niet past in het nieuwe type worden de hoogste bits weggegooid.
- Als je een type kleiner maakt zonder expliciete cast, kan de compiler een waarschuwing geven. 