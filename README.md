🧮 Mini C Calculator



A beginner-friendly, function-driven calculator written in C, featuring robust input validation, error handling, and a clean command-line interface.



📌 Project Overview



This program simulates a mini calculator that supports the four basic arithmetic operations:



Addition (+)



Subtraction (-)



Multiplication (\*)



Division (/)



It is designed using modular functions, structured input processing with fgets and sscanf, and a loop system that allows the user to perform multiple calculations until they choose to exit.



This project was created to strengthen foundational skills in C programming, including:



Function design and prototypes



Input validation



Error handling



Control flow



CLI formatting



Basic arithmetic logic



✨ Features

✔️ Clean User Interface



Displays a formatted menu and well-structured output for readability.



✔️ Safe Input Handling



Uses fgets + sscanf to prevent invalid input from breaking the program.



✔️ Continuous Operation



Allows the user to repeat calculations (y/n) without restarting the program.



✔️ Full Error Handling



Rejects invalid numbers



Rejects invalid operators



Prompts users until correct input is provided



✔️ Modular Code Structure



Each task is separated into functions for clarity and maintainability.



🛠️ Technologies Used



C Language



Standard Library: stdio.h



📂 File Structure

mini\_c\_calculator/

│

├── calculatorTest.c      # Main source code

└── README.md             # Project documentation



🚀 How to Compile and Run



Make sure you have GCC installed.

Then use the following commands:



Compile:

gcc calculatorTest.c -o mini\_calc



Run:

./mini\_calc



📸 Example Output

\*-----------------------------------------\*

\*          MINI\_C\_CALCULATOR              \*

\*-----------------------------------------\*



\*  Enter first integer:\_\_\_\_\_\_\_\_\_\_\_ 5

\*  Enter second integer:\_\_\_\_\_\_\_\_\_\_ 3

\*  Select an operator (+ - \* /):\_\_ +



\*-----------------------------------------\*

\*  Integer One:                     5.0   \*

\*  Integer Two:                     3.0   \*

\*  Operator:                        +     \*

\*  Output:                          8.0   \*

\*-----------------------------------------\*

\*  Yours\_Truly:             Coconaut\_675  \*

\*-----------------------------------------\*



Continue (y/n):



🧠 What I Learned



This project helped me deepen my understanding of:



Function design in C



Handling user input safely



Working with loops and conditional statements



Error handling techniques



Building cleaner, readable C code



Using Git and GitHub to manage and publish C projects



🎯 Future Improvements



Planned upgrades include:



Handling division by zero



Supporting multiple operations (e.g., 2 + 3 \* 4)



Adding square root and power operations



Including a calculation history



Saving history to a text file



👨‍💻 Author



Ishmael V. (IzzyMuni)



Computer Science Student



Passionate about C programming and software development



Working on building a strong CS foundation through hands-on projects



⭐ Contribute



If you have suggestions or improvements, feel free to open an issue or submit a pull request.



