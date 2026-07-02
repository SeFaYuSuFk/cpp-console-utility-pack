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
* **Operator Confusion (A Fun Error):** At first, I accidentally used the logical OR (`||`) operator instead of the modulo operator (`%`) due to their visual similarity. Realizing and fixing this error later made me more careful about the correct use of operators.
* **Loop Syntax Discovery:** Initially, I wrote the `while` condition at the top, right after the `do` command. However, realizing my mistake, I learned through experience and correcting my error that the `while` must be at the bottom, outside the curly brace `}`.

---

## 📊 Project 3: Average Calculator

**Project Goal:** To calculate the average of any desired values quickly and accurately. It aims to provide a fun experience by communicating with the user in a conversational tone on the console. For example, it provided a practical solution for daily academic needs, such as calculating the average of my "Mathematics for Computers" course in the Software Development department at Cappadocia University.

**How It Works and Technical Specifications:**
* **`float` Variable:** Even though my own grades were integers, the program was intended for general use. Considering that other people might have fractional grades, the `float` variable was used for both input values and the final output to perform precise and fractional calculations without errors.
* **Conversational Interface:** A warmer and more interactive console text flow was designed while receiving data from the user.

**What Did I Learn From This Project?**
* **Independent Coding Confidence:** Completing this project from start to finish entirely on my own and quite easily made me feel that my coding logic is well established.
* **Order of Operations and the Power of Parentheses:** I experienced that when translating mathematical calculations into code, extra attention must be paid to the order of operations (e.g., multiplication/division coming before addition). I learned in a fun way that parentheses are of vital importance when writing formulas and can completely change the accuracy of the result.

---

## 📅 Roadmap (Project Series)
* [x] **Project 1:** Calculator (Completed)
* [x] **Project 2:** Odd or Even Finder (Completed)
* [x] **Project 3:** Average Calculator (Completed)
* [ ] **Project 4:** To Be Done in the Following Days
* [ ] **Project 5:** To Be Done in the Following Days

---
Developer: **Sefa Yusuf Kütük**
