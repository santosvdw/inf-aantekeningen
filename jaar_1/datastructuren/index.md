# DATASTRUCTUREN `samenvatting`

## Belangrijke informatie

- Datum: 20/12/2024
- Toetsstof: Alle colleges
- Soort tentamen: digitaal + multiple choice

## Hoofdthema's:

- **Datastructuren**: Datastructuren zijn gedefinieerde implementaties die de mogelijkheid bieden om informatie op te slaan in het geheugen. Voorbeelden van datastructuren zijn bijvoorbeeld linked lists, array's en hash tables.
- **Abstract data types**: Abstract data types zijn interfaces die beschrijven hoe informatie opgeslagen kan worden. Echter hoeft dit niet per se geïmplementeerd te worden. Een abstract data type kan verschillende vormen aannemen, zelfs als deze gebruik maakt van dezelfde datastructuren. Voorbeelden van abstracte datatypes zijn: sets, lists, en trees.
- **Algorithmische analyse**: Algorithmische analyse is een vaardigheid waarbij je een algorithme bestudeert om uitspraken te kunnen doen over de efficiëntie en complexiteit van de desbetreffende set van instructies. Hierbij wordt over het algemeen gekeken naar de hoeveelheid tijd en ruimte die het algorithme in beslag neemt.

## College 1: ADT, stacks en queues

- **Interfaces**: Een interface kan gezien worden als een 'contract', dat verklaart hoe een ontwikkelaar met een datatype kan omgaan en hoe deze gebruikt kan worden. De implementatie van het interface wordt echter ter zijde gelaten.
- **Header file**: Een header file is een document dat laat zien hoe een datastructuur (of abstract datatype) gebruikt kan worden, maar de implementatie zelf verbergt. In de header file worden alle functies en structs gedeclareerd, maar nog niet geïmplementeerd.
- **Incomplete type**: Een incomplete type is een custom structuur die weliswaar gedefinieerd is, maar wiens members nog niet gedefinieerd zijn. Dit maakt de struct incompleet, omdat er geen informatie in opgeslagen kan worden.
- **Invariant**: Een invariant is een bepaalde conditie of een verzameling condities die waar moet zijn als je een abstract data type wilt categoriseren. Er zijn bijvoorbeeld veel verschillende abstracte datastructuren, en invarianten zijn de manieren waarop deze van elkaar onderscheiden kunnen worden.

### DS: Array

Een array is een ontzettend belangrijke datastructuur. Een array maakt het mogelijk om een verzameling waardes van hetzelfde gezamenlijk op te slaan. Voor een array moet echter wel expliciet ruimte worden vrijgemaakt in het geheugen met `malloc()` (dan wordt de array opgeslagen in de heap) of met een explliciete declaratie (bijvoorbeeld `int array[100]`), dan gaat deze op de stack.

### ADT: Stack (LIFO)

Een stack is een verzameling aan waardes. Bij een stack voeg je waardes toe bovenaan de lijst, en als je een waarde uit de lijst wilt halen haal je deze ook van bovenaf.

- `push()`: zet een nieuwe waarde bovenaan de lijst
- `pop()`: haal de bovenste waarde van de lijst weg
- `peek()`: bekijk de bovenste waarde van de lijst
- `empty()`: check of de lijst leeg is

### ADT: Queue (FIFO)

Een queue is een verzaneling aan waardes. Bij een queue voeg je waardes toe aan het begin van de rij en zullen deze er als laatste uitkomen, net als in de supermarkt.

- `push()`: zet een nieuwe waarde achteraan de rij
- `pop()`: haal de oudste waarde uit de rij weg
- `peek()`: bekijk de oudste waarde uit de rij
- `empty()`: check of de lisjt leeg is

<!-- | ADT   | Operaties      | Volgorde |
| ----- | -------------- | -------- |
| Stack | `push`, `pop`, `peek`, `empty` | FIFO |
| Queue | `push`, `pop`, `peek`, `empty` | LIFO | -->

## College 2: Zoeken, lijsten en performance

### ALG: Depth first search

Een algoritme dat gebruik maakt van een stack (LIFO) om het pad te vinden. Hoewel deze niet altijde de snelste is, zal het algoritme wel altijd een pad vinden als deze bestaat. Deze bezoekt eerst steeds de nieuwste buurman in de lijst.

```c
depth_first_search(location, target):
if the target is at our location:
    destination found!
    return
drop breadcrumbs
for all possible neighbouring locations:
    if there are no breadcrumbs there:
        depth_first_search(neighbour, target)
```

### ALG: Breadth first search

