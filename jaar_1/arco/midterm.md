# Midterm samenvatting

[Study guide](/studyguide.md)

## Belangrijke informatie

- Weging: 50%
- Datum: 22 november, 2024
- Stof: Lectures 1-6
- Toetswijze: digitaal

# Chapter 0: The basics of logic design

## Discrete en binaire waardes

Discrete binaire waardes zijn simpelweg gewoon waardes die uitgedrukt worden in waar (1) of niet waar (0).

## Logische operatoren

Logische operatoren worden gebruikt om logische expressies te maken. Voorbeelden van dergelijke operatoren zijn bijvoorbeeld AND, OR en NOT, die gebruikt worden om bepaalde condities uit te drukken.

|     |     | AND    | OR                | XOR   | NOT |
| --- | --- | ------ | ----------------- | ----- | --- |
| A   | B   | A & B | A &#124; B | A ^ B | ~A  |
| 0   | 0   | 0      | 0                 | 0     | 1   |
| 0   | 1   | 0      | 1                 | 1     | 1   |
| 1   | 0   | 0      | 1                 | 1     | 0   |
| 1   | 1   | 1      | 1                 | 0     | 0   |

## Logistiek ontwerp

### Logic gates
Logic gates zijn componenten binnen hardware die logistieke expressies evalueren om te kijken of deze waar zijn of niet. Logic gates kunnen gezien worden als de bouwblokken van moderne processors.

### Artihmetic Logic Unit
De arithmetic logic unit (ALU) is een hardware component dat rekenkundige en shift operaties uitvoert op binare getallen. De input van de ALU noem je een operandus en de output van een ALU is het resultaat van de berekening.

![ALU](/imgs/alu.gif)

Onderdelen van de ALU:
- Integer operand 1: De eerste integer input
- Integer operand B: De tweede integer input
- Input status: overige informatie die benodigd is voor het uitvoeren van operaties. Dit kan bijvoorbeeld een Carry-in bit zijn, die afkomstig is van de berekening van een vorige ALU.
- Output status: De status outputs zijn verschillende signalen die informatie geven over de uitkomst van de berekening van de ALU. Deze signalen kunnen bijvoorbeeld zijn:
    - Zero: Het resultaat is 0
    - Carry-out: De carry die afkomstig is van een rekenkundige operatie
    - Negative: Het resultaat van de operatie is negatief
    - Overflow: Het geproduceerde resultaat is te groot om in een register op te slaan.
- Opcode: De code voor de operatie die door de ALU moet worden uitgevoerd(bv. optelling, vermenigvuldiging, etc.)
- Integer resultaat: Het resultaat van de ALU


#### 1-bit ALU

#### 32-bit ALU

### Adder

#### 1-bit adder

#### 32-bit adder

### Multiplexer (MUX)

### Storing a value

### State machine

### Clocking for datapath elements

# Chapter 1: Computer abstractions and technology

## Computer programs

The layers of a program

- Application software
- System software
- Hardware

Levels of program code:

- High level language
- Assembly language
- Hardware representation

### Instruction Set Architectures (ISA)

- What are they and how can they be evaluated?

### Performance

#### Different measurements

- Algorithms
- Programming languages, compilers and architectures
- Processors and memorysystems
- I/O systems (including operating systems)

#### Throughput versus response time

#### Measuring a CPU

- CPU Time, CPI, MIPS, Amdahls Law

# Chapter 2: Instructions: Language of the Computer

## Instruction set

- MIPS

## The main principles of machine design

### Two key principles

### The design principles

## Instructions

### Arithmetic operations

### Registers versus memory

#### Registers

#### Memory

##### Load-store architecture

##### Byte adresses

##### Memory access and loading instructions

### Instruction fields

### Operands

#### Immediate operands

## Formats:

### I-format

### R-format

### J-format

#### Shift operations

### Control flow instructions

### Logical operations

## Fallacies

## Procedures and functions

### 6 steps of executing a procedure

#### Procedure call instructions

#### Non-leaf procedures

### Memory layout

### Register usage

# Chapter 3: Arithmetic for computers

## Understanding schematics

## Carry lookahead

## Sign extending

## MIPS ALU support

## Overflow

## Interruptions versus exceptions

## Binary multiplication

### Optimized multiplier

## Binary division

### Optimized divider

## Representing big and small numbers

### Floating point representation

#### Exception events in floating point

#### Floating point in adder hardware

# Chapter 4: The processor

## Fractional units of the MIPS CPU

- Adder
- ALU
- PC
- MUX
- Data memory
- Instruction memory
- Registers

## Datapath and control

## Clocking methodologies

## Instruction execution

## Finite state machines

- Moore FSM
- Mealy FSM

## Fetching instructions

## Decoding instructions

## Executing operations

### Executing R-format operations

### Executing load and store operations

### Executing branch operations

### Executing jump operations

## Creating a single datapath

### Single cycle design

> Cycle time is determined by length of longest path!
> Review the schematics from the slides!

### Instruction time (critical paths)

### Disadvantages and advantages

### Performance issues

## Pipeline cycle design

### Five stages of a load instruction

### A pipelined MIPS processor

### Single cycle versus pipeline

### Pipeline performance

### Pipelining the MIPS ISA

### Pipeline speedup

### Pipeline modifications

#### Control path modifications

#### Data path and control lines

### Function representation of the MIPS pipeline

### Other pipeline structure possibilities

#### ARM
