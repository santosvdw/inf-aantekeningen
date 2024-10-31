# ARCHITECTUUR EN COMPUTERORGANISATIE `Lecture 1`

`28 oktober, 2024`

# Computer abstracties

## Levels van programmeertalen

- High level taal: Een taal met veel abstractie ten opzichte van computercode. Deze talen gebruiken bijvoorbeeld gewone taal, waardoor het voor ontwikkelaars makkelijker te begrijpen is.
- Assembly taal: Een low-level taal met uitgeschreven instructies voor de computer, die alsnog leesbaar is voor mensen.
- Machinetaal: binaire taal waar alle instructies voor een computer in staan opgeslagen. (Vrijwel onleesbaar voor mensen)

### Voordelen van high level talen

- Makkelijker leesbaar voor ontwikkelaars
- Makkelijker te debuggen
- Houdt het programma makkelijker onderhoudbaar
- Maakt programma's universeel voor alle computers
- Compilers kunnen deze taal op een efficiënte manier omzetten naar assembly code

## 'Onder je programma'

- Applicatiesoftware wordt geschreven in high-level languages (HLL)
- Systeemsoftware
  - Compiler: vertaalt HLL code naar machine code
  - Operating system: bevat services, zoals het handelen van I/O, geheugen en opslagbeheer, taken plannen en resources delen.
- Hardware: processor, geheugen, i/o controllers

## Instruction Set Architecture (ISA)

Een ISA bevat alle instructies die een computer kan begrijpen en uitvoeren. De ISA beidt een manier om uniforme programma's te schrijven, die over meerdere platformen werken. Je kan het zien als een contract tussen hardware en software. Het ISA dient dus als een interface: ontwikkelaars weten welke technieken ze mogen gebruiken, maar niet hoe deze precies werken.

## Abstracties

Abstractie is het weglaten van bepaalde elementen uit code om een programma zo minder complex te maken en zodat deze elementen niet afleiden van de kern van het programma. Bij abstractie behoudt je alleen de absolute kern van het programma. Dit maakt het bijvoorbeeld ook makkelijker om een systematisch overzicht van een programma te maken.

## Performance

We kunnen op verschillende manieren kijken naar performance (prestaties) binnen de informatica.

- Algoritmes: we beoordelen de prestaties van algoritmes op basis van het aantal handelingen die we moeten uitvoeren in het ergste geval.
- Programmertalen, -compilers en -architectuur: deze beoordelen we op basis van het aantal handelingen die uitgevoerd moeten worden om alles uit te voeren.
- Processor en het geheugen: hoe snel worden instructies en operaties uitgevoerd
- I/O systemen (incl. OS): hoe snel worden operaties uitgevoerd

### Throughput vs response time
- Throughput: hoeveel bandbreedte is er beschikbaar en hoeveel mensen kunnen tegelijk geholpen worden (grote schaal)
- Response time: hoe lang duurt het om een taak te kunnen uitvoeren (individuele schaal)

Bij het beoordelen van de efficiëntie van systemen op grotere schaal zoals bijvoorbeeld een server wordt er vrijwel altijd gekeken naar throughput boven response time, omdat deze weergeven hoeveel mensen er tegelijk geholpen kunnen worden.


### Executietijd meten
- Wall clock time: meet simpelweg de tijd die het kost om een bepaalde taak uit te voeren (met bijvoorbeeld een stopwatch).
- CPU time: het aantal tijd dat de CPU bezig is geweest met het uitvoeren van een bepaalde taak (zonder de tijd die de CPU heeft besteed aan het wachten op bijvoorbeeld dingen zoals I/O operaties)

Oftewel: wall-clock time kijkt naar de totale tijd die gepaseerd is bij het uitvoeren van de taak en CPU-time kijkt naar de totale tijd die de CPU is beziggeweest met het uitvoeren van de taak. 

### CPU clocking
De clock-speed (klok snelheid) van je CPU geeft aan hoe snel de CPU bepaalde taken kan uitvoeren.











## 'Onder je programma'

- Applicatiesoftware wordt geschreven in high-level languages (HLL)
- Systeemsoftware
  - Compiler: vertaalt HLL code naar machine code
  - Operating system: bevat services, zoals het handelen van I/O, geheugen en opslagbeheer, taken plannen en resources delen.
- Hardware: processor, geheugen, i/o controllers

### Levels van programmeercode:

- High level language (makkelijk te lezen; beter voor productiviteit)
- Assembly language (geschreven representatie van de instructies)
- Hardware representation (binair geëncodeerde instructies en data)

## Instruction Set Architecture (ISA)

De ISA is een goed gedefinieerde hardware/software interface, je kan het zien als een contract tussen software en hardware. Het bevat definities van operaties, modes, etc en oo instrycties voor hoe je de ISA moet gebruiken.

## Abstractie

Helpt ons om om te gaan met complexie.

## Performance

- Response time (execution time) - tijd tussen de start en het einde van een taak
- Throughput (bandwidth) - totale hoeveelheid werk gedaan in een bepaalde tijd

Execution time meten:

- Elapsed time (wall-clock time)
  - Totale tijd gemeten, inclusief overige aspecten
- CPU time
  - Tijd besteedt aan een specifieke taak
  - `CPU Time` = `CPU clock cycles * CPU Clock cycle time` = `CPU Clock Cycles / Clock rate (frequency)`. Performance kan verbeterd worden door de CPU timete verlagen. Dit is vaak echter een trade off met andere aspecten.
- Instruction count en cycles per instruction (CPI) `Clock cycles * Cycles per instruction`. `CPU Time` = `(Instruction Count * CPI) * Clock rate`. Het CPI is een gemiddelde en verschilt per operatie
- MIPS (Millions of Instructions Per Second): **Slechte metriek**, let niet op verschillen in ISA's tussen computers en verschillen in complexiteit van de instructies.

CPU Clocking: Operaties van digitale hardware lopen op een constante klok.

- Klokperiode: duratie van een cyclus
- Klok frequentie (rate): tikken per seconde
