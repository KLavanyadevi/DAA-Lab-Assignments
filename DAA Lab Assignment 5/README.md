# **DAA Lab Assignment 5**

This folder contains solutions for **Assignment 5** of the *Design and Analysis of Algorithms (DAA)* laboratory.
The assignment focuses on **advanced sorting algorithms and tree data structures**.

Each question includes:

* C program
* Output screenshot
* Explanation of the logic used

---

## **📌 Q1 — Merge Sort**

### **Concept**

Merge Sort is a **divide-and-conquer sorting algorithm**.
It divides the array into smaller subarrays, sorts them recursively, and then merges the sorted subarrays to produce the final sorted array.

### **Logic**

1. Divide the array into two halves.
2. Recursively apply merge sort on both halves.
3. Merge the two sorted halves into a single sorted array.
4. Continue until the entire array is sorted.

Time Complexity: **O(n log n)**

### **Files**

* `Q1.c`
* `DAA A5 Q1 OUTPUT.png`

---

## **📌 Q2 — Quick Sort**

### **Concept**

Quick Sort is a **divide-and-conquer sorting algorithm** that selects a pivot element and partitions the array such that:

* Elements smaller than the pivot are placed on the left.
* Elements greater than the pivot are placed on the right.

### **Logic**

1. Choose a pivot element.
2. Rearrange the array so that elements smaller than the pivot come before it and larger elements come after it.
3. Recursively apply quick sort to the left and right subarrays.
4. Continue until all subarrays are sorted.

Average Time Complexity: **O(n log n)**
Worst Case Time Complexity: **O(n²)**

### **Files**

* `Q2.c`
* `DAA A5 Q2 OUTPUT.png`

---

## **📌 Q3 — Binary Search Tree (BST)**

### **Concept**

A Binary Search Tree (BST) is a **hierarchical data structure** in which:

* Left subtree contains values less than the root.
* Right subtree contains values greater than the root.

### **Logic**

1. Create a node for each input value.
2. Insert nodes following BST property.
3. Perform inorder traversal to display elements in sorted order.
4. Inorder traversal visits nodes as: Left → Root → Right.

Time Complexity:

* Insertion: **O(h)**
* Traversal: **O(n)**

(where *h* is the height of the tree)

### **Files**

* `Q3.c`
* `DAA A5 Q3 OUTPUT.png`

---

## **📂 Document Included**

* `DAA LAB ASSIGNMENT 5.docx` — contains problem statements, algorithms, C programs, sample inputs, outputs, and interpretations.

---
