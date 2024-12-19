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
