# COLLEGE 2 : Programmeertalen: Python - Samenvatting

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

# COLLEGE 3 : Programmeertalen: C++ - Samenvatting

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
