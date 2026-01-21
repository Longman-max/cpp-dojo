# excercises

### 1. Collecting Input: `std::cin`

To get input from the user, you use `std::cin` (Standard Character Input) combined with the extraction operator `>>`.

- **Setup:** Ensure you include `<iostream>` at the top of your file.
- **Syntax:** `std::cin >> variable_name;`
- **Direction:** Think of the arrows `>>` as pointing the data _into_ the variable.

**Example Code:**

```cpp
#include <iostream>

int main() {
    int age; // 1. Declare the variable first

    std::cout << "Enter your age: "; // Prompt the user
    std::cin >> age;                 // 2. Store input in 'age'


    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}

```

> **Note:** `std::cin >>` skips leading whitespace (spaces, tabs, newlines) and reads until the next whitespace.

---

### 2. Practice Exercises

Use `cin`, variables, booleans, `for` loops, and `if/else` statements to solve these.

#### Exercise 1: The Age Gate (Conditions & Booleans)

**Goal:** Create a program that determines if a user is eligible to vote.

1. Create a boolean variable `isEligible`.
2. Ask the user for their **age**.
3. If they are 18 or older, set `isEligible` to `true`; otherwise `false`.
4. Use an `if` statement to print "You can vote!" or "Too young." based _only_ on the boolean variable.

**Solution:** See [fixStudentGrade.cpp](./Classes/fixStudentGrade.cpp)

#### Exercise 2: The Summation Machine (For Loops & Variables)

**Goal:** Calculate the sum of all numbers up to a user-defined limit.

1. Ask the user for a positive integer (e.g., `10`).
2. Create a variable `total` initialized to `0`.
3. Write a `for` loop that runs from 1 up to the user's number.
4. Add the current loop number to `total` in every iteration.
5. Print the final result.

#### Exercise 3: The Odd/Even Filter (Control Flow & Modulo)

**Goal:** Analyze a range of numbers.

1. Ask the user for a **start number** and an **end number**.
2. Use a `for` loop to iterate through every number between them.
3. Inside the loop, use an `if` condition with the modulo operator (`%`) to check if the number is **even**.
4. If it is even, print: `"X is Even"`.
5. If it is odd, print nothing (continue).

### 15 more

Here are 15 more exercises, categorized by difficulty, to help you master variables, input, loops, and control flow.

### Level 1: Basic Input & Logic

**1. The Greeter**
Ask the user for their birth year. Subtract it from the current year (2026) to calculate their approximate age and print "Hello, you are roughly X years old."

**2. Temperature Converter**
Ask for a temperature in Celsius. Convert it to Fahrenheit using the formula and print the result.

**3. The Positive Checker**
Ask for a number. Use an `if/else` block to print "Positive" if it is greater than 0, "Negative" if less than 0, and "Zero" if it equals 0.

**4. The Password Check**
Store a secret number (e.g., `1234`) in a variable. Ask the user to enter a pin. If it matches, print "Access Granted"; otherwise, print "Access Denied."

**5. Even or Odd?**
Ask for a single integer. Use the modulo operator `%` to determine if it is even or odd and print the result.

### Level 2: Loops & Accumulators

**6. The Countdown**
Ask the user for a starting number. Use a `for` loop to count down from that number to 0, printing each number. At the end, print "Blastoff!"

**7. Multiples of 5**
Ask the user for a maximum number (limit). Use a `for` loop to print only the numbers between 1 and that limit that are multiples of 5 (e.g., 5, 10, 15...).

**8. The Accumulator**
Create a variable `sum = 0`. Use a `for` loop that runs 5 times. Inside the loop, ask the user for a number and add it to `sum`. Print the final total after the loop finishes.

**9. Factorial Calculator**
Ask for a small positive integer (e.g., 5). Calculate its factorial (e.g., ) using a `for` loop and print the result.

