# COLLEGE 1 - Programmeertalen, Paradigma's en Omgevingen - Samenvatting

## 1. Inleiding tot Programmeertalen
Programmeertalen zijn tools waarmee ontwikkelaars instructies kunnen geven aan computers om specifieke taken uit te voeren. Er bestaan veel verschillende programmeertalen, elk met hun eigen kenmerken en toepassingsgebieden.

### Belangrijke termen:
- **Programmeertaal**: Een formele taal die wordt gebruikt om instructies te schrijven die door een computer kunnen worden uitgevoerd.
- **Turing-compleet**: Een programmeertaal is Turing-compleet als het in staat is om elke berekenbare functie uit te voeren, mits voldoende tijd en geheugen beschikbaar zijn.

---

## 2. Programmeerparadigma's
Een programmeerparadigma is een stijl of manier van programmeren, gebaseerd op een set van concepten en principes die bepalen hoe programmeurs problemen oplossen en software ontwikkelen.

### Belangrijke termen:
- **Imperatief programmeren**: Programmeren door instructies te geven die de toestand van het geheugen veranderen. Voorbeelden zijn C en Python.
- **Declaratief programmeren**: Programmeren door het beschrijven van wat het programma moet bereiken, in plaats van hoe het moet worden bereikt. Voorbeelden zijn SQL (voor databases) en Haskell (functioneel programmeren).
- **Object-georiënteerd programmeren (OOP)**: Een paradigma waarbij programma's worden opgebouwd uit objecten die data en gedrag encapsuleren. Voorbeelden zijn Java en C++.
- **Functioneel programmeren**: Een paradigma waarbij programma's worden opgebouwd uit functies die wiskundige transformaties uitvoeren. Voorbeelden zijn Haskell en Erlang.

---

## 3. Imperatief vs. Declaratief Programmeren
### Imperatief Programmeren:
- **Kenmerken**: Gebruikt loops, conditionele statements en variabelen die verwijzen naar geheugenlocaties.
- **Voorbeeld**: Het berekenen van de faculteit van een getal in Python:
  ```python
  n = 10
  acc = 1
  for i in range(1, n+1):
      acc = acc * i
  print(acc)
  ```

### Declaratief Programmeren:
- **Kenmerken**: Gebruikt recursie en wiskundige functies om problemen op te lossen.
- **Voorbeeld**: Het berekenen van de faculteit van een getal in Haskell:
  ```haskell
  factorial 0 = 1
  factorial 1 = 1
  factorial n = n * factorial (n-1)
  main = print (factorial 10)
  ```

---

## 4. Programmeeromgevingen
Een programmeeromgeving is een set van tools die ontwikkelaars gebruiken om code te schrijven, te testen en uit te voeren. Dit kan variëren van eenvoudige teksteditors tot geavanceerde Integrated Development Environments (IDEs).

### Belangrijke termen:
- **IDE (Integrated Development Environment)**: Een softwaretoepassing die programmeurs voorziet van uitgebreide faciliteiten voor softwareontwikkeling, zoals code-editors, debuggers en compilers. Voorbeelden zijn Visual Studio Code en Eclipse.
- **REPL (Read-Eval-Print Loop)**: Een interactieve programmeeromgeving waar code direct wordt uitgevoerd en feedback wordt gegeven. Voorbeelden zijn Python's interactieve shell en Jupyter Notebooks.
- **Compiler**: Een tool die broncode vertaalt naar machinecode die direct door de computer kan worden uitgevoerd. Voorbeelden zijn GCC (voor C/C++) en javac (voor Java).
- **Interpreter**: Een tool die broncode regel voor regel uitvoert zonder deze eerst te compileren. Voorbeelden zijn Python en Ruby.

---

## 5. Programmeerconcepten en -technieken
### Tail Recursion:
- **Definitie**: Een recursieve functie waarbij de recursieve aanroep de laatste operatie is. Dit voorkomt stack overflow en is efficiënt in functionele programmeertalen.
- **Voorbeeld**: 
  ```erlang
  loop() ->
      do_something(),
      loop().
  ```

### State Management:
- **Definitie**: Het beheren van de toestand van een programma, vaak door middel van variabelen of data structuren.
- **Voorbeeld**: In Erlang wordt de staat vaak doorgegeven als een argument in recursieve functies.

---

## 6. Gedistribueerd Programmeren
Gedistribueerd programmeren houdt in dat een programma wordt uitgevoerd over meerdere machines of processen die met elkaar communiceren.

### Belangrijke termen:
- **RPC (Remote Procedure Call)**: Een mechanisme waarmee een programma een functie kan aanroepen op een andere machine.
- **Erlang**: Een programmeertaal die speciaal is ontworpen voor gedistribueerde en gelijktijdige systemen.

---

## 7. Programmeerparadigma's in de Praktijk
### Object-georiënteerd Programmeren (OOP):
- **Kenmerken**: Gebruikt klassen en objecten om data en gedrag te encapsuleren.
- **Voorbeeld**: 
  ```java
  class Student {
      int id;
      String name;
      int getID() {
          return id;
      }
  }
  ```

### Functioneel Programmeren:
- **Kenmerken**: Gebruikt functies als eerste-klas burgers en vermijdt het veranderen van staat.
- **Voorbeeld**: 
  ```haskell
  factorial 0 = 1
  factorial n = n * factorial (n-1)
  ```

---

## 8. Programmeeromgevingen en Tools
### Compilers vs. Interpreters:
- **Compiler**: Vertaalt broncode naar machinecode die later kan worden uitgevoerd. Geschikt voor snelle uitvoering en productieomgevingen.
- **Interpreter**: Voert broncode direct uit, wat een interactieve programmeerervaring biedt. Geschikt voor prototyping en testen.

### Voorbeelden van Programmeeromgevingen:
- **IDEs**: Visual Studio Code, Eclipse, IntelliJ IDEA.
- **REPLs**: Python's interactieve shell, Jupyter Notebooks.
- **Compilers**: GCC, javac.
- **Interpreters**: Python, Ruby.

---

## 9. Conclusie
- **Programmeertalen** zijn er in vele vormen en maten, elk geschikt voor specifieke taken en paradigma's.
- **Programmeerparadigma's** zoals imperatief, declaratief, object-georiënteerd en functioneel programmeren bieden verschillende manieren om problemen op te lossen.
- **Programmeeromgevingen** zoals IDEs, REPLs, compilers en interpreters ondersteunen ontwikkelaars bij het schrijven, testen en uitvoeren van code.
- **Gedistribueerd programmeren** is essentieel voor systemen die over meerdere machines of processen worden uitgevoerd.

---

# COLLEGE 2 - Programmeertalen: Python - Samenvatting

## Inhoudsopgave
1. **Inleiding tot Python**
2. **Programmeerparadigma's**
3. **Fundamentele Types en Operatoren**
4. **Type System: Dynamisch vs Statisch Typen**
5. **Control Flow: Voorwaarden en Loops**
6. **Compound Data Types: Lijsten, Tuples, Sets, Dictionaries**
7. **Strings en Bestandsmanipulatie**
8. **Foutafhandeling: Exceptions**
9. **Object-Oriented Programming (OOP)**
10. **Memory Model: Immutable vs Mutable Types**
11. **Recursie vs Iteratie**
12. **Higher Order Functions en Generators**
13. **Conclusie: Python vs C**

---

## 1. Inleiding tot Python

Python is een hoogwaardige programmeertaal die bekend staat om zijn eenvoud en leesbaarheid. Het werd ontwikkeld door **Guido van Rossum** en voor het eerst uitgebracht in 1991. Python ondersteunt meerdere programmeerparadigma's, waaronder **imperatief**, **object-georiënteerd**, en **functioneel programmeren**.

### Belangrijke Termen:
- **Python Zen**: Een verzameling principes die de filosofie van Python beschrijven, zoals "Er zou één—en bij voorkeur slechts één—duidelijke manier moeten zijn om het te doen."
- **Python 2 vs Python 3**: Python 2 werd uitgebracht in 2000 en Python 3 in 2008. Python 3 is de huidige standaard en wordt actief onderhouden.

---

## 2. Programmeerparadigma's

Een **programmeerparadigma** is een stijl of manier van programmeren. Python ondersteunt meerdere paradigma's:

- **Imperatief programmeren**: Beschrijft hoe een programma moet werken door middel van stapsgewijze instructies.
- **Declaratief programmeren**: Beschrijft wat het programma moet bereiken, zonder de exacte stappen te specificeren.
- **Object-georiënteerd programmeren (OOP)**: Organiseert code rond objecten die data en gedrag bevatten.
- **Functioneel programmeren**: Behandelt berekeningen als wiskundige functies en vermijdt veranderlijke data.

---

## 3. Fundamentele Types en Operatoren

Python heeft verschillende **fundamentele types**, zoals:
- **int**: Gehele getallen (bijv. `1`, `2`, `3`)
- **float**: Floating-point getallen (bijv. `1.2`, `3.14`)
- **str**: Strings (bijv. `"hello"`, `'world'`)
- **bool**: Boolean waarden (`True`, `False`)
- **NoneType**: Vertegenwoordigt de afwezigheid van een waarde (`None`)

