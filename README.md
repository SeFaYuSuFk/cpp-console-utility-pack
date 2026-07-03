# C++ Projects and Learning Journey 🚀

This repository contains the projects I have developed during my C++ learning process and the experiences I gained from each project. It was planned as a series of 5 projects and has been successfully completed.

---

## 🧮 Project 1: Calculator

**Project Goal:** To facilitate the calculation of large numbers that we have difficulty calculating in our minds or to perform calculations that we want to solve practically and quickly instead of wasting time manually.

**How It Works and Technical Specifications:**
* **`double` Variable:** Used in input and result values, anticipating that operations can be performed with very large numbers and decimal values.
* **`char` Operator Variable:** Preferred so the user can select the operation to be performed.
* **`switch` Control Structure:** Used because it offers a more practical and cleaner structure instead of long `if / else if` blocks.
* **Zero Division Error Management (`if-else`):** A separate control structure was established for the rule that a number cannot be divided by zero in division operations.

**What Did I Learn From This Project?**
* I learned the logic of the **`return`** statement located inside the `if` structure I set up to control the special case in the division operation. I experienced how to manage the program flow when an error occurs.

---

## 🔄 Project 2: Odd or Even Finder

**Project Goal:** To instantly find out whether a number entered by the user is odd or even. Going beyond a standard structure, this project aims to prevent the console from closing immediately after a single operation and allows the user to query as many numbers as they want.

**How It Works and Technical Specifications:**
* **`do-while` Loop:** Used so that the user can continuously enter numbers and the program does not close after each operation.
* **Modulo Operation (`%`):** Built on the logic of determining the oddness or evenness of a number by checking whether it is exactly divisible by 2.

**What Did I Learn From This Project?**
* **Trial and Error Solution:** I developed this project doing a lot of trial and error.
* **Operator Confusion:** At first, I accidentally used the logical OR (`||`) operator instead of the modulo operator (`%`). Realizing and fixing this error made me more careful about the correct use of operators.
* **Loop Syntax Discovery:** I learned through experience that the `while` condition must be at the bottom, outside the curly brace.

---

## 📊 Project 3: Average Calculator

**Project Goal:** To calculate the average of any desired values quickly and accurately. For example, it provided a practical solution for daily academic needs, such as calculating the average of my "Mathematics for Computers" course in the Software Development department at Cappadocia University.

**How It Works and Technical Specifications:**
* **`float` Variable:** Considering that other people might have fractional grades, the `float` variable was used for both input values and the final output to perform precise and fractional calculations without errors.
* **Conversational Interface:** A warmer and more interactive console text flow was designed while receiving data from the user.

**What Did I Learn From This Project?**
* **Order of Operations and the Power of Parentheses:** I experienced that when translating mathematical calculations into code, extra attention must be paid to the order of operations (e.g., multiplication/division coming before addition). I learned in a fun way that parentheses are of vital importance when writing formulas.

---

## 🌡️ Project 4: Temperature Converter

**Project Goal:** To convert a temperature value entered in Celsius to Fahrenheit.

**How It Works and Technical Specifications:**
* **`double` Variable:** Both input and output data are stored using the `double` variable type in case fractional and decimal values arise during the conversion of temperature units.
* **Mathematical Algorithm:** After the Celsius value is taken from the user, the conversion formula is applied in the background to obtain the result.

**What Did I Learn From This Project?**
* I remembered the mathematical equation required to convert Celsius to Fahrenheit and practiced how I can directly integrate a physics/math formula into code.

---

## 🏆 Project 5: Finding the Largest and Smallest Number in an Array

**Project Goal:** To determine the largest and smallest values within a specified array of numbers. In this project, instead of taking the easy way out by getting data one by one from the keyboard and comparing them with simple `if-else if` blocks, arrays were consciously used to improve algorithmic thinking.

**How It Works and Technical Specifications:**
* **Arrays:** A list of 10 elements was created, and the data was placed into this array.
* **`for` Loop:** A loop structure controlled by the index variable `i` was established to scan all the elements in the array from beginning to end.
* **Scanning and Comparison Algorithm:** Inside the loop, each element was compared with the current largest and smallest values using `if` commands, necessary updates were made, and the results were printed on the screen.

**What Did I Learn From This Project?**
* **Index Logic:** I reinforced the fact that the first element in arrays starts with index `0`, not `1`, by practicing it.
* **Loop Boundaries:** I discovered that in order to scan the 10 elements in the array, I needed to write the limit value (for example, the number of elements in the array) as a condition inside the `for` loop.
* **Correct Initial Value (Referencing):** I learned how logical and vital it is in algorithm practice to assign the first element of the array (`dizi[0]`) as a reference instead of a random number when giving initial values to the largest (`buyuk`) and smallest (`kucuk`) variables.

---

## 📅 Roadmap (Project Series)
* [x] **Project 1:** Calculator (Completed)
* [x] **Project 2:** Odd or Even Finder (Completed)
* [x] **Project 3:** Average Calculator (Completed)
* [x] **Project 4:** Temperature Converter (Completed)
* [x] **Project 5:** Finding the Largest and Smallest Number in an Array (Completed)

---
Developer: **Sefa Yusuf Kütük**
