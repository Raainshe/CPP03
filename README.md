# CPP03

This project is part of the 42 C++ modules, focusing on Object-Oriented Programming concepts in C++. Specifically, this module explores inheritance, including concepts like class derivation, virtual functions (though not explicitly in ex00-ex02 based on typical progression), and polymorphism.

## Exercises

This module contains several exercises:

*   **ex00: A ClapTrap is born!**
    *   Focuses on creating a base class `ClapTrap` with fundamental attributes and actions.
*   **ex01: Serena, my love!**
    *   Introduces inheritance by creating a `ScavTrap` class that derives from `ClapTrap`, adding its own specific functionalities.
*   **ex02: Repetitive work**
    *   Further explores inheritance by creating a `FragTrap` class, also deriving from `ClapTrap`, with its unique characteristics.

## Compilation Instructions

To compile each exercise, navigate to the respective exercise directory and use the `make` command.

### ex00
```bash
cd ex00
make
./claptrap # or the name of your executable if different
```

### ex01
```bash
cd ex01
make
./scavtrap # or the name of your executable if different
```

### ex02
```bash
cd ex02
make
./fragtrap # or the name of your executable if different, e.g., claptrap
```

**Note:** The executable name might vary depending on your `Makefile` configuration (e.g., it might be `claptrap`, `scavtrap`, `fragtrap`, or a common name like `app` or `program`). Please check your `Makefile` for the exact executable name if the above commands don't work.

To clean up the compiled files, you can usually run:
```bash
make fclean
```
in each exercise directory.