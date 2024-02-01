# Spell Checker

### Table of Contents
- [Spell Checker](#spell-checker)
    - [Table of Contents](#table-of-contents)
    - [Introduction](#introduction)
    - [Exec commands](#exec-commands)
    - [Learnings](#learnings)
      - [Understanding Strategy Pattern:](#understanding-strategy-pattern)
      - [Flexible Design with Patterns:](#flexible-design-with-patterns)
      - [Implementation of Custom Logger:](#implementation-of-custom-logger)
      - [Modular Code Organization:](#modular-code-organization)
      - [Practical C++ Application:](#practical-c-application)
      - [Iterative Development Approach:](#iterative-development-approach)

### Introduction
Ever wondered how spell checkers work?

I actually found them quite fascinating, so I decided to build one myself. This project is a spell checker implemented in C++ using the strategy pattern. The spell checker reads a sample text file, identifies misspelled words, [TODO: and provides suggestions for corrections]. The strategy pattern allows for easy integration of different spell-checking algorithms, starting with a Levenshtein distance-based strategy.

### Exec commands

```bash
# compile the spell checker
g++ -std=c++11 -o spell_checker -Iinclude src/*.cpp main.cpp -ftime-report
```

```bash
# run the spell checker
./spell_checker
```

```bash
# TODO
# run the spell checker with a file
./spell_checker <file>
```

```bash
# TODO
# run the spell checker with a file and output the result to a file
./spell_checker <file> > <output_file>
```

### Learnings

#### Understanding Strategy Pattern:

Explored the strategy pattern for designing flexible and interchangeable algorithms.
Applied it to seamlessly switch between different spell-checking strategies.

#### Flexible Design with Patterns:

Recognized the advantages of design patterns, especially the strategy pattern, for creating adaptable software.
Learned how to easily integrate or switch algorithms without modifying the core logic.

#### Implementation of Custom Logger:

Created a custom logger to enhance console output, highlighting incorrect words for better visibility.
Used ANSI escape codes for simple and effective text highlighting.

#### Modular Code Organization:

Emphasized the significance of modular code for improved readability and maintainability.
Structured the project into distinct components, such as file I/O and spell-checking strategies.

#### Practical C++ Application:

Applied C++ concepts in a practical project, reinforcing language features and syntax.
Gained hands-on experience in file I/O, string manipulation, and algorithm integration.

#### Iterative Development Approach:

Applied an iterative development process, refining the spell checker through testing and feedback.
Overcame challenges and improved the implementation to achieve the desired functionality.