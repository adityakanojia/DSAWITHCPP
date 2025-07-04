# Arrays

Arrays are a data structure that stores values of the **same data type** in **contiguous memory** locations. This means each element is stored right next to the previous one, without any gaps. You can imagine storing values in boxes that are arranged in a row.

Each element of an array takes up storage space depending on its data type:

| Data Type | Size     |
|-----------|----------|
| `float`   | 4 bytes  |
| `int`     | 4 bytes  |
| `double`  | 8 bytes  |
| `char`    | 1 byte   |

## Example

```cpp
int array[5] = {1, 2, 3, 4, 5}; // Array of length 5 with integer data type

```

## Indexing in Arrays

Arrays in C++ use **zero-based indexing**. This means the first element is at index `0`, the second at index `1`, and so on.

You can access or update elements directly using their index.

### Example: Accessing and Updating Elements by Index

```cpp
#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    // Accessing elements by index
    cout << "Element at index 0: " << array[0] << endl; // Output: 1
    cout << "Element at index 2: " << array[2] << endl; // Output: 3
    cout << "Element at index 4: " << array[4] << endl; // Output: 5

    // Updating an element by index
    array[2] = 10; // Changes value at index 2 to 10

    cout << "Updated element at index 2: " << array[2] << endl; // Output: 10

    return 0;
}