**10. Power of Two**
Ask the user for a number `n`. Use a `for` loop to print the powers of 2 from up to (e.g., if n=3, print 2, 4, 8).

### Level 3: Complex Control Flow

**11. FizzBuzz (Classic Interview Question)**
Loop from 1 to the user's input number.

- If divisible by 3, print "Fizz".
- If divisible by 5, print "Buzz".
- If divisible by both, print "FizzBuzz".
- Otherwise, print the number.

**12. The Grade Distributor**
Ask the user for a score (0-100). Use `if`, `else if`, and `else` to print the letter grade:

- 90+ : A
- 80-89 : B
- 70-79 : C
- Below 70 : F

**13. Range Summer**
Ask for two numbers: `start` and `end`. If `start` is greater than `end`, swap them (or handle the error). Then, sum all numbers inclusive between them using a loop.

**14. The Skipping Loop**
Ask the user for a number to skip (e.g., 13). Loop from 1 to 20. Print every number _except_ the unlucky number the user chose (use `continue` or a condition).

**15. Prime Number Checker**
Ask for a number. Use a `for` loop to check if it is divisible by any number between 2 and itself. If it divides evenly by anything other than 1 and itself, it's not prime. Print "Prime" or "Not Prime".

---

## Exercises on Pointers and References

Here are 10 exercises ranging from beginner to intermediate, covering syntax, arithmetic, and function parameters.

### Part 1: The Basics

**1. The Setup**
Declare an integer variable `x = 50`. Create a pointer `p` that points to `x` and a reference `r` that refers to `x`. Print the value of `x` using all three (the variable, the pointer, and the reference).

<details>
<summary><strong>Solution</strong></summary>

```cpp
int x = 50;
int* p = &x;
int& r = x;
std::cout << x << " " << *p << " " << r;

```

</details>

**2. Modification**
Using the variables from Exercise 1: Change the value of `x` to `100` using the **pointer**. Then, print `x` using the **reference** to verify the change.

<details>
<summary><strong>Solution</strong></summary>

```cpp
*p = 100;
std::cout << r; // Outputs 100

```

</details>

**3. Pointer Reassignment**
Create two integers, `a = 10` and `b = 20`. Create a pointer `ptr` pointing to `a`. Print the value. Then, make `ptr` point to `b` and print the value again.

<details>
<summary><strong>Solution</strong></summary>

```cpp
int a = 10, b = 20;
int* ptr = &a;
std::cout << *ptr; // 10
ptr = &b;
std::cout << *ptr; // 20

```

</details>

---

### Part 2: Functions

**4. Pass by Reference**
Write a function `addOne` that takes an integer reference. The function should increment the number by 1. Call it from main.

<details>
<summary><strong>Solution</strong></summary>

```cpp
void addOne(int& num) {
    num++;
}
// Usage: addOne(myVar);

```

</details>

**5. Pass by Pointer**
Write a function `square` that takes an integer pointer. The function should square the value the pointer points to.

<details>
<summary><strong>Solution</strong></summary>

```cpp
void square(int* ptr) {
    if(ptr) *ptr = (*ptr) * (*ptr);
}
// Usage: square(&myVar);

```

</details>

**6. Const References**
Write a function `printValue` that accepts a `const int&`. Try to modify the value inside the function (this should cause a compiler error, which is the lesson).

<details>
<summary><strong>Solution</strong></summary>

```cpp
void printValue(const int& num) {
    // num = 5; // ERROR: Cannot assign to variable 'num' with const-qualified type
    std::cout << num;
}

```

</details>

---

### Part 3: Arrays & Arithmetic

**7. Array Traversal**
Create an array `arr = {10, 20, 30}`. Create a pointer `ptr` initialized to the start of the array. Use a loop and **pointer arithmetic** (e.g., `ptr++`) to print all values.

<details>
<summary><strong>Solution</strong></summary>

