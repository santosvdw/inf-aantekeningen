# DATASTRUCTUREN `Lecture 1`

`28 oktober, 2024`

## Waar gaat de cursus over

We beantwoorden de volgende vraag:

- Wat zou een efficiente manier zijn om informatie in het geheugen op te slaan?

We behandelen de volgende concepten:

- Datastructuren: concrete technieken om op een efficiente wijze informatie te gebruiken en bewerken in het computer geheugen
- Abstracte data types: interfaces die aangeven wat we kunnen met de opgeslagen data zonder ons zorgen hoeven te maken over de implementatie
- Algorithmische analyse: uitvogelen hoe bepaalde oplossingen verglijkbaar met elkaar zijn op basis van de bronnen die ze gebruiken en vaststellen hoe efficient ze zijn.

## Wat zijn datastructuren?

- Moderne computers gebruiken het \*_Von Neumann Architectuur_, met een CPU, de bus en het geheugen.
- Het geheugen is een groep **woorden**, van vaak 32 of 64 bits, ingedeeld in **bytes**, elke byte heeft een adres. Het geheugen kan je zien als een datastructuur.
- Al die woorden zijn onder te verdelen in verschillende types, waarop je andere operaties kan uitvperen/ Een type is eigenlijk een set van mogelijke waardes.

### Custom types

In programmeertalen is het mogelijk om zelf types te maken, zoals classes, structs of arrays. Alle talen laten het toe om met bepaalde waardes andere waardes aan te roepen (bv. pointers en referenties). Deze mogelijkheid maakt datastructuren mogelijk.

## Abstract data types (ADT)

Een abstract data type is een interface, een specificatie van operatie die op het type kunnen worden uitgevoerd, maar niet hoe deze worden gedaan. Je kan het zien als een contract. Een datastructuur is daarentegen concreet, je wweet precies hoe zijn operaties werken. In C wordt een ADT gedefinieerd in een header file, deze declareert het type, maar definieert het niet. Functies van het interface gebruiken alleen pointers naar het nieuwe type. De pointers zijn altijd dezelfde grootte, de compiler hoeft niet te weten hoe het type gedefineerd is. Dit heet een **incomplete type**. In het .c bestand zal je dan het datatype definieëren.

## ADT: Stack

Een stack is een ADT en je kan het zien als een stapel. Je zet nieuwe waardes bovenop en je kan de bovenste waarde van de stapel halen om degene daaronder te zien. Het geheugensegment 'stack' is eigenlijk een implementatie van de ADT stack. Een stack heeft de volgende operaties:

- `push`: zet een nieuwe waarde bovenop
- `pop`: pak de bovenste waarde

- `peel`: selecteer het bovenste item, zonder deze weg te halen.
- `empty`: return true als de stack leeg is, anders false

Een stack is ook gekend als een LIFO container, last in, first out. Elke keer dat je een functie aanroept breidt je de stack uit. Om een stack te implementeren kunnen we een array gebrui,en. We geven het array dan een grootte waarvan we hopen dat deze genoeg is. We moeten ook bijhouden hoeveel slots al gevuld zijn en we moeten rekening houden met wat er gebeuren moet indien de array vol zit.

## DS: Array

In een array worden waarden opgeslagen in achtereenvolgende even grote blokken in het computer geheugen. Als een array start bij adres a, en elke waarde k bytes is, kunnen we waardes binnen de array opzoeken met `a + k * n`. Arrays kan je op de stack plaatsen door het array direct te declareren of je kan ze op de heap zetten met `malloc`.

## ADT: Queue

Eeb queue is een stack, maar is FIFO ipv LIFO.

- `enqueue`: voeg een item aan de achterkant
- `dequeue`: haal item van de voorkant
- `peek`: selecteer het item van de voorkant zonder deze weg te halen
- `empty`: return true als de stack leeg is, anders vals

Een queue implementeren kan ook in een array, maar `dequeue` haalt alsnog items van de voorkant, waardoor het eerste gedeelte van de array leeg wordt terwijl de achterkant steeds voller raakt. Je wilt dus dat de waardes na het gebruiken van `dequeue` naar voren schuiven, dat kost echter ook veel tijd. Je kan dus ook gewoon weer vooraan de array gaan schrijven, zodra je de achterkant van een array hebt bereikt. Het is dus belangrijk bij een queue om ook bij te houden waar de voor- en achterkant van de array zit.
