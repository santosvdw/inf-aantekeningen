# Lectures week 1
**Set Theory**

***
## Sets
A set is an unordered collection of elements/members. The notation for an element $a$ contained in $A$ is $a \in A$. The elements of a set can take on any type, but all elements in the set should have the same type.

### Set builder notation
Set builder notation consists of three parts:
- Set declaration
- Domain declaration
- Properties that must be satisfied

$S = \{x \in \{0,1,2,3,4,5\} | x > 4\}$ (results in $S = \{5\}$)

To define the domain you can use sets. To define the properties you may also use predicates.

#### Interval notation
- [a, b] = $\{x | a \leq x \leq b\}$
- [a, b) = $\{x | a \leq x < b\}$
- (a, b] = $\{x | a < x \leq b\}$
- (a, b) = $\{x | a < x < b\}$

- [a,b] is a **closed interval**
- (a,b) is an **open interval**

### Special sets
Some important sets to know are:
- &#8469;, &#8469;$_0$ - natural numbers ({0,1,2,3,...})
- &#8469;$⁺$ - positive natural numbers ({1,2,3,...})
- &#8484; - integers ({...,-1,0,1,2,3,...})
- &#8474; - rational numbers
- &#8474;$⁺$ - positive rational numbers 
- &#8477; - real numbers 
- &#8477;$⁺$ - positive real numbers 
- &#8450; - complex numbers (imaginary numbers, such as $i$)

Other than that, there is also the **universal set** $U$, containing all elements currently under consideration.

There is also an **empty set** with no elements, denoted as $\emptyset$ or simply as {}.

### Set equality
Two sets are **equal** if and only if they have the same elements. We write $A=B$ if two sets are equal. Or, in logic: $\forall x (x \in A \leftrightarrow x \in B)$

### Subsets
A **subset** is a set which elements are also part of another (larger) set. A subset A of B can be denoted as $A \subseteq B$. A set can be it's own subset. If a set is a subset of a set, but it's not equal to that set ($A \neq B, A \subseteq B$), then it is a **proper subset**, which can be denoted as $A \subset B$.

**Cardinality** simply refers to the amount of elements in a set, and is denoted as $|A|$.

Given a set $A = \{a,b\}$, we can use $P(A)$ to get the **power set** of A, which contains all subsets of A: $P(A) = \{\emptyset, \{a\}, \{b\}, \{a,b\}\}$. The cardinality of the power set is $2^n$.

**(Ordered) n-tuples** are collections of elements. 2-tuples are called pairs and two n-tuples are only equal of all their elements are equal and in the same order.

The **cartesian product** of two sets A and B can be denoted by $A \times B$. Given $A = \{a, b\}$ and $B = \{1,2,3\}$, the cartesian product would be $A \times B = \{(a,1),(a,2),(a,3),(b,1),(b,2),(b,3)\}$. Any subset R of the cartesian product is called a **binary relation**.

## Operations with sets
### Union
The **union** of two sets A and B is denoted by $A \cup B$, and combines two sets such that $U = \{x | x \in A \lor x \in B\}$

### Intersection
The **intersection** of two sets A and B is denoted by $A \cap B$, and takes the overlapping parts of two sets such that $I = \{x | x \in A \land x \in B\}$

### Complement
The **complement** of a set A (with respect to U) denoted by $\bar{A}$ or $A^C$, and is the set $\{x \in U | x \notin A\}$