```cpp
int arr[] = {10, 20, 30};
int* ptr = arr;
for(int i=0; i<3; i++) {
    std::cout << *ptr << " ";
    ptr++;
}

```

</details>

**8. Pointer Subtraction**
Create a pointer to the first element of an array and a pointer to the last element. Subtract the two pointers. What does the result represent?

<details>
<summary><strong>Solution</strong></summary>

```cpp
// The result represents the number of elements between the two pointers.
int arr[] = {1, 2, 3, 4, 5};
int* start = &arr[0];
int* end = &arr[4];
std::cout << end - start; // Outputs 4

```

</details>

---

### Part 4: Advanced

**9. Pointer to Pointer**
Create an integer `x = 5`. Create a pointer `p` to `x`. Create a pointer `pp` that points to `p`. Use `pp` to change the value of `x` to `10`.

<details>
<summary><strong>Solution</strong></summary>

```cpp
int x = 5;
int* p = &x;
int** pp = &p;
**pp = 10;

```

</details>

**10. Return by Reference**
Write a function `getMax` that takes two integer references and returns a reference to the larger one. Use this to assign a new value to the larger variable directly from the function call.

<details>
<summary><strong>Solution</strong></summary>

```cpp
int& getMax(int& a, int& b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    getMax(x, y) = 50; // Changes y to 50 because y was larger
}

```

</details>

<!-- Would you like to try a mini-project, like building a Linked List, to apply these concepts? -->

## Classes

Here are 10 exercises to practice the basics of classes, ranging from simple structure to adding logic.

### 1. The "Hello World" Class

**Goal:** Create a class `Person`.

- **Attributes:** `name` (string), `age` (integer).
- **Methods:** `introduce()` that prints "Hi, I am [name] and I am [age] years old."
- **Task:** Instantiate an object, set the values, and call the method.

**Solution:** [helloClass.cpp](./Classes/helloClass.cpp)

### 2. Geometry Basics

**Goal:** Create a class `Rectangle`.

- **Attributes:** `width`, `height`.
- **Methods:** `area()`, `perimeter()`.
- **Task:** Create two different rectangles and print their areas.

**Solution:** [geometryBasics.cpp](./Classes/geometryBasics.cpp)

### 3. Bank Account Logic

**Goal:** Create a class `BankAccount`.

- **Attributes:** `accountNumber`, `balance`.
- **Methods:** `deposit(amount)`, `withdraw(amount)`.
- **Logic:** Ensure `withdraw` checks if the balance is sufficient before subtracting. If not, print "Insufficient funds."

**Solution:** [bankAccountLogic.cpp](./Classes/bankAccountLogic.cpp)

### 4. Student Gradebook

**Goal:** Create a class `Student`.

- **Attributes:** `name`, `marks` (an array or list of 3 numbers).
- **Methods:** `calculateAverage()` which returns the average of the marks.
- **Task:** Create a student, assign marks [85, 90, 78], and print the average.

**Solution:** [studentGradeBook.cpp](./Classes/studentGradeBook.cpp)

### 5. Book Inventory

**Goal:** Create a class `Book`.

- **Attributes:** `title`, `author`, `pages`.
- **Methods:** `isLong()` which returns `true` if pages > 500, else `false`.
- **Task:** Check if a specific book is considered "long."

**Solution:** [bookInventory.cpp](./Classes/bookInventory.cpp)

### 6. Circle Properties

**Goal:** Create a class `Circle`.

- **Attributes:** `radius`.
- **Methods:** `getCircumference()`, `getArea()`.
- **Note:** Use the formula for area and for circumference (assume ).

**Solution:** [circleProps.cpp](./Classes/circleProps.cpp)

### 7. Product Stock

**Goal:** Create a class `Product`.

- **Attributes:** `name`, `price`, `quantity`.
- **Methods:**
- `sell(amount)`: decreases quantity by amount.
- `restock(amount)`: increases quantity by amount.

- **Task:** Simulate selling a product and printing the remaining quantity.