### Operatoren:
- **Aritmetische operatoren**: `+`, `-`, `*`, `/`, `//` (integer deling), `**` (machtsverheffing)
- **Vergelijkingsoperatoren**: `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Logische operatoren**: `and`, `or`, `not`

---

## 4. Type System: Dynamisch vs Statisch Typen

Python gebruikt **dynamisch typen**, wat betekent dat het type van een variabele wordt bepaald tijdens runtime. Dit staat in contrast met **statisch typen**, waarbij het type van een variabele tijdens het compileren wordt bepaald.

### Belangrijke Termen:
- **Dynamisch typen**: Het type van een variabele kan tijdens runtime veranderen.
- **Statisch typen**: Het type van een variabele is vastgelegd tijdens het compileren.
- **Duck Typing**: "Als het eruit ziet als een eend, zwemt als een eend en kwaakt als een eend, dan is het waarschijnlijk een eend." Dit betekent dat het type van een object minder belangrijk is dan de methoden die het ondersteunt.

---

## 5. Control Flow: Voorwaarden en Loops

### Voorwaarden:
- **if-elif-else**: Gebruikt om beslissingen te nemen op basis van voorwaarden.
  ```python
  if a < 10:
      print("child")
  elif a < 18:
      print("teen")
  else:
      print("adult")
  ```

### Loops:
- **for-loop**: Herhaalt een blok code voor elk element in een iterable.
  ```python
  for i in range(5):
      print(i)
  ```
- **while-loop**: Herhaalt een blok code zolang een voorwaarde waar is.
  ```python
  i = 0
  while i < 5:
      print(i)
      i += 1
  ```

---

## 6. Compound Data Types: Lijsten, Tuples, Sets, Dictionaries

### Lijsten:
- **List**: Een geordende, veranderlijke verzameling van elementen.
  ```python
  my_list = [1, 2, 3]
  my_list.append(4)  # Voegt 4 toe aan de lijst
  ```

### Tuples:
- **Tuple**: Een geordende, onveranderlijke verzameling van elementen.
  ```python
  my_tuple = (1, 2, 3)
  ```

### Sets:
- **Set**: Een ongeordende verzameling van unieke elementen.
  ```python
  my_set = {1, 2, 3}
  my_set.add(4)  # Voegt 4 toe aan de set
  ```

### Dictionaries:
- **Dictionary**: Een ongeordende verzameling van sleutel-waardeparen.
  ```python
  my_dict = {'name': 'John', 'age': 30}
  print(my_dict['name'])  # Geeft 'John' terug
  ```

---

## 7. Strings en Bestandsmanipulatie

### Strings:
- **String**: Een reeks tekens.
  ```python
  s = "hello world"
  print(s.upper())  # Geeft "HELLO WORLD" terug
  ```

### Bestandsmanipulatie:
- **Bestanden lezen en schrijven**:
  ```python
  with open("file.txt", "r") as file:
      for line in file:
          print(line.strip())
  ```

---

## 8. Foutafhandeling: Exceptions

### Exceptions:
- **Exception**: Een fout die optreedt tijdens de uitvoering van een programma.
  ```python
  try:
      result = 10 / 0
  except ZeroDivisionError as e:
      print("Error:", e)
  ```

---

## 9. Object-Oriented Programming (OOP)

### Klassen en Objecten:
- **Klasse**: Een blauwdruk voor het maken van objecten.
  ```python
  class Person:
      def __init__(self, name, age):
          self.name = name
          self.age = age
  ```
- **Object**: Een instantie van een klasse.
  ```python
  person = Person("John", 30)
  ```

### Belangrijke Principes:
- **Abstraction**: Het verbergen van complexiteit door eenvoudige interfaces te bieden.
- **Encapsulation**: Het bundelen van data en methoden die op die data werken.
- **Inheritance**: Het overnemen van eigenschappen en gedrag van een bovenliggende klasse.
- **Polymorphism**: Het vermogen van verschillende klassen om dezelfde methode te implementeren.

---

## 10. Memory Model: Immutable vs Mutable Types

### Immutable Types:
- **Immutable**: Kan niet worden gewijzigd na creatie (bijv. `int`, `str`, `tuple`).
  ```python
  a = 1
  b = a
  a += 1
  print(b)  # Geeft 1 terug
  ```

### Mutable Types:
- **Mutable**: Kan worden gewijzigd na creatie (bijv. `list`, `set`, `dict`).
  ```python
  a = [1, 2, 3]
  b = a
  a.append(4)
  print(b)  # Geeft [1, 2, 3, 4] terug
  ```

---

## 11. Recursie vs Iteratie

### Recursie:
- **Recursie**: Een functie die zichzelf aanroept.
  ```python
  def factorial(n):
      if n == 1:
          return 1
      return n * factorial(n-1)
  ```

### Iteratie:
- **Iteratie**: Het herhalen van een blok code met behulp van loops.
  ```python
  def factorial(n):
      result = 1
      for i in range(2, n+1):
          result *= i
      return result
  ```

---

## 12. Higher Order Functions en Generators

### Higher Order Functions:
- **Higher Order Function**: Een functie die een andere functie als argument accepteert of een functie retourneert.
  ```python
  def apply(func, value):
      return func(value)
  ```

### Generators:
- **Generator**: Een functie die een reeks waarden produceert met behulp van `yield`.
  ```python
  def my_generator():
      yield 1
      yield 2
      yield 3
  ```

---

## 13. Conclusie: Python vs C

### Python:
- **Voordelen**: Eenvoudig te leren, hoog niveau van abstractie, dynamisch typen, garbage collection.
- **Nadelen**: Langzamer dan C, minder controle over geheugen.

### C:
- **Voordelen**: Snel, laag niveau van controle, efficiënt geheugengebruik.
- **Nadelen**: Complexer, statisch typen, handmatig geheugenbeheer.

# COLLEGE 3 - Programmeertalen: C++ - Samenvatting

## Inhoudsopgave
1. **Inleiding tot C++**
2. **Programmeerparadigma's**
3. **Design Doelstellingen**
4. **Geschiedenis van C++**
5. **Gebruik van C++**
6. **Types en Initialisatie**
7. **Memory Model: Waarden, Pointers en Referenties**
8. **Object-Oriented Programming (OOP)**
9. **RAII (Resource Acquisition Is Initialization)**
10. **Operator Overloading**
11. **Polymorfisme**
12. **Datastructuren en STL Containers**
13. **Iterators en Generators**
14. **STL Algorithms**
15. **Vergelijking met andere talen**
16. **Object-Oriented Paradigma en Design Patterns**
17. **Conclusie**

---

## 1. Inleiding tot C++

C++ is een krachtige programmeertaal die is ontworpen om de efficiëntie van C te combineren met de mogelijkheden voor programmastructuur van Simula. Het werd ontwikkeld door **Bjarne Stroustrup** en voor het eerst uitgebracht in 1979. C++ is een multi-paradigma taal, wat betekent dat het verschillende programmeerstijlen ondersteunt, zoals **imperatief**, **object-georiënteerd**, en **generiek programmeren**.

### Belangrijke Termen:
- **C++**: Een programmeertaal die zowel hoog- als laag-niveau functies biedt.
- **Bjarne Stroustrup**: De ontwikkelaar van C++.
- **Multi-paradigma**: Ondersteunt meerdere programmeerstijlen.

---

## 2. Programmeerparadigma's

Een **programmeerparadigma** is een stijl of manier van programmeren. C++ ondersteunt meerdere paradigma's:

- **Imperatief programmeren**: Beschrijft hoe een programma moet werken door middel van stapsgewijze instructies.
- **Object-georiënteerd programmeren (OOP)**: Organiseert code rond objecten die data en gedrag bevatten.
- **Functioneel programmeren**: Behandelt berekeningen als wiskundige functies en vermijdt veranderlijke data.

---

## 3. Design Doelstellingen

C++ is ontworpen met de volgende doelstellingen:
- **Abstraction**: Hoog-niveau programmeren met klassen.
- **High performance**: Geen hogere taal is sneller dan C++.
- **Zero-overhead**: Je betaalt alleen voor wat je gebruikt.
- **Multi-paradigm**: Ondersteunt verschillende programmeerstijlen.
- **Close to the metal**: Laag-niveau controle over hardware.
- **Type safety**: Typefouten worden gecontroleerd tijdens het compileren.

---

## 4. Geschiedenis van C++

C++ is geëvolueerd sinds zijn introductie in 1979. Belangrijke mijlpalen zijn:
- **1998**: Eerste gestandaardiseerde versie (C++98).
- **2011**: C++11 introduceerde `auto`, `constexpr`, lambda-functies, en meer.
- **2020**: C++20 introduceerde concepten en coroutines.

---

## 5. Gebruik van C++

C++ wordt gebruikt in:
- **Besturingssystemen**: Windows, Linux, Mac OS, Android.
- **Embedded systems**: Routers, camera's, auto's.
- **High-performance computing**: Gaming, wetenschappelijke berekeningen.

---

## 6. Types en Initialisatie

C++ ondersteunt verschillende fundamentele types:
- **bool**: Boolean (`true` of `false`).
- **int**: Gehele getallen.
- **float**: Floating-point getallen.
- **double**: Dubbele precisie floating-point getallen.
- **char**: Enkel karakter.
- **string**: Tekst.

### Initialisatie:
- **Uniforme initialisatie**: Gebruik `{}` om narrowing te voorkomen.
  ```cpp
  int i{2};  // voorkeur
  ```

---

## 7. Memory Model: Waarden, Pointers en Referenties

### Waarden:
- **Value**: Een kopie van de waarde wordt gemaakt.
  ```cpp
  int v = 1;
  int v2 = v;  // v2 is een kopie van v
  ```

### Pointers:
- **Pointer**: Een variabele die het geheugenadres van een andere variabele bevat.
  ```cpp
  int* p = &v;  // p bevat het adres van v
  ```

### Referenties:
- **Reference**: Een alias voor een bestaande variabele.
  ```cpp
  int& r = v;  // r is een referentie naar v
  ```

---

## 8. Object-Oriented Programming (OOP)

### Klassen en Objecten:
- **Klasse**: Een blauwdruk voor het maken van objecten.
  ```cpp
  class Date {
  public:
      int year, month, day;
      Date(int y, int m, int d) : year(y), month(m), day(d) {}
  };
  ```

### Belangrijke Principes:
- **Abstraction**: Verberg complexiteit door eenvoudige interfaces te bieden.
- **Encapsulation**: Bescherm de interne staat van een object.
- **Inheritance**: Overerf eigenschappen en gedrag van een bovenliggende klasse.

---

## 9. RAII (Resource Acquisition Is Initialization)

RAII is een techniek waarbij resources (zoals geheugen) automatisch worden vrijgegeven wanneer een object buiten scope gaat.

### Smart Pointers:
- **unique_ptr**: Een slimme pointer die exclusief eigenaarschap heeft.
  ```cpp
  std::unique_ptr<Some_Class> p1 = std::make_unique<Some_Class>();
  ```
- **shared_ptr**: Een slimme pointer die gedeeld eigenaarschap ondersteunt.
  ```cpp
  std::shared_ptr<Some_Class> p2 = std::make_shared<Some_Class>();
  ```

---

## 10. Operator Overloading

Operator overloading maakt het mogelijk om operatoren te definiëren voor gebruikersgedefinieerde types.

### Voorbeeld:
```cpp
Coord operator+(const Coord& c1, const Coord& c2) {
    return Coord(c1.x + c2.x, c1.y + c2.y);
}
```

---

## 11. Polymorfisme

Polymorfisme is het vermogen van een variabele, functie of object om meerdere vormen aan te nemen.

### Dynamisch Polymorfisme:
- **Virtual functions**: Laat toe dat functies worden overschreven in subklassen.
  ```cpp
  virtual void draw() const;
  ```

### Statisch Polymorfisme:
- **Templates**: Maak generieke code die tijdens het compileren wordt geïnstantieerd.
  ```cpp
  template <typename T>
  T max(T a, T b) { return a < b ? b : a; }
  ```

---

## 12. Datastructuren en STL Containers

De **Standard Template Library (STL)** biedt verschillende containers:
- **vector**: Dynamische array.
- **list**: Dubbele gelinkte lijst.
- **set**: Rood-zwart boom.
- **map**: Associatieve array.

### Voorbeeld:
```cpp
std::vector<int> v = {1, 2, 3};
v.push_back(4);  // Voegt 4 toe aan de vector
```

---

## 13. Iterators en Generators

### Iterators:
- **Iterator**: Een object dat over een container kan itereren.
  ```cpp
  for (auto it = v.begin(); it != v.end(); ++it) {
      std::cout << *it << " ";
  }
  ```

### Generators:
- **Generator**: Een functie die een reeks waarden produceert met `yield`.
  ```cpp
  auto generator = []() {
      for (int i = 0; i < 10; ++i) {
          co_yield i;
      }
  };
  ```

---

## 14. STL Algorithms

De STL biedt algoritmen voor veelvoorkomende taken:
- **sort**: Sorteer een container.
- **reverse**: Keer de volgorde van een container om.
- **accumulate**: Bereken de som van een container.

### Voorbeeld:
```cpp
std::sort(v.begin(), v.end());
```

---

## 15. Vergelijking met andere talen

### C++ vs C:
- **C++**: Biedt hogere abstractie, veiliger (RAII, smart pointers).
- **C**: Meer low-level controle, minder veilig.

### C++ vs Python:
- **C++**: Sneller, compile-time type checks.
- **Python**: Makkelijker te leren, dynamisch getypt.

---

## 16. Object-Oriented Paradigma en Design Patterns

### SOLID Principes:
- **Single Responsibility**: Een klasse heeft één verantwoordelijkheid.
- **Open/Closed**: Klassen moeten open zijn voor uitbreiding, maar gesloten voor modificatie.
- **Liskov Substitution**: Subklassen moeten vervangbaar zijn door hun basisklasse.
- **Interface Segregation**: Maak kleine, specifieke interfaces.
- **Dependency Inversion**: Hoge-niveau modules moeten niet afhankelijk zijn van lage-niveau modules.

### Design Patterns:
- **Adapter Pattern**: Past de interface van een klasse aan aan een andere interface.
- **Singleton Pattern**: Zorgt ervoor dat een klasse slechts één instantie heeft.

---

## 17. Conclusie

C++ is een krachtige en flexibele programmeertaal die zowel hoog- als laag-niveau functies biedt. Het ondersteunt meerdere programmeerparadigma's en biedt geavanceerde functies zoals RAII, templates en polymorfisme. C++ is geschikt voor een breed scala aan toepassingen, van embedded systems tot high-performance computing.
---

# COLLEGE 4 - Object Georiënteerd Programmeren - Samenvatting

## Inhoudsopgave
1. **Binding en Scope**
2. **Types**
3. **Objecten vs Klassen**
4. **Inheritance (Overerving)**
5. **Inclusion Polymorphism**
6. **Software Engineering Principes**
7. **Object-Oriented Programming in Python en C++**

---

## 1. Binding en Scope

### Aanduidingen en Toewijzingen (Bindings and Assignments)
- **Naam**: Een variabele die verwijst naar een stukje geheugen.
- **Referentie**: Een locatie in het geheugen waar data wordt opgeslagen.
- **Data**: De waarde die in het geheugen is opgeslagen.

In imperatieve en object-georiënteerde talen is een **naam** gebonden aan een enkele referentie. Meerdere namen kunnen gebonden zijn aan dezelfde referentie, waardoor ze mutaties in hetzelfde stukje geheugen kunnen zien en veroorzaken.

### Scoping Regels
- **Scope**: Het gebied in de code waar een variabele geldig is.
- **Statische Scoping**: De scope van een variabele wordt bepaald door de structuur van de code, niet door de uitvoering.
- **Dynamische Scoping**: De scope van een variabele wordt bepaald door de uitvoering van het programma.

### Voorbeeld van Scoping in C
```c
int x = 10;
int myf(int x) {
    int y = x;
    for (int i = 0; i <= 10; i++) { y = y + i; }
    cout << x;  // prints 0 (parameter x)
    cout << y;  // prints 55 (lokale variabele y)
    return y;
}
```

---

## 2. Types

### Wat is een Type?
- **Type**: Een verzameling van waarden, meestal met bijbehorende operatoren.
- **Primitieve Types**: Integers, floats, booleans, karakters, etc.
- **Samengestelde Types**: Structs, klassen, arrays, etc.

### Statische vs Dynamische Typering
- **Statische Typering**: Het type van een variabele wordt bepaald tijdens het compileren (bv. C++, Java).
- **Dynamische Typering**: Het type van een variabele wordt bepaald tijdens de uitvoering (bv. Python).

### Voorbeeld van Statische Typering in C++
```cpp
int x = 6;
int y = x >= 0 ? x : "error";  // Compile-time error: type mismatch
```

### Voorbeeld van Dynamische Typering in Python
```python
x = 6
y = x if x >= 0 else "error"  # Runtime type checking
```

---

## 3. Objecten vs Klassen

### Klassen en Objecten
- **Klasse**: Een blauwdruk voor het maken van objecten. Het definieert de structuur en het gedrag van objecten.
- **Object**: Een instantie van een klasse. Het bevat data (velden) en gedrag (methoden).

### Klasse vs Instantie-variabelen
- **Klasse-variabelen**: Variabelen die gedeeld worden door alle instanties van een klasse.
- **Instantie-variabelen**: Variabelen die uniek zijn voor elke instantie van een klasse.

### Voorbeeld in Python
```python
class Student:
    count = 0  # Klasse-variabele

    def __init__(self, name):
        self.name = name  # Instantie-variabele
        Student.count += 1