Een algoritme dat gebruik maakt van een queue (FIFO) om een pad te vinden. Dit algorithme zal het snelste pad vinden, maar is wel minder efficiënt. Deze bezoekt eerst steeds de oudste buurman in de lijst.

```c
breadth_first_search(location, target):
if the target is at our location:
    destination found!
    return
drop breadcrumbs
for all possible neighbouring locations:
    if there are no breadcrumbs there:
        breadth_first_search(neighbour, target)
```

| Aspect     | BFS                                   | DFS                                         |
| ---------- | ------------------------------------- | ------------------------------------------- |
| Volgorde   | Loop alle buren in de lijst af (FIFO) | Volg eerste buurman zo lang mogelijk (LIFO) |
| ADT        | Queue                                 | Stack                                       |
| Geheugen   | Meer                                  | Minder                                      |
| Kortse pad | Altijd                                | Niet gegarandeerd                           |

### DS: Dynamic array

Een dynamic array is een array wiens grootte geregeld wordt bijgesteld om zo aan de capaciteit te kunnen voldoen.

De implementatie ziet er als volgt uit:

```c
struct dynamic_array {
    keytype* data;
    int size;
    int capacity;
}
```

In dit geval is `keytype** data` de array zelf, `int size` de indicatie van hoeveel items er in de array zitten en is `int capacity` de maximale capaciteit van de array. Het bijstellen gaat als volgt:

```c
void push(struct dynamic_array *d, keytype value) {
    /* ... Handle edge cases ... */
    if (d->size == d->capacity) {
        // Array is at capacity
        /* Copy array to temporary array */
        keytype *temp = malloc(sizeof(keytype) * d->capacity);
        memcpy(temp, d->data);

        d->capacity = d->capacity * 2;

        /* Reallocate memory for array */
        d->data = realloc(d->data, sizeof(keytype) * d->capacity);
        memcpy(d->data, temp);
        free(temp);
    }

    /* Add new value to the back */
    d->data[d->size] = value;
    d->size++;
}
```

### DS: Linked list

Een linked list is een datastructuur waarbij waardes niet in een lijst worden opgeslagen zoals bij een array, maar ze allemaal los van elkaar zijn en met elkaar verbonden worden door middel van pointers. Er zijn verschillende variaties op een linked list, maar de meest bekende zijn een **singly linked list** en een **doubly linked list**. Een singly linked list linkt alleen naar zijn opvolger en een doubly linked list linkt naar zijn opvolger en zijn voorganger. Het voordeel van een linked list is dat je geen geheugen hoeft vrij te maken in het geheugen om een nieuwe waarde toe te voegen, dit maakt een linked list nog dynamischer dan een linked list.

Een linked list ziet er vaak als volgt uit:

```c
struct node {
    keytype value;
    struct node *next;
    struct node *prev; // Only for doubly linked lists
}
```

### ALG: Measuring performance

- **Generalizability**: In hoeverre zijn resultaten hetzelfde bij bijvoorbeeld andere hardware?
- **Scalability**: Wat gebeurt er als de grootte van de input stijgt?
- **Insight**: Hoe werkt het algorithme?

Bij het meten van de performance van een algorithme is tijd een erg belangrijke factor. Tijd kan gemeten wroden met bijvoorbeeld een stopwatch. Het probleem hiermee is echter dat dit niet goed is voor de generalizability, de scalability of de insight. We kunnen ook kijken naar de relatie tussen de grootte van de input en de tijd van het algorithme. Dit is veel beter voor de scalability.

#### De relatie tussen tijd en inputgrootte

De relatie tussen tijd en inputgrootte kunnen veel vertellen over de scalability van een algorithme. We kunnen kijken naar de gemiddelde tijd die het kost om het algorithme een n aantal waardes te laten verwerken. Deze gemiddeldes kunnen we dan weer plotten in een grafiek om een beter overzicht te krijgen van de schaalbaarheid.

#### Groeischalen

- Constant = $$T(n) = c$$
- Logarithmisch = $$T(n) = c * log(n)$$
- Polynomiaal (sub-lineair) = $$T(n) = c * n^x (0 < x < 1)$$
- Lineair = $$T(n) = c * n$$
- Nauwelijks superlineair = $$T(n) = c * n * log(n)$$
- Polynomiaal, superlineair = $$T(n) = c * n^x (x > 1)$$
- Exponentieel = $$T(n) = c * a^n (a > 1)$$

## College 3: Best case, worst case, set, map (15:16)

### ALG: Algorithmische analyse

