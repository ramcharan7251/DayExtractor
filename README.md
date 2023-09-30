# DayExtractor
# Date-to-Day Calculator

This is a C program that calculates the day of the week for a given date in the format "dd/mm/yyyy". 

## How to Use

1. **Compile the Program**: You can compile the program using a C compiler. For example, if you're using GCC, you can compile it as follows:

   ```sh
   gcc date_to_day.c -o date_to_day
 **1. Run the Program:** After compiling, run the program by executing the generated binary:
   ./date_to_day
 **2.Input Format:** Enter the date in the format "dd/mm/yyyy" when prompted.

 **3.Output:** The program will output the day of the week for the entered date.
### Algorithm Explanation
The program follows these steps to calculate the day of the week:

1.Input Parsing: It first parses the input date into day, month, and year components.

2.Year Code Odd Days Calculation: Calculates the odd days based on the year, considering different ranges of years (every 100 years, 200 years, etc.).

3.Date Code Odd Days Calculation: Calculates the odd days based on the day of the month.

4.Month Code Odd Days Calculation: Calculates the odd days based on the month, considering leap years.

5.Result Calculation: Combines the odd days from the above steps to calculate the final result.

6.Output: The program maps the result to the corresponding day of the week and displays it.
#### Author
Author: Parvatham Ram Charan
GitHub: ramcharan7251
##### Example
Here's an example of how to use the program:

enter the date in format(dd/mm/yyyy): 15/09/2023
15/09/2023 is Thursday

Feel free to use, modify, and distribute this program as needed. If you have any questions or suggestions for improvement, please don't hesitate to contact the author.