```

---

## 4. Inheritance (Overerving)

### Overerving
- **Overerving**: Een mechanisme waarbij een klasse (subklasse) velden en methoden van een andere klasse (superklasse) kan erven.
- **Multiple Inheritance**: Een klasse kan meerdere superklassen hebben (bv. Python).
- **Diamond Problem**: Een probleem dat optreedt bij multiple inheritance wanneer twee superklassen dezelfde methode hebben.

### Voorbeeld van Multiple Inheritance in Python
```python
class A:
    def method(self):
        print("A")

class B(A):
    def method(self):
        print("B")

class C(A):
    def method(self):
        print("C")

class D(B, C):
    pass

D().method()  # Prints "B"
```

---

## 5. Inclusion Polymorphism

### Inclusion Polymorphism
- **Inclusion Polymorphism**: Het vermogen van een variabele om objecten van verschillende types te bevatten, zolang die types een gemeenschappelijke superklasse hebben.
- **Heterogene Lijsten**: Een lijst die objecten van verschillende types kan bevatten.

### Voorbeeld in Java
```java
List<Object> mylist = new ArrayList<Object>();
mylist.add(1);
mylist.add(true);
mylist.add("hello world");
System.out.println(mylist);  // Prints [1, true, hello world]
```

---

## 6. Software Engineering Principes

### Encapsulation en Information Hiding
- **Encapsulation**: Het bundelen van data en methoden die op die data werken in een enkele eenheid (bv. een klasse).
- **Information Hiding**: Het verbergen van de interne details van een klasse, zodat alleen de noodzakelijke informatie zichtbaar is.

### Interfaces en Abstracte Methoden
- **Interface**: Een contract dat definieert welke methoden een klasse moet implementeren.
- **Abstracte Methode**: Een methode die alleen een signatuur heeft, maar geen implementatie.

### Voorbeeld van een Stack Interface in Java
```java
interface StackInterface<E> {
    E push(E e) throws StackOverflowException;
    E pop() throws StackUnderflowException;
    int size();
}
```

---

## 7. Object-Oriented Programming in Python en C++

### Python vs C++
- **Python**:
  - Dynamische typering.
  - Geen expliciete `private` of `public` keywords (gebruik naming conventions).
  - Ondersteunt multiple inheritance.
  - Automatische garbage collection.
  
- **C++**:
  - Statische typering.
  - Ondersteunt `private`, `public`, en `protected` keywords.
  - Ondersteunt constructor overloading en templates voor generics.
  - Geen automatische garbage collection (gebruik destructors).

### Voorbeeld van een Klasse in Python
```python
class MyClass:
    def __init__(self, value):
        self.value = value

    def display(self):
        print(self.value)
