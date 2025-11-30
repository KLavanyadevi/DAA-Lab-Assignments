# **DAA Lab Assignment 1**

This folder contains solutions for **Assignment 1** of the *Design and Analysis of Algorithms (DAA)* laboratory.
Each question includes the **C program**, **output screenshot**, and an **interpretation of the logic used**.

---

## **📌 Q1 — Sum of First *n* Natural Numbers (Using Function)**

### **Logic**

The formula
[
\text{Sum} = \frac{n(n+1)}{2}
]
is used to compute the sum directly without loops.
This reduces time complexity to **O(1)**.

### **Files**

* `Q1.c`
* `DAA A1 Q1 OUTPUT.png`

---

## **📌 Q2 — Sum of Squares of First *n* Natural Numbers (Using Function)**

### **Logic**

We use the mathematical formula:
[
\text{Sum of squares} = \frac{n(n+1)(2n+1)}{6}
]
This avoids looping and computes the answer in **O(1)** time.

### **Files**

* `Q2.c`
* `DAA A1 Q2 OUTPUT.png`

---

## **📌 Q3 — Sum of Cubes of First *n* Natural Numbers (Using Function)**

### **Logic**

Using the identity:
[
1^3 + 2^3 + \cdots + n^3 = \left(\frac{n(n+1)}{2}\right)^2
]
We compute the square of the sum of first *n* natural numbers.

### **Files**

* `Q3.c`
* `DAA A1 Q3 OUTPUT.png`

---

## **📌 Q4 — Factorial of a Number (Using Recursion)**

### **Logic**

Recursion works using the relation:
[
n! = n \times (n-1)!
]
with the base case:
[
1! = 1
]
This naturally breaks the problem into smaller subproblems.

### **Files**

* `Q4.c`
* `DAA A1 Q4 OUTPUT.png`

---

## **📌 Q5 — Transpose of a 3×3 Matrix**

### **Logic**

During transpose,
[
a[i][j] \leftrightarrow a[j][i]
]
We swap elements above the main diagonal to avoid double-swapping.

Time complexity: **O(n²)** for a 3×3 matrix.

### **Files**

* `Q5.c`
* `DAA A1 Q5 OUTPUT.png`

---

## **📌 Q6 — Fibonacci Series up to *n* (Using Function)**

### **Logic**

We generate Fibonacci numbers iteratively:

[
F(n) = F(n-1) + F(n-2)
]

We start with 0 and 1, then continue until the next Fibonacci number exceeds the given limit *n*.

### **Files**

* `Q6.c`
* `DAA A1 Q6 OUTPUT.png`

---

## **📂 Document Included**

* `DAA LAB ASSIGNMENT 1.docx` — contains all questions, code, outputs, and interpretations.

---
