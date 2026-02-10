# **DAA Lab Assignment 4**

This folder contains solutions for **Assignment 4** of the *Design and Analysis of Algorithms (DAA)* laboratory.
The assignment focuses on **Minimum Spanning Tree (MST) algorithms**.

Each question includes:
- C program
- Output screenshot
- Explanation of the logic used

---

## **📌 Q1 — Prim’s Algorithm (Minimum Spanning Tree)**

### **Concept**

Prim’s Algorithm is a **greedy graph algorithm** used to find the Minimum Spanning Tree of a connected, weighted graph.
It starts from a chosen vertex and expands the tree by adding the minimum cost edge at each step.

### **Logic**

1. Start with any vertex and mark it as visited.
2. Find the minimum weight edge connecting a visited vertex to an unvisited vertex.
3. Add this edge to the MST.
4. Mark the new vertex as visited.
5. Repeat until all vertices are included in the tree.

Time Complexity: **O(V²)** (using adjacency matrix)

### **Files**

- `Q1.c`
- `DAA A4 Q1 OUTPUT.png`

---

## **📌 Q2 — Kruskal’s Algorithm (Minimum Spanning Tree)**

### **Concept**

Kruskal’s Algorithm is a **greedy algorithm** that constructs the Minimum Spanning Tree by selecting edges in increasing order of their weights.
It avoids cycles using a disjoint set (parent array).

### **Logic**

1. Sort all edges in increasing order of weight.
2. Select the smallest edge.
3. Check whether adding the edge forms a cycle.
4. If no cycle is formed, include the edge in the MST.
5. Repeat until the MST contains `n−1` edges.

Time Complexity: **O(E log E)** (due to edge sorting)

### **Files**

- `Q2.c`
- `DAA A4 Q2 OUTPUT.png`

---

## **📂 Document Included**

- `DAA LAB ASSIGNMENT 4.docx` — contains problem statements, algorithms, C programs, sample inputs, outputs, and interpretations.

---