```

### Voorbeeld van een Klasse in C++
```cpp
class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {}
    void display() {
        std::cout << value << std::endl;
    }
};
```

---

### Conclusie

Object-georiënteerd programmeren is een krachtig paradigma dat helpt bij het organiseren en structureren van code. Het biedt mechanismen zoals encapsulation, inheritance en polymorphism om code herbruikbaar en onderhoudbaar te maken. Python en C++ zijn beide object-georiënteerde talen, maar ze verschillen in hun benadering van typering, geheugenbeheer en overerving.

---

# COLLEGE 5 - Declaratief Programmeren

## Inleiding
Declaratief programmeren is een programmeerparadigma waarbij programmeurs wiskundige objecten beschrijven met behulp van regels of vergelijkingen. In tegenstelling tot imperatief programmeren, waarbij de focus ligt op het beschrijven van hoe een programma moet werken, ligt de focus bij declaratief programmeren op wat het programma moet bereiken.

### Belangrijke concepten:
- **Expressies**: Beschrijven een berekening die een waarde oplevert.
- **Algebraische data representatie**: Het gebruik van algebraïsche datatypes om data te modelleren.
- **Patronen en patroonherkenning**: Gebruikt voor branching in declaratieve talen via gevallenanalyse.
- **Wiskundige variabelen**: Variabelen die gebonden zijn aan een waarde en niet aan een referentie.
- **Clausules en recursie**: Gebruikt om functies te definiëren in termen van zichzelf.

---

## Verhoudingen tussen programmeerparadigma's
Declaratief programmeren is een van de belangrijkste programmeerparadigma's, naast imperatief programmeren. Binnen het declaratieve paradigma vallen:
- **Functioneel programmeren**: Gebruikt functies met algebraïsche data als invoer en uitvoer.
- **Logisch programmeren**: Gebruikt relaties met axioma's, inferentieregels en te bewijzen stellingen.
- **Database talen**: Gebruikt tabellen, bevragingen en manipulatie van data.

---

## Declaratief programmeren in detail

### Wat wordt er beschreven?
- **Functies** (functioneel programmeren)
- **Relaties** (logisch programmeren)
- **De structuur van data** (database tabellen, webpagina's, JSON objecten, etc.)

### Declaratieve paradigma's:
- **Functioneel programmeren**: Functies met algebraïsche data als invoer en uitvoer.
- **Logisch programmeren**: Relaties met axioma's, inferentieregels en te bewijzen stellingen.
- **Database talen**: Tabellen, bevragingen en manipulatie.

### Variabelen
- **Wiskundige variabelen**: Variabelen zijn aanduidingen gebonden aan waardes. Ze zijn conceptueel gezien gebonden aan een waarde en niet aan een referentie.

### Recursie
- **Recursie**: In plaats van iteratie wordt recursie gebruikt, waarbij een functie gedefinieerd is in termen van zichzelf.

---

## Algebraïsche expressies
Een **expressie** bestaat uit een waarde, een variabele, of is een toepassing van een operator op nul, één of meerdere expressies, en beschrijft zo een berekening die een waarde oplevert.

Voorbeelden:
- `6 * 7`
- `(-3) <= 2`
- `6 * (5 + x)`
- `42`

### Soorten waardes:
- **Primitief/atomaire waardes**: In Haskell: `Char`, `Bool`, `Int`, `Integer`, `Float`, `Double`, etc.
- **Composiet/samengestelde waardes**: In Haskell: Tuples, Lists, en door de gebruiker geïntroduceerde algebraïsche datatypes.

---

## Algebraïsche data
Een **term** bestaat uit een waarde, of is een toepassing van een term constructor op nul, één of meerdere termen, en beschrijft zo een samengestelde waarde.

Voorbeeld:
```haskell
data BinIntTree = Node BinIntTree BinIntTree | Leaf Int
my_tree = Node (Node (Leaf 1) (Leaf 2)) (Leaf 3)
```

---

## Patronen en patroonherkenning
Een **patroon** bestaat uit een waarde, een variabele, of is een toepassing van een term constructor op nul, één of meerdere patronen, en beschrijft zo een verzameling van waardes.

- **Patroonherkenning**: Wordt gebruikt voor branching in declaratieve talen via gevallenanalyse.
- **Substituties**: Het resultaat van patroonherkenning is een verzameling substituties, waarbij variabelen gebonden worden aan waardes.

Voorbeeld:
```haskell
case my_tree of
  Node (Node (Leaf 1) x) (Leaf y) -> ...  -- nieuwe bindings voor x en y
  _ -> ...  -- geen nieuwe bindings
```

---

## Wiskundige variabelen
Declaratieve programmeertalen maken gebruik van **wiskundige variabelen**:
- **Gebonden aan een waarde**: Variabelen zijn gebonden aan een waarde en niet aan een referentie.
- **Nieuwe scope**: Bij patroonherkenning en definities (bijv. `let`) wordt een nieuwe scope gecreëerd.
- **Immutable data**: Operaties op datastructuren maken kopieën, geen aanpassingen.

Voorbeeld:
```haskell
let x = 42
in let my_inc x = x + 1
in let y = my_inc x
in let x = my_inc y
in (x, y)
```

---

## Statische vs Dynamische typering
- **Statische typering**: Types worden gecontroleerd tijdens het compileren (bijv. Haskell).
- **Dynamische typering**: Types worden gecontroleerd tijdens runtime (bijv. Erlang).

---

## Clausules en recursie
### Haskell – functioneel programmeren
```haskell
sum_tree :: BinIntTree -> Int
sum_tree (Leaf i) = i
sum_tree (Node l r) = sum_tree l + sum_tree r
```

### Prolog – logisch programmeren
```prolog
sum_tree(leaf(I), I).
sum_tree(node(L,R), Z) :- sum_tree(L,X), sum_tree(R,Y), Z is X + Y.
```

- **Recursie**: Beide definities zijn recursief.
- **Lineaire patronen**: In Haskell mag een variabele maar één keer voorkomen in een patroon.

---

## Conclusie
Declaratief programmeren is een krachtig paradigma dat zich richt op het beschrijven van wat een programma moet bereiken, in plaats van hoe het moet werken. Het omvat functioneel programmeren, logisch programmeren en database talen, en maakt gebruik van concepten zoals expressies, algebraïsche data, patronen, wiskundige variabelen en recursie.

---

# COLLEGE 6 - Haskell: Een functioneel programmeerparadigma

## Inleiding
Haskell is een functionele programmeertaal, genoemd naar de wiskundige Haskell Curry. Het is een van de belangrijkste voorbeelden van het functionele programmeerparadigma. Haskell is puur, lui, sterk en statisch getypeerd, en maakt gebruik van spaties/indentatie in plaats van accolades.

### Belangrijke kenmerken:
- **Functioneel**: Programma's worden geschreven door functies te definiëren en te combineren.
- **Puurlijk**: Geen bijwerkingen (side-effects).
- **Lui (lazy)**: Uitdrukkingen worden alleen geëvalueerd als dat nodig is (call-by-need).
- **Sterk en statisch getypeerd**: Types worden gecontroleerd tijdens het compileren.
- **Spatie/indentatie gevoelig**: Geen accolades nodig.

---

## Functioneel Programmeren

### Terminologie
- **Functies**: Opereren op data/waarden en kunnen worden gecombineerd.
- **Clausules**: Functiedefinities bestaan uit clausules die gebruik maken van patroonherkenning en gevallenanalyse.
- **Expressies**: Beschrijven een berekening die een waarde oplevert.

Voorbeeld:
```haskell
data BinIntTree = Node BinIntTree BinIntTree | Leaf Int

