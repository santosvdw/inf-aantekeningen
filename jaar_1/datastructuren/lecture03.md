# DATASTRUCTUREN `Lecture 03`
`04 november, 2024`

## Efficiëntie van algoritmen beoordelen

> Zie slides voor uitleg en bijbehorende wiskunde

## ADT: Set
Een set is een datatype waar je waardes in kunt opslaan, maar de volgorde is willekeurig (**unordered**). Een waarde kan maar één keer in een set zitten. Een set biedt de volgende operaties:
- `add(set, key)`: voeg een key toe aan de set
- `contains(set, key)`: check of een key in de set zit
- `remove(set, ket)`: haal een key uit de set
- (optioneel) `size`, `union`, `intersection`...
- (optioneel) een manier om om over alle keys te itereren

Het is mogelijk om een set te maken met een dynamische array, het is alleen niet zo handig. Zo hebben arrays een fixed length, wat betekent dat je ten eerste regelmatig zelf geheugen opnieuw moet alloceren. Daarnaast is het met de `contains()` functie minder efficiënt omdat je dan eerst over de gehele functie moet itereren.

## ADT: Map
Een map wordt ook wel een **dictionary** of **associative array** genoemd en wordt gebruikt om relaties op te slaan. Een map onthoudt namelijk niet alleen de key, maar ook de waardes die bij deze keys horen. De keys moeten uniek zijn, voor de waardes hoeft dat niet perse. Een map biedt de volgende operaties:
- `put(dict, key, value)`: (aka `insert`, `store`), zet een koopel van een key en een waarde in de map, en vervang eventuele eerdere gelijknamige keys
- `get(dict, key)`: retourneer de waarde van de key uit de map, of retourneer een foutmelding als de key niet in de map staat
- `remove(dict, key)`: haal een key en zijn waarde uit de map
- (optioneel): `size`, `contains`, manieren om over de keys te itereren