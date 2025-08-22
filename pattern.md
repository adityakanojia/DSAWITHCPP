# Pattern Programming

## 1. Square Pattern: Rendering N Numbers N Times

**Example (N = 4):**

```
1234
1234
1234
1234
```

**Explanation:**

* The **outer loop** runs N times (one for each row).
* The **inner loop** also runs N times, printing numbers (or characters) in each row.
* After the inner loop finishes, print a newline (`endl`) to move to the next row.

### Pseudocode

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 1; j <= N; j++) {
        cout << j;
    }
    cout << endl;
}
```

---

## 2. Square Pattern in Increasing Order

**Example (N = 3):**

```
A B C
D E F
G H I
```

**Explanation:**

* Initialize a variable before the loops, e.g. `char ch = 'A';` (or `int num = 1;` for numbers).
* The **outer loop** runs N times (for each row).
* The **inner loop** prints the current value of the variable, then increments it.
* After each row, print a newline.

### Pseudocode (Characters)

```cpp
char ch = 'A';

for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
```

### Pseudocode (Numbers)

```cpp
int num = 1;

for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cout << num << " ";
        num++;
    }
    cout << endl;
}
```

---

## 3. Backward Looping Pattern

**Example (N = 4):**

```
1
2 1
3 2 1
4 3 2 1
```

**Explanation:**

* The **outer loop** runs from 1 up to N (one iteration per line).
* For each `i`, the **inner loop** starts at `i` and decrements down to 1, printing each value.
* After the inner loop, print a newline.

### Pseudocode

```cpp
for (int i = 1; i <= N; i++) {
    for (int j = i; j > 0; j--) {
        cout << j << " ";
    }
    cout << endl;
}
```
# Example 

```
1111
 222
  33
   4
```
**Explaination:** 

* outer loop will run till 4 times as there are 4 lines
* inner loop will run till count and cout i count times
* after every loop it will 