sum_tree :: BinIntTree -> Int
sum_tree (Leaf i) = i
sum_tree (Node l r) = sum_tree l + sum_tree r
```

---

## Eerste stappen in Haskell

### Eenvoudige expressies
Haskell ondersteunt eenvoudige wiskundige en logische expressies. Voorbeelden:
```haskell
5 + 6  -- 11
3.5 * 3  -- 10.5
True && False  -- False
```

### Variabelen
Haskell-variabelen zijn **wiskundige variabelen**; ze zijn niet mutabel (onveranderlijk), maar kunnen opnieuw gebonden worden. Dit wordt **shadowing** genoemd.

Voorbeeld:
```haskell
let foo = 3
let foo = 6  -- foo is nu 6
```

---

## Modules
Haskell-code wordt georganiseerd in modules. Een module bevat functies en variabelen die kunnen worden geïmporteerd in andere modules.

Voorbeeld:
```haskell
module FooModule where
bar = 4
```

---

## Functies

### Prefix en infix functies
- **Infix functies**: Bijvoorbeeld `+`, `-`, `*`, `/`, `&&`, `||`.
- **Prefix functies**: Meestal door de gebruiker gedefinieerde functies, zoals `add`.

Voorbeeld:
```haskell
add :: Integer -> Integer -> Integer
add a b = a + b
```

### Anonieme functies
Anonieme functies worden gedefinieerd met lambda-abstracties.

Voorbeeld:
```haskell
(\x -> x + 1) 1  -- 2
```

---

## Lijsten en tuples

### Lijsten
- **Lege lijst**: `[]`
- **Lijst met elementen**: `[1, 2, 3]`
- **Concatenatie**: `[1, 2] ++ [3, 4]` geeft `[1, 2, 3, 4]`
- **Lengte**: `length [1, 2, 3]` geeft `3`

### Tuples
Tuples kunnen meerdere waarden van verschillende types bevatten, maar hebben een vaste lengte.

Voorbeeld:
```haskell
(1, 'a')  -- Tuple met een Integer en een Char
```

---

## Patroonherkenning
Patroonherkenning wordt gebruikt om waarden te decomponeren en te matchen met patronen.

Voorbeeld:
```haskell
my_length :: [a] -> Integer
my_length [] = 0
my_length (x:xs) = 1 + my_length xs
```

---

## Recursie en hogere-orde functies

### Recursie
Recursie is een belangrijk concept in functioneel programmeren. Een functie kan zichzelf aanroepen om een probleem op te lossen.

Voorbeeld:
```haskell
my_reverse :: [a] -> [a]
my_reverse [] = []
my_reverse (x:xs) = my_reverse xs ++ [x]
```

### Hogere-orde functies
Hogere-orde functies zijn functies die andere functies als argumenten accepteren of als resultaat teruggeven.

Voorbeeld:
```haskell
map :: (a -> b) -> [a] -> [b]
map f (x:xs) = f x : map f xs
```

---

## Lazy evaluation en oneindige lijsten
Haskell is lui (lazy), wat betekent dat expressies alleen worden geëvalueerd als dat nodig is. Dit maakt het mogelijk om oneindige lijsten te definiëren.

Voorbeeld:
```haskell
take 5 [1..]  -- [1, 2, 3, 4, 5]
```

---

## Belangrijke Prelude-functies

### Filter
Verwijdert elementen uit een lijst die niet voldoen aan een bepaalde voorwaarde.

Voorbeeld:
```haskell
filter odd [1, 2, 3, 4, 5]  -- [1, 3, 5]
```

### Map
Past een functie toe op elk element van een lijst.

Voorbeeld:
```haskell
map (\x -> x + 3) [1, 2, 3]  -- [4, 5, 6]
```

### Foldr en Foldl
Reduceer een lijst tot een enkele waarde door een functie toe te passen.

Voorbeeld:
```haskell
foldr (+) 0 [1, 2, 3]  -- 6
```

---

## Tips en trucs

### GHCi
- **Type informatie**: Gebruik `:t` om het type van een functie of variabele te zien.
- **Hoogle**: Een zoekmachine voor Haskell-functies.

### Debuggen
Gebruik `Debug.Trace` om waarden te traceren tijdens de uitvoering.

---

## Conclusie
Haskell is een krachtige functionele programmeertaal die zich richt op het definiëren en combineren van functies. Het maakt gebruik van concepten zoals lazy evaluation, patroonherkenning, en hogere-orde functies om modulaire en efficiënte programma's te schrijven.

---

# COLLEGE 7 - Haskell: Geavanceerde concepten

## Inleiding
Haskell is een functionele programmeertaal die bekend staat om zijn sterke, statische typering en het gebruik van geavanceerde concepten zoals typeclasses, monaden en functors. In dit document behandelen we deze geavanceerde onderwerpen stap voor stap.

---

## Types in Haskell

### Type signatures
In Haskell kunnen we type signatures toevoegen aan functies om aan te geven wat het type van de functie is. Dit is optioneel, maar wordt sterk aanbevolen.

Voorbeeld:
```haskell
fac :: Integer -> Integer
fac 0 = 1
fac n = n * fac (n-1)
```

### Type aliases
Type aliases zijn alternatieve namen voor complexe types. Ze maken de code leesbaarder.

Voorbeeld:
```haskell
type Row = Int
type Column = Int
type Value = Int
type Grid = [[Value]]
```

---

## Datatype definities

### Enumeraties
We kunnen nieuwe datatypes definiëren met behulp van enumeraties.

Voorbeeld:
```haskell
data Direction = North | East | South | West
```

### Constructors met argumenten
Datatypes kunnen ook constructors hebben die argumenten accepteren.

Voorbeeld:
```haskell
data BinIntTree = Leaf Int | Node BinIntTree BinIntTree
```

### Type argumenten
We kunnen datatypes parametriseren met typevariabelen.

Voorbeeld:
```haskell
data BinTree a = Leaf a | Node (BinTree a) (BinTree a)
```

---

## Type inferencing
Haskell heeft een geavanceerd type-inferentiesysteem dat de types van variabelen en functies kan afleiden uit hun gebruik.

Voorbeeld:
```haskell
findNorth :: [Direction] -> Bool
findNorth = any (==North)
```

---

## Typeclasses
Typeclasses zijn een manier om overloading in Haskell te introduceren. Ze definiëren een set van functies die moeten worden geïmplementeerd voor een type om lid te worden van de typeclass.

### Voorbeelden van typeclasses:
- **Eq**: Types die ondersteuning bieden voor `==` en `/=`.
- **Ord**: Types waarvan de waarden kunnen worden geordend.
- **Show**: Types waarvan de waarden kunnen worden weergegeven als strings.
- **Read**: Types waarvan de waarden kunnen worden gelezen uit strings.
- **Enum**: Types waarvan de waarden kunnen worden geënumereerd.
- **Num**: Numerieke types die ondersteuning bieden voor `+`, `*`, etc.

Voorbeeld:
```haskell
instance Eq Direction where
    d1 == d2 = case (d1, d2) of
        (North, North) -> True
        (East, East) -> True
        (South, South) -> True
        (West, West) -> True
        _ -> False
```

---

## Polymorfisme
Polymorfisme in Haskell kan worden onderverdeeld in twee soorten:
- **Parametrisch polymorfisme**: Functies die kunnen worden toegepast op waarden van verschillende types.
- **Ad-hoc polymorfisme**: Functies die kunnen worden toegepast op waarden met overbelaste operaties.

Voorbeeld:
```haskell
depth :: BinTree a -> Int
depth tree = case tree of
    Leaf _ -> 1
    Node t1 t2 -> 1 + max (depth t1) (depth t2)
```

---

## Input/Output (IO)
Haskell is een pure functionele taal, wat betekent dat functies geen bijwerkingen hebben. Om toch interactie met de buitenwereld mogelijk te maken, gebruikt Haskell het `IO`-type.

### Voorbeelden van IO-functies:
- `putStrLn :: String -> IO ()`: Print een string naar de standaarduitvoer.
- `readFile :: FilePath -> IO String`: Leest een bestand en retourneert de inhoud als een string.
- `getArgs :: IO [String]`: Retourneert de command-line argumenten van het programma.

Voorbeeld:
```haskell
main :: IO ()
main = do
    args <- getArgs
    case args of
        [] -> putStrLn "Please provide a file name"
        (file:_) -> do
            content <- readFile file
            putStrLn content
```

---

## Functors
Functors zijn containers die kunnen worden gemapt. Ze zijn lid van de typeclass `Functor`.

### Definitie:
```haskell
class Functor c where
    fmap :: (a -> b) -> c a -> c b
```

Voorbeeld:
```haskell
instance Functor BinTree where
    fmap f (Leaf a) = Leaf (f a)
    fmap f (Node t1 t2) = Node (fmap f t1) (fmap f t2)
```

---

## Applicative Functors
Applicative functors zijn functors die de resultaten van berekeningen kunnen bevatten. Ze zijn lid van de typeclass `Applicative`.

### Definitie:
```haskell
class Functor c => Applicative c where
    pure :: a -> c a
    (<*>) :: c (a -> b) -> c a -> c b
```

Voorbeeld:
```haskell
instance Applicative Maybe where
    pure = Just
    p <*> q = case p of
        Nothing -> Nothing
        Just f -> case q of
            Nothing -> Nothing
            Just a -> Just (f a)
```

---

## Monads
Monaden zijn applicative functors die berekeningen met effecten kunnen bevatten. Ze zijn lid van de typeclass `Monad`.

### Definitie:
```haskell
class Applicative m => Monad m where
    return :: a -> m a
    (>>=) :: m a -> (a -> m b) -> m b
```

Voorbeeld:
```haskell
instance Monad Maybe where
    return = Just
    ma >>= f = case ma of
        Just a -> f a
        Nothing -> Nothing
```

---

## State Monad
De State Monad wordt gebruikt om berekeningen met een toestand (state) te modelleren.

### Definitie:
```haskell
data State s a = State (s -> (s, a))

runState :: State s a -> s -> (s, a)
runState (State comp) = comp

