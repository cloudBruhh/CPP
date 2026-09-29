# C++ Practice Programs

A collection of small C++ programs covering core OOP and language concepts.

## Files

| File | Topic |
|------|-------|
| `area.cpp` | Function overloading — area of circle vs. rectangle |
| `circle.cpp` | Class with input/display methods |
| `constructor.cpp` | Multilevel inheritance constructor chaining (Vehicle → Car → SportsCar) |
| `constructor-multiple.cpp` | Multiple inheritance constructor chaining (Printer + Scanner → AllInOne) |
| `copy-constructor.cpp` | Copy constructor demonstration |
| `defaultargument.cpp` | Default function arguments |
| `dynamic-mem-allocate.cpp` | Dynamic memory allocation with `new` (single values) |
| `dynamic-mem-allocation-array.cpp` | Dynamic memory allocation with `new[]` (arrays) |
| `emp-test.cpp` | Employee class with age validation |
| `employee.cpp` | Employee class with input/display |
| `free-object.cpp` | Employee class (variant of `employee.cpp`) |
| `friend.cpp` | Friend function accessing private members |
| `friend-function-and-class.cpp` | Friend function with class object parameter |
| `inheritance.cpp` | Abstract base class, pure virtual functions, polymorphism |
| `test.cpp` | Simple while-loop countdown |
| `virtualfunc.cpp` | Virtual functions and runtime polymorphism |

## Build & Run

Each file is standalone. Compile and run any file with:

```bash
g++ -std=c++17 filename.cpp -o output
./output
```

## Concepts Covered

- **Constructors** — default, parameterized, copy, chaining in inheritance
- **Inheritance** — multilevel, multiple, abstract base classes
- **Polymorphism** — virtual functions, pure virtual functions, runtime dispatch
- **Encapsulation** — private members, public interfaces
- **Friend functions** — accessing private members from outside the class
- **Dynamic memory** — `new` / `new[]` allocation
- **Function overloading** — same name, different parameters
- **Default arguments** — fallback values for function parameters
