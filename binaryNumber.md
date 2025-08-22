# Binary Numbers Explained

## What is a Binary Number?

A **binary number** is a number expressed in the **base-2 numeral system** which uses only two symbols: typically `"0"` (zero) and `"1"` (one). Each digit is called a *bit*, short for binary digit.

### Example:
Binary number `101101` is calculated as:  
\[
(1 \times 2^5) + (0 \times 2^4) + (1 \times 2^3) + (1 \times 2^2) + (0 \times 2^1) + (1 \times 2^0)
\]

\[
= 32 + 0 + 8 + 4 + 0 + 1 = 45_{(decimal)}
\]

---

## Why Computers Use Binary Numbers?

1. **Simplicity**:  
   Computers operate using electrical signals which can be either **ON** or **OFF**. These two states naturally map to binary digits:
   - `0` → OFF
   - `1` → ON

2. **Logic Operations**:  
   Binary simplifies computer logic, as all arithmetic and logical operations can be efficiently performed with just two states, enhancing speed and reliability.

---

## How Computers Use Binary Numbers?

1. **Storing Information**:  
   All types of data, such as numbers, text, images, audio, and video, are stored as sequences of bits.

2. **Computation**:  
   Computers perform arithmetic operations (addition, subtraction, multiplication, and division) using binary arithmetic.

3. **Communication**:  
   Binary signals transmit data within and between computer systems (CPU, memory, input/output devices).

---

## Summary
Binary numbers, consisting of only two digits (`0` and `1`), are foundational for digital systems. Their simplicity enables efficient and accurate storage, computation, and communication in computers.


Decimal = **23**

---

## 🔥 C++ Code for Conversion

Here's a C++ program to convert numbers from binary to decimal and decimal to binary:

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, i = 1;
    while (decimal != 0) {
        int remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice, number;
    cout << "Choose Conversion Type:\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Decimal to Binary\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Binary Number: ";
        cin >> number;
        cout << "Decimal: " << binaryToDecimal(number);
    }
    else if (choice == 2) {
        cout << "Enter Decimal Number: ";
        cin >> number;
        cout << "Binary: " << decimalToBinary(number);
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