instance Monad (State s) where
    return a = State $ \s -> (s, a)
    m >>= f = State $ \s -> case runState m s of
        (s', a) -> runState (f a) s'
```

Voorbeeld:
```haskell
type Seed = Int
type SeedGen = State Seed

fresh_seed :: SeedGen Seed
fresh_seed = modify (+1) >> get
```

---

## Do-notatie
De `do`-notatie maakt het mogelijk om monadische berekeningen op een imperatieve manier te schrijven.

Voorbeeld:
```haskell
maybeHeadEven :: [Int] -> Maybe Int
maybeHeadEven xs = do
    i <- safeHead xs
    maybeEven i
```

---

## Conclusie
Haskell biedt een krachtige set van geavanceerde concepten, waaronder typeclasses, functors, applicative functors, monaden en de State Monad. Deze concepten maken het mogelijk om complexe, modulaire en efficiënte programma's te schrijven.

---

# COLLEGE 8 - Functioneel Programmeren

## Inleiding
Functioneel programmeren is een programmeerparadigma waarbij programma's worden geschreven door functies te definiëren en te combineren. In tegenstelling tot imperatief programmeren, waarbij de focus ligt op het beschrijven van hoe een programma moet werken, ligt de focus bij functioneel programmeren op wat het programma moet bereiken.

### Belangrijke concepten:
- **Functies**: Opereren op data/waarden en kunnen worden gecombineerd.
- **Zuiverheid**: Functies hebben geen neveneffecten (side-effects).
- **Recursie**: In plaats van iteratie wordt recursie gebruikt.
- **Lazy evaluation**: Expressies worden alleen geëvalueerd als dat nodig is.

---

## Haskell: Belangrijke aspecten

### Syntax
- **Kleine kerntaal**: Haskell heeft relatief weinig constructies, en veel constructies zijn ‘syntactic sugar’.
- **Anonieme functies**: Haskell gebruikt lambda-abstracties voor anonieme functies, bijvoorbeeld `(\x y -> x + y)`.

### Semantiek
- **Lazy evaluation**: Haskell maakt gebruik van call-by-need, wat betekent dat expressies alleen worden geëvalueerd als dat nodig is.
- **Hogere-orde functies**: Functies kunnen andere functies als argumenten accepteren of als resultaat teruggeven.
- **Statische en sterke typering**: Types worden gecontroleerd tijdens het compileren, en er is een strikte scheiding tussen types.

### Pragmatiek
- **Idiomen**: Haskell moedigt pointfree programming aan, waarbij functies worden gedefinieerd zonder expliciete argumenten.
- **Praktisch gebruik**: Haskell wordt gebruikt in academisch onderzoek, financiële instellingen, en grote organisaties zoals Facebook en Google.

---

## Procedures tegenover Functies

### Onzuivere expressies
In imperatieve talen zoals C en OCaml kunnen expressies neveneffecten hebben. Bijvoorbeeld:
```c
x++;  // Verhoogt de waarde van x met 1
```
In Haskell worden neveneffecten geïsoleerd in het `IO`-type, waardoor functies zuiver blijven.

### Referenties in OCaml
OCaml ondersteunt referenties, die vergelijkbaar zijn met imperatieve variabelen. Bijvoorbeeld:
```ocaml
let x = ref 0 in x := !x + 1;;
```
In Haskell kan iets vergelijkbaars worden gedaan met `IORef`, maar dit wordt over het algemeen vermeden.

---

## Parameter-passing strategieën

### Call-by-value
- **Strict**: Argumenten worden geëvalueerd voordat ze aan de functie worden doorgegeven.
- **Voorbeeld**: OCaml gebruikt call-by-value.

### Call-by-reference
- **Muteerbaar**: Functies ontvangen pointers naar geheugenlocaties en kunnen deze aanpassen.
- **Voorbeeld**: C gebruikt call-by-reference voor pointers.

### Call-by-name
- **Non-strict**: Argumenten worden niet geëvalueerd tot ze nodig zijn.
- **Voorbeeld**: Hypothetische functionele talen kunnen call-by-name gebruiken.

### Call-by-need
- **Lazy**: Argumenten worden geëvalueerd als ze nodig zijn, en het resultaat wordt gecached.
- **Voorbeeld**: Haskell gebruikt call-by-need.

---

## Lazy Evaluation

### Weak Head Normal Form (WHNF)
Een expressie is in WHNF wanneer deze bestaat uit:
- Een atomaire waarde (bijv. `1`, `True`).
- Een functie/lambda-abstractie (bijv. `\x -> x + 1`).
- Een partieel toegepaste ingebouwde functie (bijv. `(+2)`).
- Een constructor (bijv. `Leaf 1` of `Node expr1 expr2`).

### Lazy patroonherkenning
In Haskell wordt een expressie alleen geëvalueerd tot WHNF tijdens patroonherkenning. Dit betekent dat de argumenten van een constructor niet volledig hoeven te worden geëvalueerd.

Voorbeeld:
```haskell
depth :: BinIntTree -> Int
depth tree = case tree of
    Node t1 t2 -> 1 + max (depth t1) (depth t2)
    Leaf _ -> 1
```
Hier wordt `tree` alleen geëvalueerd tot het een `Node` of `Leaf` is, zonder de onderliggende expressies volledig te evalueren.

---

## Conclusie
Functioneel programmeren in Haskell biedt een krachtige set van concepten, waaronder zuiverheid, hogere-orde functies, en lazy evaluation. Deze concepten maken het mogelijk om modulaire, efficiënte en correcte programma's te schrijven. Door het begrijpen van parameter-passing strategieën en lazy evaluation kun je beter begrijpen hoe Haskell programma's worden geëvalueerd en geoptimaliseerd.

--- 
# COLLEGE 9 -  Distributed and Concurrent Programming

## Inleiding
Distributed en concurrent programming zijn belangrijke concepten in de informatica, vooral bij het bouwen van systemen die meerdere taken tegelijkertijd kunnen uitvoeren of die over meerdere machines zijn verdeeld. In dit document behandelen we de belangrijkste concepten en paradigma's, met voorbeelden in Erlang en Go.

---

## Concurrency versus Parallelism

### Concurrency
- **Definitie**: Concurrency verwijst naar de uitvoering van meerdere taken die elkaar overlappen in tijd. Het gaat niet noodzakelijk om het gelijktijdig uitvoeren van taken, maar om het beheren van meerdere taken die mogelijk tegelijkertijd actief zijn.
- **Voorbeeld**: In Erlang worden taken uitgevoerd door processen die onafhankelijk van elkaar werken, maar niet noodzakelijk tegelijkertijd.

### Parallelism
- **Definitie**: Parallelism verwijst naar het daadwerkelijk gelijktijdig uitvoeren van meerdere taken, vaak op meerdere processors of cores.
- **Voorbeeld**: In Erlang kunnen processen parallel worden uitgevoerd op verschillende CPU-cores, wat leidt tot een snelheidswinst.

---

## Message-Passing Concurrency (Erlang)

### Bank Example in Erlang
In Erlang communiceren processen via berichten. Hier is een voorbeeld van een bank die berichten ontvangt van een `setter` en een `adder`:

```erlang
main() -> 
    Bank = spawn(fun() -> bank(20) end),
    spawn(fun() -> setter(Bank) end),
    spawn(fun() -> adder(Bank) end).

bank(Balance) -> 
    receive
        {get, Pid} -> Pid ! Balance, bank(Balance);
        {set, NewBalance} -> bank(NewBalance)
    end.

setter(Bank) -> Bank ! {set, 60}.

adder(Bank) -> 
    Bank ! {get, self()},
    receive Balance -> 
        Bank ! {set, Balance + 10}
    end.
```

### Belangrijke concepten:
- **Non-determinisme**: De volgorde van berichten is niet vastgelegd, wat kan leiden tot verschillende uitkomsten.
- **Data races**: Wanneer niet-determinisme ongewenst is, spreken we van een data race. Dit kan worden vermeden door processen beter te synchroniseren.

---

## Shared Memory Concurrency (Go)

### Bank Example in Go
In Go kunnen goroutines (lichtgewicht processen) communiceren via gedeeld geheugen. Hier is een voorbeeld van een bank die een gedeelde variabele `balance` gebruikt:

```go
var balance int = 20

func main() {
    go setter()
    go adder()
}

func setter() {
    balance = 60
}

func adder() {
    balance += 10
}
```

### Belangrijke concepten:
- **Gedeeld geheugen**: Goroutines kunnen toegang krijgen tot gedeelde variabelen, wat leidt tot complexiteit en potentiële data races.
- **Synchronisatieprimitieven**: Om data races te voorkomen, kunnen synchronisatieprimitieven zoals mutexen worden gebruikt.

---

## Dining Philosophers Problem

### Probleemstelling
Het **dining philosophers problem** is een klassiek probleem in de concurrent programming. Het gaat om een groep filosofen die rond een tafel zitten en afwisselend eten en denken. Om te eten heeft elke filosoof twee vorken nodig, maar elke vork wordt gedeeld met een buurman.

### Uitdagingen
- **Deadlock**: Als alle filosofen tegelijkertijd een vork pakken, kunnen ze vastlopen.
- **Starvation**: Sommige filosofen kunnen oneindig lang wachten om te eten.

### Oplossing in Go
Een mogelijke oplossing is het gebruik van mutexen om te garanderen dat slechts één filosoof tegelijk een vork kan pakken:

```go
func philosopher(left, right *Fork) {
    for {
        think()
        left.pick_up()
        right.pick_up()
        eat()
        left.put_down()
        right.put_down()
    }
}

func (f *Fork) pick_up() {
    f.mutex.Lock()
}

func (f *Fork) put_down() {
    f.mutex.Unlock()
}
```

---

## Key Concept Summary

### Concurrency vs. Parallelism
- **Concurrency**: Het beheren van meerdere taken die elkaar overlappen in tijd.
- **Parallelism**: Het gelijktijdig uitvoeren van meerdere taken.

### Message-Passing Paradigma (Erlang)
- **Sterke punten**: Expliciete communicatie, goed voor gedistribueerde systemen.
- **Zwakke punten**: Isolatie kan beperkend zijn.

### Shared Memory Paradigma (Go)
- **Sterke punten**: Expressief, geschikt voor complexe synchronisatie.
- **Zwakke punten**: Complexiteit en verborgen data races.

### Synchronisatieprimitieven
- **Mutexen**: Gebruikt om toegang tot gedeelde bronnen te controleren en data races te voorkomen.
- **Deadlock en Starvation**: Uitdagingen bij het synchroniseren van processen.

---

# COLLEGE 10 - Gedistribueerd Programmeren en Functioneel Programmeren in Erlang

## Inleiding
Erlang is een programmeertaal die zowel functioneel als gedistribueerd programmeren ondersteunt. Het combineert de kracht van functioneel programmeren (met functies en algebraïsche data) met de mogelijkheid om gedistribueerde systemen te bouwen (met processen die parallel werken en communiceren via berichten).

---

## **Geschiedenis en Kenmerken van Erlang**  
### Geschiedenis:  
- **1984**: Oprichting Ericsson Computer Science Lab.  
- **1991**: Eerste snelle implementatie van Erlang.  
- **1998**: Erlang wordt open source.  
- **Jaren 2000**: Comeback in gedistribueerde systemen en internettoepassingen.  

### Belangrijke termen:  
- **Functioneel programmeren**: Programmeerstijl waarbij functies wiskundige transformaties uitvoeren, zonder zij-effecten.  
- **Dynamisch getypeerd**: Typen worden tijdens runtime bepaald, geen expliciete type-aanduidingen nodig.  
- **Concurrentie**: Gelijktijdige uitvoering van processen via lichtgewicht processen (geen OS-threads).  
- **Hot Code Loading**: Mogelijkheid om code tijdens runtime te updaten zonder het systeem te stoppen.  

---

## **Basisconcepten en Syntax**  
### Modules en Functies:  
- **Module**: Een bestand met Erlang-code. Begint met `-module(naam).`.  
- **Exporteer functies**: `-export([functie/arity]).` (bijv. `-export([start/0]).`).  
- **Functies**: Gedefinieerd met patronen en guards.  
  ```erlang
  fac(0) -> 1;
  fac(N) -> N * fac(N-1).
  ```  

### Variabelen en Datatypes:  
- **Variabelen**: Beginnen met een hoofdletter, eenmalig gebonden (immutable).  
- **Atomen**: Literals zoals `hello`, `'Maandag'`.  
- **Tuples**: Vaste reeks elementen, bijv. `{naam, 25}`.  
- **Lijsten**: Dynamische reeksen, bijv. `[1, 2, 3]`.  
- **Binaries**: Geoptimaliseerd voor gegevensopslag, bijv. `<<72, 101, 108, 108, 111>>` (="Hallo").  

### Pattern Matching:  
- **Voorbeeld**:  
  ```erlang
  [H | T] = [1, 2, 3],  % H = 1, T = [2, 3]
  {X, Y} = {5, 10}.      % X = 5, Y = 10
  ```  

---

## **Controlestructuren**  
### Guards en Case:  
- **Guards**: Voorwaarden in functiekoppen of `if`/`case`.  
  ```erlang
  max(X, Y) when X > Y -> X;
  max(_, Y) -> Y.
  ```  
- **Case**:  
  ```erlang
  case Kleur of
    rood -> stop();
    groen -> start();
    _ -> wacht()
  end.
  ```  

### Recursie i.p.v. Loops:  
- **Geen `for`/`while`**: Gebruik recursie of lijstcomprehensies.  
  ```erlang
  loop(0) -> ok;
  loop(N) -> io:format("~p~n", [N]), loop(N-1).
  ```  

---

## **Lijstmanipulatie**  
### Lijstcomprehensies:  
- **Voorbeeld**: Verdubbel elementen in een lijst.  
  ```erlang
  Verdubbeld = [2 * X || X <- [1, 2, 3]].  % Resultaat: [2, 4, 6]
  ```  
- **Filters**:  
  ```erlang
  Oneven = [X || X <- Lijst, X rem 2 =/= 0].
  ```  

### Standaardbibliotheek:  
- **Functies**: `lists:map`, `lists:filter`, `lists:foldl`.  
  ```erlang
  lists:map(fun(X) -> X * 2 end, [1, 2, 3]).  % [2, 4, 6]
  ```  

---

##  **Foutenafhandeling**  
### Filosofie: *"Let it crash"*  
- **Crash-isolatie**: Een gecrasht proces beïnvloedt andere processen niet.  
- **Voorbeeld**:  
  ```erlang
  case file:open("bestand.txt", [read]) of
    {ok, Fd} -> ...;
    {error, Reason} -> ...
  end.
  ```  

---

## **Praktische Tips en Veelgemaakte Fouten**  
### Veelvoorkomende Fouten:  
- **Shadowing**: Variabelen in anonieme functies overschaduwen buitenste variabelen.  
  ```erlang
  foo(X, L) -> lists:map(fun(A) -> 2 * A end, L).  % Goed: gebruik `A` i.p.v. `X`.
  ```  
- **Syntax**: Vergeet geen punten (` . `) of komma's (` , `).  

### Shell-commando's:  
- `erl`: Start de Erlang-shell.  
- `c(module)`: Compileer een module.  
- `q().`: Sluit de shell af.  

---

## **Geavanceerde Onderwerpen (Preview)**  
- **Distributed Erlang**: Communicatie tussen nodes via RPC en cookies.  
- **OTP (Open Telecom Platform)**: Bibliotheken voor robuuste systemen (gen_server, supervisors).  
- **Hot Code Swapping**: Updates uitvoeren zonder downtime.  

---


## Functioneel Programmeren in Erlang

### Functies definiëren
In Erlang worden functies gedefinieerd met behulp van patroonherkenning, gevalsanalyse en recursie. Functies worden georganiseerd in modules, en elke functie heeft een naam en een ariteit (aantal parameters).

Voorbeeld:
```erlang
-module(myfactorial).  % Definieer een module genaamd myfactorial
-export([fact/1]).     % Exporteer de functie fact/1

fact(N) when N > 0 -> N * fact(N-1);  % Recursief geval
fact(0) -> 1.                          % Basisgeval
```

### Belangrijke kenmerken:
- **Variabelen**: Variabelen beginnen met een hoofdletter (bijv. `N`).
- **Guards**: Gebruikt `when` om voorwaarden toe te voegen aan functieclausules.
- **Dynamische typering**: Erlang heeft geen type signatures; types worden tijdens runtime bepaald.
- **Modules**: Modules worden gebruikt voor data-abstractie en encapsulatie.

---

## Atomen als term constructoren

### Atomen
Een **atoom** is een primitieve waarde in Erlang, vergelijkbaar met een constante. Atomen worden geschreven met kleine letters of tussen enkele quotes (bijv. `leaf`, `binnode`, `'alice'`).

- **Gebruik**: Atomen worden vaak gebruikt in combinatie met tuples of records voor algebraïsche data-representatie.
- **Voorbeeld**:
  ```erlang
  -module(mysum).
  -export([sum/1, test/0]).

  sum([leaf, I]) -> I;  % Basisgeval
  sum([binnode, L, R]) -> sum(L) + sum(R).  % Recursief geval

  test() -> sum([binnode, [binnode, [leaf, 1], [leaf, 2]], [leaf, 3]]).
  ```

### Belangrijke kenmerken:
- **Term constructoren**: Atomen kunnen worden gezien als term constructoren zonder argumenten.
- **Algebraïsche data**: Atomen worden gebruikt om complexe datastructuren te modelleren, zoals bomen.

---

## Gedistribueerd Programmeren in Erlang

### Processen en berichten
Erlang is ontworpen voor gedistribueerd programmeren, waarbij processen parallel worden uitgevoerd en communiceren via berichten.

- **Processen**: Lichtgewicht processen die parallel kunnen worden uitgevoerd.
- **Berichten**: Processen communiceren door berichten naar elkaar te sturen.

### Belangrijke kenmerken:
- **Concurrentie**: Erlang ondersteunt concurrency door middel van processen.
- **Fouttolerantie**: Erlang is ontworpen om fouttolerante systemen te bouwen, waarbij processen elkaar kunnen monitoren en herstarten.

---

## Conclusie
Erlang combineert de kracht van functioneel programmeren (met functies, patroonherkenning en recursie) met de mogelijkheden van gedistribueerd programmeren (met processen en berichten). Door het gebruik van modules, atomen en dynamische typering is Erlang een krachtige taal voor het bouwen van modulaire, schaalbare en fouttolerante systemen.

- **Kernconcepten**: Immutability, pattern matching, recursie, processen.  
- **Sterktes**: Schaalbaarheid, fouttolerantie, hot code loading.  
- **Toepassingen**: Telecom, real-time systemen, gedistribueerde applicaties.  
---

# COLLEGE 11 - Erlang Lecture 2 - Samenvatting

## 1. Inleiding tot Erlang
Erlang is een programmeertaal die vooral bekend staat om zijn geschiktheid voor gelijktijdige (concurrente) en gedistribueerde systemen. Het wordt veel gebruikt in telecommunicatie, databases en andere systemen waar hoge beschikbaarheid en fouttolerantie belangrijk zijn.

### Belangrijke termen:
- **Erlang VM (ERTS)**: De Erlang Runtime System, een virtuele machine die Erlang-code uitvoert. Het beheert processen, geheugen en scheduling.
- **Processen**: Lichtgewicht, gelijktijdige eenheden van uitvoering in Erlang. Elk proces heeft zijn eigen geheugen en wordt beheerd door de Erlang VM, niet door het besturingssysteem.

---

## 2. Erlang Processen
Een Erlang-programma bestaat uit meerdere processen die parallel kunnen worden uitgevoerd. Elk proces heeft een unieke **PID (Process Identifier)** en kan berichten ontvangen en verzenden.

### Belangrijke termen:
- **PID**: Een unieke identifier voor een Erlang-proces.
- **Spawn**: Een functie om een nieuw proces te starten. Bijvoorbeeld: `Pid = spawn(fun() -> ... end)`.
- **Berichten versturen**: Gebruik `Pid ! Message` om een bericht naar een proces te sturen.
- **Berichten ontvangen**: Gebruik `receive ... end` om berichten te ontvangen.

### Voorbeeld:
```erlang
Pid = spawn(fun() -> loop() end),
Pid ! {hello, self()}.
```

---

## 3. Gelijktijdigheid en Berichtenuitwisseling
Erlang-processen communiceren via berichten. Berichten worden opgeslagen in een **mailbox** en kunnen selectief worden verwerkt.

### Belangrijke termen:
- **Mailbox**: Een wachtrij waarin berichten worden opgeslagen totdat ze worden verwerkt.
- **Selectieve ontvangst**: Berichten kunnen worden gefilterd op basis van patronen en guards. Bijvoorbeeld:
  ```erlang
  receive
      {foo, X, Y} -> ...;
      {bar, X} when X > 10 -> ...;
      after 1000 -> ... % Timeout na 1 seconde
  end.
  ```

---

## 4. State Management en Tail Recursion
In Erlang zijn variabelen onveranderlijk (immutable), dus om de staat van een programma bij te houden, wordt vaak gebruik gemaakt van **tail recursion**.

### Belangrijke termen:
- **Tail Recursion**: Een recursieve functie waarbij de recursieve aanroep de laatste operatie is. Dit voorkomt stack overflow en is efficiënt in Erlang.
- **State**: De huidige toestand van een programma. In Erlang wordt de staat vaak doorgegeven als een argument in recursieve functies.

### Voorbeeld:
```erlang
loop(State) ->
    do_something(State),
    loop(NewState).
```

---

## 5. Gen_server en OTP
**gen_server** is een belangrijk onderdeel van de OTP (Open Telecom Platform) bibliotheken. Het biedt een gestandaardiseerde manier om client-server interacties te implementeren.

### Belangrijke termen:
- **gen_server**: Een OTP-module die een client-server model implementeert met callback-functies.
- **Callback-functies**: Functies zoals `init`, `handle_call`, `handle_cast`, en `terminate` die door de ontwikkelaar worden geïmplementeerd om de server te besturen.

### Voorbeeld:
```erlang
-module(my_server).
-behaviour(gen_server).

start_link() ->
    gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).

