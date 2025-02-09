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