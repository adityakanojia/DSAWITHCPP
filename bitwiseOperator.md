# 🧮 Bitwise Operators Summary

Bitwise operators perform operations directly on the **binary representation** of integers. They're commonly used in system programming, graphics, encryption, flags, etc.

---

## 🔹 List of Bitwise Operators

| Operator | Symbol | Description                                                    | Example (a = 5, b = 3)     | Binary Operation          |
|----------|--------|----------------------------------------------------------------|-----------------------------|---------------------------|
| AND      | `&`    | Each bit of the result is 1 **if both** corresponding bits are 1 | `a & b = 1`                | `0101 & 0011 = 0001`      |
| OR       | `\|`   | Each bit of the result is 1 **if at least one** bit is 1         | `a \| b = 7`               | `0101 \| 0011 = 0111`     |
| XOR      | `^`    | Each bit is 1 **if only one** of the bits is 1                  | `a ^ b = 6`                | `0101 ^ 0011 = 0110`      |
| NOT      | `~`    | Inverts all bits (1 → 0, 0 → 1)                                  | `~a = -6` (in 2's comp)    | `~0101 = 1010`            |
| Left Shift | `<<` | Shifts bits left by n positions, fills with 0s                  | `a << 1 = 10`              | `0101 << 1 = 1010`        |
| Right Shift | `>>`| Shifts bits right by n positions (fills MSB based on sign)      | `a >> 1 = 2`               | `0101 >> 1 = 0010`        |

---

## 🔸 Explanation of Each Operator

### `&` - Bitwise AND
- Compares each bit of two numbers.
- **1 if both bits are 1**, else 0.

### `|` - Bitwise OR
- **1 if at least one bit is 1**, else 0.

### `^` - Bitwise XOR (Exclusive OR)
- **1 if only one of the bits is 1**, else 0.

### `~` - Bitwise NOT
- **Flips each bit** of the number.
- `~a = -(a + 1)` in signed integer systems.

### `<<` - Left Shift
- Shifts bits to the left, inserting 0 from the right.
- Equivalent to multiplying by 2ⁿ.

### `>>` - Right Shift
- Shifts bits to the right.
- For positive numbers, inserts 0 on the left.
- For negative numbers (in some languages), inserts 1 (arithmetic shift).

---

## 🧪 Example in Code (c++)

```cpp
a = 5  # 0101
b = 3  # 0011

cout << "a & b =", (a & b);   # 1
cout << "a | b =", (a | b);   # 7
cout << "a ^ b =", (a ^ b);   # 6
cout << "~a =", (~a);          # -6
cout << "a << 1 =", (a << 1);  # 10
cout << "a >> 1 =", (a >> 1);      # 2