init([]) ->
    {ok, InitialState}.

handle_call(Request, _From, State) ->
    {reply, Response, NewState}.

handle_cast(Request, State) ->
    {noreply, NewState}.
```

---

## 6. Supervisors en Fouttolerantie
Supervisors zijn processen die andere processen (child processes) monitoren en beheren. Als een child proces crasht, kan de supervisor beslissen om het proces opnieuw te starten of het hele systeem af te sluiten.

### Belangrijke termen:
- **Supervisor**: Een proces dat andere processen beheert en herstart bij fouten.
- **Restart-strategieën**:
  - **one_for_one**: Alleen het gecrashte proces wordt herstart.
  - **one_for_all**: Alle child processen worden gestopt en opnieuw gestart.
  - **rest_for_one**: Alle processen na het gecrashte proces worden gestopt en opnieuw gestart.

### Voorbeeld:
```erlang
init([]) ->
    {ok, { {one_for_one, 5, 10}, [ {child1, {my_module, start_link, []}, permanent, 5000, worker, [my_module]} ] }.
```

---

## 7. Records en Macros
Records zijn gegevensstructuren met een vaste set velden. Ze worden vaak gebruikt om complexe gegevens te modelleren.

### Belangrijke termen:
- **Record**: Een gegevensstructuur met benoemde velden. Bijvoorbeeld:
  ```erlang
  -record(client, {name, age, address}).
  ```
- **Macros**: Constanten of functies die tijdens de compilatie worden uitgebreid. Bijvoorbeeld:
  ```erlang
  -define(MAX_SIZE, 100).
  ```

---

## 8. Gedistribueerd Programmeren
Erlang ondersteunt gedistribueerde systemen, waarbij processen op verschillende machines kunnen communiceren via **RPC (Remote Procedure Calls)**.

### Belangrijke termen:
- **RPC**: Remote Procedure Call, een mechanisme om functies aan te roepen op een andere machine.
- **Cookie**: Een beveiligingsmechanisme om ervoor te zorgen dat alleen vertrouwde nodes met elkaar kunnen communiceren.

### Voorbeeld:
```erlang
rpc:call('node@host', module, function, [arg1, arg2]).
```

---

## 9. Tips en Tricks
- **Tail recursion**: Gebruik tail recursion om oneindige loops te maken zonder stack overflow.
- **gen_server**: Gebruik gen_server voor stateful applicaties zoals een TicTacToe-spel.
- **Supervisors**: Gebruik supervisors om fouttolerante systemen te bouwen.

---

## 10. Conclusie
- **Tail recursion** en berichtenuitwisseling zijn kernconcepten in Erlang.
- **gen_server** biedt een gestandaardiseerde manier om stateful applicaties te bouwen.
- **Supervisors** zorgen voor fouttolerantie door processen te monitoren en te herstarten.
- **Records** en **macros** helpen bij het structureren van code en gegevens.
- **Gedistribueerd programmeren** maakt het mogelijk om systemen over meerdere machines te verspreiden.

# COLLEGE 12 - Erlang Lecture 2 - Samenvatting  

## 1. **Inleiding tot Erlang**  
Erlang is een functionele programmeertaal ontworpen voor gelijktijdige, gedistribueerde en fouttolerante systemen. Het wordt veel gebruikt in telecom, databases en real-time systemen.  

### Belangrijke termen:  
- **Erlang VM (ERTS)**: De runtime die Erlang-processen beheert, met een eigen scheduler en ondersteuning voor >100.000 processen.  
- **Proces**: Een lichtgewicht uitvoeringseenheid met eigen geheugen, beheerd door de Erlang VM.  
- **PID (Process Identifier)**: Unieke identifier voor een proces.  

---

## 2. **Concurrentie en Processen**  
### Processen aanmaken en communiceren:  
- **`spawn/1,3`**: Creëert een nieuw proces.  
  ```erlang
  Pid = spawn(fun() -> ... end)          % Anonieme functie
  Pid = spawn(Module, Fun, Args)         % Functie uit een module
  ```  
- **`Pid ! Bericht`**: Verzendt een bericht naar een proces.  
- **`receive ... end`**: Ontvangt en verwerkt berichten uit de mailbox.  

### Voorbeeld:  
```erlang
% Server proces
echo() ->
  receive
    {hello, Sender, Value} -> 
      Sender ! {reply, self(), Value},
      echo();  % Tail recursion voor oneindige loop
    stop -> ok
  end.

% Client proces
Pid = spawn(fun echo/0),
Pid ! {hello, self(), 42},
receive
  {reply, Pid, 42} -> Pid ! stop
end.
```  

---

## 3. **Berichtenverwerking**  
- **Selectieve ontvangst**: Gebruik patronen en guards om specifieke berichten te filteren.  
  ```erlang
  receive
    {foo, X, Y} -> ... ;   % Match op tuple met 3 elementen
    {bar, X} when X > 10 -> ... ;  % Guard voor conditie
    after 1000 -> ... % Timeout na 1 seconde
  end.
  ```  
- **Mailbox**: Een FIFO-wachtrij voor berichten. Berichten blijven in de mailbox tot ze worden gematcht.  

---

## 4. **State Management en OTP**  
### **gen_server**:  
Een OTP-library voor stateful client-server applicaties.  
- **Callback functies**:  
  - `init/1`: Initialiseert de staat.  
  - `handle_call/3`: Verwerkt synchrone verzoeken (gebruik `gen_server:call`).  
  - `handle_cast/2`: Verwerkt asynchrone verzoeken (gebruik `gen_server:cast`).  
  - `terminate/2`: Schoonmaak bij afsluiten.  

### Voorbeeld:  
```erlang
-behaviour(gen_server).

start_link() -> gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).

