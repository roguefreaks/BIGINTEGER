# BigInteger Operations in C

## Overview

This project implements operations for handling large integers in C. It provides functionalities for addition, subtraction, multiplication, and division of arbitrarily large numbers. The implementation uses a linked list to represent each digit of the number.

## Features

- **Addition**: Add two large integers.
- **Subtraction**: Subtract one large integer from another.
- **Multiplication**: Multiply two large integers.
- **Division**: Divide one large integer by another.
- **Modulus**: Find the remainder of the division of one large integer by another.

## Data Structures

### Node

A node in the linked list representing a digit of the large integer.

      struct node {
          int data;             // Single digit of the large integer
          struct node* next;    // Pointer to the next node
      };
##  BigInteger:-
    A structure representing a large integer using a linked list.
    struct BigInteger {
    struct node* h;       // Head of the linked list
    int length;           // Number of digits in the number
    int sign;             // Sign of the number (1 for positive, -1 for negative)
    };
##  Functions:-
      initialize(char* s): Initializes a BigInteger from a string representation.
      add(struct BigInteger a, struct BigInteger b): Adds two BigInteger values.
      sub(struct BigInteger a, struct BigInteger b): Subtracts one BigInteger from another.
      mul(struct BigInteger a, struct BigInteger b): Multiplies two BigInteger values.
      div1(struct BigInteger a, struct BigInteger b): Divides one BigInteger by another.
      mod(struct BigInteger a, struct BigInteger b): Finds the modulus of one BigInteger divided by another.
      display(struct BigInteger a): Displays the BigInteger.

