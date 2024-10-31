# DATASTRUCTUREN `Lecture 2`

`31 oktober, 2024`

## Zoeken

Stack kunnen gebruikt worden om te zoeken.

### ALG: Depth first search (DFS)

Omdat stack een LIFO structuur is, worden de nieuwste locaties als eerst onderzocht

1. Noteer je huidige locatie als 'bezocht'
2. Zoek een richting die je nog niet bezocht hebt
3. Als je er een vindt, sla je huidige positie op in de stack van bezochte plekken en ga daarna die richting op
4. Als je geen onbezochte richting vindt, pop dan de laatste locatie van de stack die niet volledig doorzocht is

Je kan dit op twee manieren implementeren:

1. Recursie

   ```c
   depth_first_search(locatie. doel):
       als target op huidige locatie is:
           locatie gevonden!;
           return;
       markeer locatie;
       voor alle mogelijke buren:
           als er daar geen gemarkeerde locaties zijn:
               depth_first_search(buurman, doel);
   ```

2. Expliciete stack

   ```c
   depth_first_search(locatiie, doel):
       maak een stack, zet de locatie op de stack;
       markeer locatie;
       terwijl !stack_leeg:
           pop locatie van stack;
           als doel op de locatie is:
               doel gevonden!;
               break loop;
           for alle buren op locatie:
               als geen gemarkeerde locatie:
                   push buurman op de stack;
                   markeer de locatie van de buurman;
       verwijder de stack;
   ```

3. Recovering the path
   ```c
   depth_first_search(locatiie, doel):
       maak een stack, zet de locatie op de stack;
       markeer locatie;
       terwijl !stack_leeg:
           pop locatie van stack;
           als doel op de locatie is:
               doel gevonden!;
               break loop;
           for alle buren op locatie:
               als geen gemarkeerde locatie:
                   push buurman op de stack;
                   markeer de locatie van de buurman;
                   voorganger(buurman) = locatie;
       verwijder de stack;
   ```

### Breath first search vs Depth first search

1. DFS = Stack
2. BFS = Queue

- DFS kan misschien een verkeerde afslag nemen en zal dan langer bezig zijn. Dat zal niet gebeuren met BFS.
- BFS vindt altijd een pad dat het minimale aantal stappen nodig heeft
- DFS hoeft minder geheugen te gebruiken dan BFS

## Lijsten

Stacks en queues die met een array worden geïmplementeerd zijn gelimiteerd omdat arrays altijd maar een bepaalde grootte hebben.

### DS: Dynamic array

1. Maak een array en vul deze op
2. Zodra deze array vol zit maak je met malloc een array aan die twee keer zo groot is.
3. Zet alle waardes van het oude array aan de voorkant van het nieuwe array.
   Het array houdt rekening met hoeveel ruimte deze gealloceerd heeft gekregen, zodat het deze kan verdubbelen zodra het array vol zit.

```c
struct stack {
    keytype *data;
    size_t used;
    size_t allocated;
}

struct stack *strack_create() {};

int stack_reallocate(struct stack *st, size_t new_alloc) {
    // Update de velden st->data en st->allocated
    // st->used blijft hetzelfde
    //
    // Hint: zoek de functie realloc op
}
```

### DS: Gelinkte lijsten
Met een gelinkte lijst kan je een array van onbepaalde lengte maken


```c
struct listnode {
    keytype item;
    struct listnode *next;
}
```

Er zijn twee varianten:
- Een singly linked list (SLL) bevat alleen een pointer naar het volgende item
- Een doubly linked list (DLL) bevat ook een pointer naar het vorige item

    ```py
    // Singly Linked List (SLL)
    insert_achter(node, waarde):
        nieuwe_node = allocate_node();
        nieuwe_node->waarde = waarde;
        nieuwe_node->next = node->next;
        node->next = nieuwe_node;

    verwijder_next(node):
        next_next = node->next->next;
        deallocate(node->next);
        node->next = nextnext;

    ```

    ```py
    // Doubly Linked List (DLL)
    insert_voor(node, waarde):
        nieuwe_node = allocate_node();
        nieuwe_node->waarde = waarde;
        niuewe_node->next = node;
        nieuwe_node->vorige = node->vorige;
        node->vorige->volgende = nieuwe_node;
        node->vorige = nieuwe_node;

    delete(node):
        node->prev->next = node->next
        node->next->prev = node->prev
        deallocate(node)
    ```

### Linked list vs Dynamische array

| | Dynamische array | Linked list |
| --- | --- | --- |
| Doel | Een lijst opslaan | Een lijst opslaan |
| gehuegen gebruik | Efficient ingepakt, cache efficient | Je moet alle pointers opslaan, niet achtereenvolgend |
| Lookup/ index veranderen | Snel | Je moet vanaf het eerste item zoeken |
| Invoegen aan het einde | Je moet misschien meer geheugen toewijzen | Snel|
| Invoegen in het midden | Misschien moet je waardes aanpassen of reallocaten | Snel |

## Performance meten

Algoritmes gebruiken twee middelen:
- Geheugen
- Tijd

### Tijd meten (stopwatch)
Je kan de snelheid van een algoritme meten door te kijken naar hoe lang het duurt om de oplossing te vinden

#### Problemen
- Generaliseerbaarheid: wat als we een andere compiler of computer kiezen?
- Schaalbaarheid: wat als de array erg goed is?
- Inzicht: we begrijpen nu nogsteeds niet waarom een algoritme zo werkt

### Relatie tussen algoritme en input size meten
Laat `T(n)` de gemiddelde hoeveelheid tijd zijn die benodigd is om een random input array van grootte `n` te meten. Dit heet de **average case time complexity** van het algoritme. Test de inpit van exponentieel groeiende groottes van arrays.

Hieruit komt een grafiek voort aan de hand waarvan je kan aflezen wat het verband is tussen de tijd en de inputgroote (e.g. constant, logaritmisch, exponentieel).
**Handig trucje**: Als je deze grafiek plot op single logaritmisch papier en de lijn lineair wordt, is de functie exponentieel. Als de lijn op dubbel logaritmisch papier pas lineair wordt, is de functie polynomiaal.

> **Vergeet niet om je datastructuren uit te tekenen**
> - Alles op de heap schrijf je in een doos, evenals de namen van de pointers op de stack
> - Teken pointers als pijlen die of uit een doosje voortstromen, of uit een van de pointer variabelen. De pointer wijst naar een ander item op de heap.
> - Een NULL pointer wijst nergens heen, dus teken in plaats avn een pijl NULL of wat dan ook