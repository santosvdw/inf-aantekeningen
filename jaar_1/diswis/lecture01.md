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