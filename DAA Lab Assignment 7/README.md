# **DAA Lab Assignment 7**

This folder contains solutions for **Assignment 7** of the *Design and Analysis of Algorithms (DAA)* laboratory.  
The assignment focuses on **Greedy Algorithms**.

Each question includes:
- Problem statement
- Algorithm
- Step-by-step computation / explanation
- C program
- Sample input and output
- Output screenshot
- Interpretation of the result

---

## **📌 Q1 — Job Sequencing with Deadlines**

### **Concept**

Job Sequencing with Deadlines is a greedy algorithm used to schedule jobs in order to obtain the **maximum profit** while satisfying job deadlines.

### **Logic**

1. Sort jobs based on profit in descending order.
2. Create time slots according to the maximum deadline.
3. Assign each job to the **latest available slot before its deadline**.
4. Continue until all jobs are considered.
5. Compute the **total profit from scheduled jobs**.

### **Step-by-Step Computation**

1. Jobs are first arranged in **descending order of profit**.
2. The maximum deadline determines the **number of available time slots**.
3. Each job is placed in the latest possible slot that is free.
4. If a slot is already occupied, the algorithm checks earlier slots.
5. The scheduled jobs produce the **maximum achievable profit**.

Time Complexity: **O(n²)**

### **Files**

- `Q1.c`
- `DAA A7 Q1 OUTPUT.png`

---

## **📌 Q2 — Huffman Coding**

### **Concept**

Huffman Coding is a greedy algorithm used for **lossless data compression**.  
It generates optimal prefix codes based on the **frequency of characters** in the input string.

### **Logic**

1. Count the frequency of each character in the input string.
2. Create nodes for each character with its frequency.
3. Repeatedly combine the two nodes with the **smallest frequencies**.
4. Construct the **Huffman Tree** from these merged nodes.
5. Traverse the tree to assign **binary codes (0 for left, 1 for right)**.

### **Step-by-Step Computation**

1. The input string is analyzed to determine **character frequencies**.
2. Characters with the **lowest frequencies are merged first**.
3. The process continues until a single **Huffman tree** is formed.
4. Binary codes are assigned by traversing the tree from **root to leaf nodes**.
5. Characters with **higher frequency receive shorter codes**, reducing total encoding length.

Time Complexity: **O(n log n)**

### **Files**

- `Q2.c`
- `DAA A7 Q2 OUTPUT.png`

---

## **📂 Document Included**

- `DAA LAB ASSIGNMENT 7.docx` — contains problem statements, algorithms, step-by-step computations, programs, sample inputs, outputs, and interpretations.

---
