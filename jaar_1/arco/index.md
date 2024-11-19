# Deeltentamen 1 (22/11/24)
[Samenvatting](/midterm.md) [Study guide](/studyguide.md)


# ARCHITECTUUR EN COMPUTERORGANISATIE `Lecture 1`
`28 oktober, 2024`

## 'Onder je programma'
- Applicatiesoftware wordt geschreven in high-level languages (HLL)
- Systeemsoftware
    - Compiler: vertaalt HLL code naar machine code
    - Operating system: bevat services, zoals het handelen van I/O, geheugen en opslagbeheer, taken plannen en resources delen.
    Hardware: processor, geheugen, i/o controllers

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

# ARCHITECTUUR EN COMPUTERORGANISATIE `Lecture 2`
`1 november, 2024`

## Logic gates
Logic gates zijn bouwblokken binnen hardware die helpen met het reguleren van de logica. Logic gates zijn gemaakt van transistors.

> Lecture 2 is incompleet: de slides zijn erg duidelijk