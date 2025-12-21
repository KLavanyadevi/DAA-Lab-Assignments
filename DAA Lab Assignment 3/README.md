# **DAA Lab Assignment 3**

This folder contains solutions for **Assignment 3** of the *Design and Analysis of Algorithms (DAA)* laboratory.
The assignment focuses on **Graph Traversal Algorithms** — **Breadth First Search (BFS)** and **Depth First Search (DFS)**.

Each question includes:
- C program
- Output screenshot
- Explanation of logic used

---

## **📌 Q1 — Breadth First Search (BFS)**

### **Concept**

Breadth First Search (BFS) is a graph traversal algorithm that explores vertices **level by level**.
It starts from a given source vertex and visits all its immediate neighbors before moving deeper.

### **Logic**

1. Read number of vertices and adjacency matrix.
2. Choose a starting vertex.
3. Use a **queue** to store vertices to be visited.
4. Mark visited vertices to avoid repetition.
5. Dequeue a vertex, print it, and enqueue all unvisited adjacent vertices.
6. Continue until the queue becomes empty.

Time Complexity: **O(V²)** (using adjacency matrix)

### **Files**

- `BFS.c`
- `BFS_OUTPUT.png`

---

## **📌 Q2 — Depth First Search (DFS)**

### **Concept**

Depth First Search (DFS) is a graph traversal algorithm that explores a path **as deep as possible** before backtracking.
It uses **recursion** to move through the graph.

### **Logic**

1. Read number of vertices and adjacency matrix.
2. Choose a starting vertex.
3. Mark the starting vertex as visited.
4. Print the vertex.
5. Recursively visit all unvisited adjacent vertices.
6. Backtrack when no adjacent unvisited vertices are left.

Time Complexity: **O(V²)** (using adjacency matrix)

### **Files**

- `DFS.c`
- `DFS_OUTPUT.png`

---

## **📂 Document Included**

- `DAA LAB ASSIGNMENT 3.docx` — contains problem statements, algorithms, C programs, sample inputs, outputs, and interpretations.

---
