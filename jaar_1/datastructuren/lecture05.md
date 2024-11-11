# DATASTRUCTUREN `Lecture 05`

`11 november, 2024`

## ALG: BIG O


> *Definitie:* f E O(g) betekent dat er constantes c, n0 zijn zodat voor alle n >= n0 geldt dat |f(n)\ <= c * g(n)

Met de grote O notatie is het de bedoeling dat je constante waardes verwaarloost om zo de complexiteit van een algoritme grofweg uit te drukken. Het is belangrijk dat f(n) altijd groter is dan O(n).

| f(n) | O(n) |
| --- | --- |
| 1 | 1 |
|93838330 | 1 |
| 5 + 3n | n |
| n | n² ??|
| 2^n | n! |
| log(n³) | log(n) |

### Lower bound
De lower bound geef je aan met $\Omega$. 

### Sharp bounds
De sharp bound betekent dat de lower en upper bound aan elkaar gelijk staan, en wordt aangeduidt met $\Theta(n)$

## DS: Bomen
Bomen (trees) zijn lijsten waarbij een node meerdere opvolgers heeft.

> Study hard slide: LECTURE 5 P.28: [SLIDES](file:///home/santos/Downloads/Lecture5.pdf)