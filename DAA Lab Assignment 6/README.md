# **DAA Lab Assignment 6**

This folder contains solutions for **Assignment 6** of the *Design and Analysis of Algorithms (DAA)* laboratory.
The assignment focuses on **Self-Balancing Binary Search Trees**.

Each question includes:
- C program
- Output screenshot
- Explanation of the logic used

---

## **📌 Q1 — AVL Tree**

### **Concept**

AVL Tree is a self-balancing Binary Search Tree where the difference between heights of left and right subtrees is at most one.

### **Logic**

1. Insert elements like a Binary Search Tree.
2. Calculate the balance factor after insertion.
3. If the tree becomes unbalanced, perform rotations.
4. Rotations include Left, Right, Left-Right, and Right-Left.

Time Complexity: **O(log n)**

### **Files**

- `Q1.c`
- `DAA A6 Q1OUTPUT.png`

---

## **📌 Q2 — Red-Black Tree**

### **Concept**

Red-Black Tree is a balanced binary search tree where each node has a color (Red or Black). It maintains balance through recoloring and rotations.

### **Logic**

1. Insert nodes similar to BST.
2. Color new node red.
3. Fix violations using rotations and recoloring.
4. Ensure root is always black.

Time Complexity: **O(log n)**

### **Files**

- `Q2.c`
- `DAA A6 Q2 OUTPUT.png`

---

## **📂 Document Included**

- `DAA LAB ASSIGNMENT 6.docx` — contains problem statements, algorithms, C programs, sample inputs, outputs, and interpretations.

---
