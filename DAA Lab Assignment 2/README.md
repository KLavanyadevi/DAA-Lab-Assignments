# **DAA Lab Assignment 2**

This folder contains solutions for **Assignment 2** of the *Design and Analysis of Algorithms (DAA)* laboratory.
Each question includes the **C program**, **output screenshot**, and an **interpretation of the logic used**.

---

## **📌 Q1 — Bubble Sort**

### **Logic**

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.
After each pass, the largest element moves to its correct position at the end of the array.

Time Complexity:

* Best Case: **O(n)**
* Average & Worst Case: **O(n²)**

### **Files**

* `Q1_BubbleSort.c`
* `DAA A2 Q1 OUTPUT.png`

---

## **📌 Q2 — Insertion Sort**

### **Logic**

Insertion Sort works like sorting cards in hand.
Each element is picked and placed at the correct position in the already sorted part of the array.

Time Complexity:

* Best Case: **O(n)**
* Average & Worst Case: **O(n²)**

### **Files**

* `Q2_InsertionSort.c`
* `DAA A2 Q2 OUTPUT.png`

---

## **📌 Q3 — Selection Sort**

### **Logic**

Selection Sort selects the minimum element from the unsorted part of the array and swaps it with the first unsorted element.
This process continues until the array is completely sorted.

Time Complexity:

* Best, Average & Worst Case: **O(n²)**

### **Files**

* `Q3_SelectionSort.c`
* `DAA A2 Q3 OUTPUT.png`

---

## **📌 Q4 — Bucket Sort**

### **Logic**

Bucket Sort works by distributing elements into buckets based on their value range.
Each bucket stores the frequency of elements, and the sorted array is rebuilt by reading buckets in order.

This implementation works efficiently when the input values lie within a known range.

Time Complexity:

* Best & Average Case: **O(n + k)**
  (where *k* is the range of input values)

### **Files**

* `Q4_BucketSort.c`
* `DAA A2 Q4 OUTPUT.png`

---

## **📌 Q5 — Heap Sort**

### **Logic**

Heap Sort uses a **Max Heap** data structure.
The largest element is repeatedly removed from the heap and placed at the end of the array.

Steps:

1. Build a Max Heap
2. Swap root with last element
3. Heapify the reduced heap

Time Complexity:

* Best, Average & Worst Case: **O(n log n)**

### **Files**

* `Q5_HeapSort.c`
* `DAA A2 Q5 OUTPUT.png`

---

## **📂 Document Included**

* `DAA LAB ASSIGNMENT 2.docx` — contains all questions, C programs, output screenshots, and interpretations.


— **Summer 🌸**
