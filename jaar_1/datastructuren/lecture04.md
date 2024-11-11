# DATASTRUCTUREN `Lecture 04`

`07 november, 2024`

## Sets

### Een set in een gesorteerde array

We kunnen een **invariant** gebruiken, om de keys in de array gesorteerd te houden.

- In het slechste geval kost is de tijd die het kost om een item toe te voegen relatief aan de grootte van de lijst.

## ALG: Binary Search

```c
int binary_search(int a[], int n, int x) {
    int low = 0;
    int high = n-1;

    if (x > a[high]) { return n; } // Item ligt niet binnen array

    while (low < high) {
        int middle = (low + high) / 2;
        if (a[middle] <= x) {}
    }
}
```

## Separate chaining

Solution 1: in a **separate chaining** hash table, worden alle keys die in dezelfde hash bucket belanden opgeslagen in een linked list