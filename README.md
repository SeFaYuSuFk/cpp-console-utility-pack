[gemini-code-1782914061791.md](https://github.com/user-attachments/files/29554263/gemini-code-1782914061791.md)
# C++ Projects and Learning Journey 🚀

This repository contains the projects I have developed during my C++ learning process and the experiences I gained from each project. It is planned as a series of 5 projects.

---

## 🧮 Project 1: Calculator

**Project Goal:** To facilitate the calculation of large numbers that we have difficulty calculating in our minds or to perform calculations that we want to solve practically and quickly instead of wasting time manually.

**How It Works and Technical Specifications:**
* **`double` Variable:** Used in input and result values, anticipating that operations can be performed with very large numbers and decimal values.
* **`char` Operator Variable:** Preferred so the user can select the operation to be performed (since a single character is stored instead of text).
* **`switch` Control Structure:** Used because it offers a more practical and cleaner structure instead of long `if / else if` blocks.
* **Zero Division Error Management (`if-else`):** A separate control structure was established for the rule that a number cannot be divided by zero in division operations.

**What Did I Learn From This Project?**
* I learned the logic of the **`return`** statement located inside the `if` structure I set up to control the special case in the division operation. I experienced how to manage the program flow when an error occurs.

---

## 🔄 Project 2: Odd or Even Finder

**Project Goal:** To instantly find out whether a number entered by the user is odd or even. Going beyond a standard structure, this project aims to prevent the console from closing immediately after a single operation and allows the user to query as many numbers as they want.

**How It Works and Technical Specifications:**
* **`do-while` Loop:** Used so that the user can continuously enter numbers and the program does not close after each operation. Thanks to this structure, the control process is made uninterrupted.
* **Modulo Operation (`%`):** Built on the logic of determining the oddness or evenness of a number by checking whether it is exactly divisible by 2.

**What Did I Learn From This Project?**
* **Trial and Error Solution:** I developed this project mostly on my own, doing a lot of trial and error. I managed to build the logic myself without giving up.
* **Operator Confusion (A Fun Error):** At first, I accidentally used the logical AND (`& &`) operator instead of the modulo operator (`%`) due to their visual similarity. Realizing and fixing this error later made me more careful about the correct use of operators.
* **Loop Syntax Discovery:** Initially, I wrote the `while` condition at the top, right after the `do` command. However, realizing my mistake, I learned through experience and correcting my error that the `while` must be at the bottom, outside the curly brace `}`.

---

## 📅 Roadmap (Project Series)
* [x] **Project 1:** Calculator (Completed)
* [x] **Project 2:** Odd or Even Finder (Completed)
* [ ] **Project 3:** To Be Done in the Following Days
* [ ] **Project 4:** To Be Done in the Following Days
* [ ] **Project 5:** To Be Done in the Following Days

---
Developer: **Sefa Yusuf Kütük**