**Solution:** [productStock.cpp](./Classes/productStock.cpp)

### 8. Temperature Converter

**Goal:** Create a class `Temperature`.

- **Attributes:** `celsius`.
- **Methods:** `toFahrenheit()` which returns the converted value ().

**Solution:** [tempConverter.cpp](./Classes/tempConverter.cpp)

### 9. Employee Salary

**Goal:** Create a class `Employee`.

- **Attributes:** `name`, `hourlyRate`, `hoursWorked`.
- **Methods:** `calculatePay()` which returns `hourlyRate * hoursWorked`.
- **Logic:** Add logic to pay 1.5x for any hours worked over 40 (overtime).

**Solution:** [employeeSalary.cpp](./Classes/employeeSalary.cpp)

### 10. The Smartphone

**Goal:** Create a class `Phone`.

- **Attributes:** `brand`, `batteryLevel` (starts at 100).
- **Methods:**
- `call(minutes)`: Reduces battery by 1% per minute.
- `charge()`: Resets battery to 100.

- **Task:** Make a 20-minute call and check the battery level.

**Solution:** [theSmartPhone.cpp](./Classes/theSmartPhone.cpp)

## more

Alright—no fluff. Here’s a **clean, beginner-but-not-stupid** C++ exercise that forces you to actually think instead of copy-paste.

---

## Student Score Manager

### Requirements

Create a C++ program that:

1. Has a **class `Student`** with:
   - `name` (string)
   - `scores` (vector<int>)
   - Methods:
     - `addScore(int)`
     - `getAverage()`
     - `display()`

2. In `main()`:
   - Use a **loop** to enter multiple students.
   - For each student:
     - Enter the name.
     - Enter 3 test scores using a loop.

   - Store all students in a **vector<Student>**.
   - After input, display:
     - Each student’s name
     - Their scores
     - Their average.

---

## Expected Output Example

```
How many students? 2

Enter name: John
Enter 3 scores:
Score 1: 60
Score 2: 70
Score 3: 80

Enter name: Mary
Enter 3 scores:
Score 1: 90
Score 2: 85
Score 3: 88

----- RESULTS -----
John -> 60, 70, 80 | Avg: 70
Mary -> 90, 85, 88 | Avg: 87.67
```

**Solution:** [mainScoreManager.cpp](./extras/mainScoreManager.cpp)

---

## Exercise 1: The Inventory System (Structs, Enums, Vectors)

Goal: Manage a list of items using structs and enums.

Create an enum class called ItemType with values: Weapon, Armor, Potion.

Create a struct called Item with:

std::string name

int value

ItemType type

In main(), create a std::vector<Item> and add 3 different items to it.

Write a loop that prints the name of every item worth more than 50 gold.

**Solution:** [InverntorySystem.cpp](./enumsExercises/InverntorySystem.cpp)

## Exercise 2: The Swapper (Pointers & References)

Goal: Understand direct memory manipulation.

Write a function void swapByPointer(int* a, int* b) that swaps the values of two integers using pointers.

Write a function void swapByReference(int& a, int& b) that does the same using references.

In main(), test both functions and print the results to prove they work.

**Solution:** [Swapper.cpp](./enumsExercises/Swapper.cpp)

## Exercise 3: The Bank Manager (Classes, Static, Loops, Vectors)

Goal: Create a class that tracks global data.

Create a class BankAccount.

Private Members: std::string owner, double balance.

Static Member: static int totalAccounts (tracks how many accounts exist).

Public Methods:

Constructor: Sets owner/balance and increments totalAccounts.

deposit(double amount): Adds to balance.

withdraw(double amount): Subtracts from balance.

In main():

Create a vector of BankAccount objects.

Use a loop to deposit $100 into every account.

Print the totalAccounts using the class name.

**Solution:** [bankManager.cpp](./enumsExercises/bankManager.cpp)
