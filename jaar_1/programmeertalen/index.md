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

---

### Vragen?
Als je vragen hebt over de stof, aarzel dan niet om ze te stellen!

---

Dit document bevat alle belangrijke informatie uit de slides, georganiseerd in een logische volgorde. Je kunt dit document kopiëren en plakken in een tekstverwerker en het vervolgens opslaan als PDF. Succes met je tentamen!
