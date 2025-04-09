# Lectures week 1
**Propositional and First Order Logic**

***

## Propositional logic
A **Proposition** is a statement that is either true or false. Propositions can be turned into **propositional variables**. Propositions that are always true are called **tautologies** and are written like $\top$ and propositions that are called **contradictions** and are always false are written like $\bot$. A **contingency** is a proposition that is neither a tautology or a contradiction. **Formulae** are make by connecting propositions together with **logical connectives**, like:
- Negation $\neg$: reverse the truth value of a proposition.
- Conjunction $\land$: resolve as true if both propositions are true
- Disjunction $\lor$: resolve as true if at least one of the propositions is true (inclusive)
- Implication $\rightarrow$: resolve as true if the implication $p \rightarrow q$ is true. In this case p is the hypothesis and q is the conclusion.
- Equivalence $\Leftrightarrow$: can be read as "if and only if" and only resolves as true if both propositions are either true or false.

**Truth tables** are used to look at the outcome of a formula based on the value of propositional variables. The only outcome of a truth table can be true (T) or false (F). 

Two terms are **equivalant** if they have the same truth under various conditions, and this is denoted as $p \equiv q$.

A compound proposition is **satisfyable** if there is a truth value which makes the statement true, otherwise it's **unsatisfyable**.

## Propositional equivalences
### Morgans laws
Morgans laws are short hand tricks that allow us to rewrite compound propoisitons. 
- **Morgans first law**: $\neg(p \land q) \equiv \neg p \lor \neg q$
- **Morgans second law**: $\neg(p \lor q) \equiv \neg p \land \neg q$

### Various logical equivalences

#### Equivalences containing negation, conjunction and disjunction
- **Identity laws**: $p \land \top \equiv p$, $p \lor \bot \equiv p$
- **Domination laws**: $p \lor \top \equiv \top$, $p \land \bot \equiv \bot$
- **Idempotent laws**: $p \lor p \equiv p$, $p \land p \equiv p$
- **Double negation laws**: $\neg(\neg  p) \equiv p$
- **Negation laws**: $p \lor \neg p \equiv \top$, $p \land \neg p \equiv \bot$
- **Commutative laws**: $p \lor q \equiv q \lor p$, $p \land q \equiv q \land p$
- **Associative laws**: $(p \land q) \land r \equiv p \land (q \land r)$, $(p \lor q) \lor r \equiv p \lor (q \lor r)$
- **Distributive laws**: $p \lor (q \land r) \equiv (p \land q) \lor (p \land r)$, $p \land (q \lor r) \equiv (p \lor q) \land (p \lor r)$

#### Equivalences containing conditional statements
- $p \rightarrow q \equiv \neg p \lor q$
- $p \rightarrow q \equiv \neg q \rightarrow \neg p$
- $p \lor q \equiv \neg p \rightarrow q$
- $p \land q \equiv \neg (p \rightarrow \neg q)$
- $\neg (p \rightarrow q) \equiv p \land \neg q$
- $(p \rightarrow q) \land (p \rightarrow r) \equiv p \rightarrow (q \land r)$
- $(p \rightarrow r) \land (q \rightarrow r) \equiv (p \lor q) \rightarrow r$
- $(p \rightarrow q) \lor (p \rightarrow r) \equiv p \rightarrow (q \lor r)$
- $(p \rightarrow r) \lor (q \rightarrow r) \equiv (p \land q) \rightarrow r$

#### Equivalences containing biconditional statements
- $p \leftrightarrow q \equiv (p \rightarrow q) \land (q \rightarrow p) \equiv (p \rightarrow q) \land (\neg p \rightarrow \neg q)$
- $p \leftrightarrow q \equiv \neg p \leftrightarrow \neg q$
- $\neg (p \leftrightarrow q) \equiv p \leftrightarrow \neg q$

### Constructing logical equivalences
To proof that $A \equiv B$, we must rewrite $A$ applying one change at a time until we arrive at $B$. We can let $A$ be the original expression and $B$ be the result. To derive $B$ from $A$ we will apply the known logical equivalences to $A$ until it can be written as $B$.

## Informal proofs
Informal proofs are used often because they're generally easier to write down

Important definitions:
- **Theorem**: a statement that can be shown to be true using definitions, other theorems, etc.
- **Lemma**: a "helping theorem" or a result needed to prove a theorem
- **collorary**: a result that follows from a theorem
- **Conjecture**: a statement that is proposed to be true, but hasn't been proven yet

### Proving conditional statements $p \rightarrow q$
#### Direct proof
Assume that $p$ is true. Use logical equivalences etc. to show that $q$ must then also be true

#### Proof by contraposition
Assume $\neg q$ and show $\neg p$ is also true. By showing that $\neg q \rightarrow \neg p$ we show that $p \rightarrow q$. This is called indirect proof. 

#### Proof by contradiction
To prove $p$, assume $\neg p$ and derive a contradiction. If $\neg p \rightarrow \bot$, then $p \rightarrow \top$.

### Proving biconditional statements $p \leftrightarrow q$
We must show that $p \rightarrow q$ and $q \rightarrow p$ are both true. Sometimes **iff** is used as an abbreviation for "if and only if".

## First order logic (predicate logic)

Predicate logic uses the following features:
- **Variables**: $x, y, z$
- **Predicates**: $P, M$
- **Quantifiers**: $\forall, \exists$

Values for variables are all within a **domain**. The elements within the domain are **constants**. The domain is often denoted bu $U$ (**universe**). Predicates can take in a number of arguments, this number is called it's **arity**. 

Predicates by themselves have no meaning. They receive their meaning by defining for which combination of argument constants they are true. This is called the **interpretation** of the predicate. If a predicate does not have the correct amount of arguments, it is not a proposition and thus can't be assigned a truth value. Connectives from propositional logic can be used in predicate logic as well.

We use quantifiers to refer to properties of multiple objects. The two most important quantifiers are:
- **Universal quantifier**: "For all", $\forall$
- **Existential quantifier**: "Some", $\exists$

$\forall xP(x)$ asserts that $P(x)$ is true for every $x$ in universe $U$.
$\exists xP(x)$ asserts that $P(x)$ is true for some $x$ in universe $U$.
$\exists!xP(x)$ neabs that $P(x)$ is true for one and only one $x$ in the universe $U$. 

The quantifiers $\forall$ and $\exists$ have a higher precedence than all other logical operators. This means for example that $\forall xP(x) \lor Q(x) \equiv (\forall xP(x)) \lor Q(X)$ and is not equal to $\forall xP(x) \lor \forall xQ(x)$. To **break precedence** we often use $:$ $\forall x : P(x) \lor Q(x) \equiv \forall x(P(x) \lor Q(x))$ 

Two statements involving predicates and quantifiers are **logically equivalent** if and only if they have the samen truth value for every domain used for the variables and for every interpretation of the predicates. We write this as $S \equiv T$.

# MISSING INFORMATION