- **Best case time complexity**: Het beste scenario voor het algoritme. In dit geval moeten het minste aantal stappen worden uitgevoerd.
- **Worst case time complexity**: Het slechste scenario voor het algoritme. In dit geval moeten de meeste stappen worden uitgevoerd.
- **Average case time complexity**: Het gemiddelde scenario voor het algoritme. Dit scenario zit altijd tussen het beste en het slechste scenario in en wordt aangeduid met $$T(n)$$.

Algorithmische analyse is vrij eenvoudig: het belangrijkste is dat je stukken code groepeert op basis van hoe vaak deze worden uitgevoerd: denk bijvoorbeeld aan loops. Het kan bijvoorbeeld ook zijn dat er in een loop steeds een functie wordt aangeroepen, dit zal ook impact hebben op de tijd van de functie. Om te kijken naar hoeveel tijd een algoritme kost moet je gewoon simpelweg tellen hoe vaak er operaties worden uitgevoerd op de waardes van de input.

### Grenzen

- **Scherpe grenzen (sharp bound)**: Scherpe grenzen geven de uiterste uitkomsten van een algoritme aan voor input n. Deze grenzen zijn het beste en het slechste scenario voor het algoritme. De functies die aan deze grenzen voldoen worden aangeduid met "Big Theta" en vallen allemaal onder $$\Theta (n)$$.

- **Oppergrens (slechste geval)**: De oppergrens geeft aan wat voor elke input n het slechste scenario is voor een bepaald algorithme. Deze informatie is handig voor een analyse, omdat ontwikkelaars uit moeten gaan van het slechste scenario. De functies die vallen onder de bovengrens zijn altijd groter dan $$T(n)$$ en worden aangeduid met de term "Big-Oh" en worden genoteerd als $$O(n)$$.

- **Ondergrens (beste geval)**: De ondergrens geeft aan wat voor elke input n het beste scenario is voor een bepaald algorithme. De functies die onder deze grens vallen worden aangeduid met "Big-Omega" en worden genoteerd als $$\Omega (n)$$.

Deze drie grenzen behoren te voldoen aan de volgende regels:

1. Scherpe grenzen: Er bestaat geen $$T(n)$$ waarvoor geldt dat $$\Theta (n) > T(n)$$ of $$\Theta (n) < T(n)$$. Oftewel: $$T(n)$$ mag nooit buiten de bounds van $$\Theta (n)$$ vallen.
2. Oppergrenzen: Er bestaat geen $$T(n)$$ waarvoor geldt dat $$O(n) < T(n)$$. Oftewel: $$T(n)$$ mag nooit groter zijn dan $$O(n)$$.
3. Ondergrenzen: Er bestaat geen $$T(n)$$ waarvoor geldt dat $$\Omega (n) > T(n)$$. Oftewel: $$T(n)$$ mag nooit kleiner zijn dan $$\Omega (n)$$.

### ADT: Set

Een set is een collectie aan waardes die verzameld worden op basis van een gedeelde karaktereigenschap. Sets zijn echter niet gerangschikt, wat betekent dat de waardes binnen een set op willekeurige volgorde staan. De waardes in een set zijn daarnaast ook uniek: een waarde binnen een set zal nooit twee keer voorkomen.

- `add()`: Voeg een waarde toe (als deze nog niet in de set zit)
- `remove()`: Haal een waarde uit de set als deze erin zit.
- `contains()`: Check of een bepaalde waarde in een set zit.

```c

struct set *sick = set_create();
set_add(sick, &beth);

void check_patient(struct set *sick, struct person *patient) {
    // check if Morty has sick
    if (set_contains(sick, &patient)) {
        printf("Patient is ill :-(\n");
    } else {
        printf("Patient is okay.\n");
    }
set_destroy(sick);
}

check_patient(sick, beth);
```

```shell
$ > Patient is ill :-(
```

### ADT: Map

Een map wordt gebruikt om verbanden tussen een key en een value op te slaan. Een map is een set met een uitbreiding: de set zelf wordt nu een key genoemd. en de inhoud van de set zijn nu de values. Een map kan echter veel meer key's bewaren en is daarom een ideale opslagwijze voor bijvoorbeeld het indexeren van woorden uit teksten of patiënten.

- `put(key, value)`: Sla een key en een value op in de map. Voegt te value toe aan een bestaande key als deze al aanwezig is in de lijst.
- `remove(key)`: Verwijder een key uit de map.
- `get(key)`: Vraag de waardes van een bepaalde key op.

```c
/* Een grafische weergave van een set in C */
struct set words = {
    hello: [1, 3, 6, 9],
    i: [2, 3, 7, 10]
};
```
