# cpp-function-template-maximum
C++ 
# C++ Function Template – Maximum Value

This repository contains a simple C++ program that demonstrates the use of a **function template** to find the maximum of two values.

---

## 📌 Program Description

The `maxium()` function is a template that works with different data types.  
It compares two values and returns the larger one.

The compiler automatically generates the appropriate function based on the data type used.

---

## 🧠 Concepts Covered

- Function templates in C++
- Generic programming
- Compile-time polymorphism
- Basic input/output

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

template<class T>
T maxium(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << maxium(5, 3) << endl;
    cout << maxium(2.4f, 3.5f) << endl;
    return 0;
}
Sample Output
5
3.5

## 📂 File Structure