init([]) -> {ok, InitialState}.

handle_call(Request, _From, State) -> 
  {reply, Response, NewState}.

handle_cast(Request, State) -> 
  {noreply, NewState}.
```  

---

## 5. **Fouttolerantie en Supervisors**  
### **Supervisors**:  
Beheren kindprocessen en herstarten ze bij crashes.  
- **Strategieën**:  
  - **one_for_one**: Herstart alleen het gecrashte proces.  
  - **one_for_all**: Herstart alle processen.  
  - **rest_for_one**: Herstart processen na het gecrashte proces.  

### Voorbeeld:  
```erlang
init([]) ->
  {ok, { {one_for_one, 5, 10}, [
    {child_id, {Module, start_link, []}, permanent, 5000, worker, [Module]}
  ] }}.
```  

---

## 6. **Hot Code Swapping**  
Erlang staat toe om code tijdens runtime te updaten zonder het systeem te stoppen.  
- **Voorbeeld**:  
  ```erlang
  % Hercompileer en laad een module opnieuw
  c(mymodule),
  mymodule:func().  % Roept de nieuwste versie aan bij het volgende bericht.
  ```  

---

## 7. **Records en Macros**  
- **Record**: Een gegevensstructuur met benoemde velden.  
  ```erlang
  -record(client, {name, age, address}).
  P = #client{name="Anna", age=25, address="Straat 1"},
  P#client.name.  % => "Anna"
  ```  
- **Macros**: Gebruik `-define` voor herbruikbare code.  
  ```erlang
  -define(MAX_SIZE, 100).
  ```  

---

## 8. **Gedistribueerd Programmeren**  
- **RPC (Remote Procedure Call)**: Roept functies aan op externe nodes.  
  ```erlang
  rpc:call('node@host', Module, Fun, Args).
  ```  
- **Erlang Cookies**: Beveiligingsmechanisme voor communicatie tussen nodes.  
  ```erlang
  erl -name node@host -setcookie SECRET
  ```  

---

## 9. **Praktische Tips**  
- **Tail Recursion**: Gebruik voor oneindige loops zonder stack overflow.  
  ```erlang
  loop(State) ->
    do_something(State),
    loop(NewState).
  ```  
- **TicTacToe Voorbeeld**: Gebruik `gen_server` voor de spelstatus en berichtenafhandeling.  

---

## 10. **Conclusie**  
- **Processen en Concurrency**: Lichtgewicht, schaalbaar tot >100.000 processen.  
- **Fouttolerantie**: Supervisors en "Let it crash"-filosofie.  
- **OTP**: `gen_server` voor state management en gestandaardiseerde patronen.  
- **Distributed Erlang**: Ondersteuning voor RPC en veilige node-communicatie.  
- **Hot Code Swapping**: Updates zonder downtime.  
