# Header Files

Header files are files that contain declarations of functions, classes, and other entities that can be used in other files. They are used to separate the interface of a program from its implementation, making it easier to manage and maintain the code.

## Usage

Header files are used to separate the interface of a program from its implementation, making it easier to manage and maintain the code.

## Example

### `math_utils.h`
```cpp
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Function declaration
int add(int a, int b);

#endif
```

### `math_utils.cpp`
```cpp
#include "math_utils.h"

// Function implementation
int add(int a, int b) {
    return a + b;
}
```

### `main.cpp`
```cpp
#include <iostream>
#include "math_utils.h"

int main() {
    // Using the function declared in the header
    std::cout << "Sum: " << add(10, 5) << std::endl;
    return 0;
}
```

