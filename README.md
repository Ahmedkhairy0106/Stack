# 📌 Stack Implementation in C  

🚀 **This project is a complete implementation of the Stack data structure in C, built from scratch without using any built-in libraries.**  
It provides a **menu-driven program** that allows users to perform various stack operations easily.  

---

## 🔹 Features  
- ✔️ **Push & Pop operations** – Insert and remove elements from the stack.  
- ✔️ **Get Stack Size** – Retrieve the number of elements currently stored.  
- ✔️ **Retrieve Top & Bottom Elements** – Get the first (Bottom) and last (Top) elements in the stack.  
- ✔️ **Copy Stack** – Create an exact duplicate of the current stack without modifying it.  
- ✔️ **Destroy Stack** – Clear all stored elements.  
- ✔️ **Print Stack** – Display the current elements in the stack at any time.  

---

## 🔹 How to Run  
### 1️⃣ Run the program on your system  
1. **Ensure you have a C Compiler like `GCC` installed.**  
2. **Download or clone the repository from GitHub:**  
   ```bash
   git clone <repository_link>
   cd <repository_folder>
   ```
3. **Compile the program using `gcc`:**  
   ```bash
   gcc main.c stack.c -o stack_program
   ```
4. **Run the program:**  
   ```bash
   ./stack_program
   ```

---

## 🔹 Menu Options Explained  
📜 Once you run the program, you will see the following menu:  
```plaintext
===== Stack Menu =====
1. Read and Push
2. Pop
3. Stack Size
4. First Element (Top)
5. Last Element (Bottom)
6. Copy Stack
7. Destroy Stack
8. Print Stack
9. Print Copy Stack
10. Exit
Enter your choice:
```
Simply enter a number to perform the corresponding stack operation.

### 📌 Example Usage  
- 🔹 **Push an element to the stack**  
  If you select **(1 - Read and Push)** and enter `10`, the value `10` will be added to the stack.  

- 🔹 **Pop an element from the stack**  
  If you select **(2 - Pop)**, the top element will be removed and displayed.  

- 🔹 **Copy the stack**  
  If you select **(6 - Copy Stack)**, a new stack identical to the original one will be created.  

- 🔹 **Print the stack contents**  
  If you select **(8 - Print Stack)**, all currently stored elements will be displayed.  

---

## 🔹 Project Files  
📂 **main.c** – Contains the menu and user interaction logic.  
📂 **stack.h** – Defines function prototypes and the stack structure.  
📂 **stack.c** – Implements all stack operations such as `push`, `pop`, `copy_stack`, etc.  

---

## 🎯 Project Purpose  
This project aims to provide a **practical implementation of the Stack data structure** in C. It is ideal **for students and beginners** who want to understand how to implement data structures from scratch.

💡 **You are welcome to contribute and improve this project on GitHub!** 😊  

