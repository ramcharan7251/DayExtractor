# Date-to-Day Calculator

This is a C program that calculates the day of the week for a given date in the format "dd/mm/yyyy". 

## How to Use

1. **Compile the Program**: You can compile the program using a C compiler. For example, if you're using GCC, you can compile it as follows:

   ```sh
   gcc date_to_day.c -o date_to_day
**2.Run the Program:** After compiling, run the program by executing the generated binary:
                      ./date_to_day
                      
**3.Input Format:** Enter the date in the format "dd/mm/yyyy" when prompted.

**4.Output:** The program will output the day of the week for the entered date.
### Algorithm Explanation
The program follows these steps to calculate the day of the week:

**1.Input Parsing:** It first parses the input date into day, month, and year components.

**2.Year Code Odd Days Calculation:** Calculates the odd days based on the year, considering different ranges of years (every 100 years, 200 years, etc.).

**3.Date Code Odd Days Calculation:** Calculates the odd days based on the day of the month.

**4.Month Code Odd Days Calculation:** Calculates the odd days based on the month, considering leap years.

**5.Result Calculation:** Combines the odd days from the above steps to calculate the final result.

**6.Output:** The program maps the result to the corresponding day of the week and displays it.

#### Author
**Author:** Parvatham Ram Charan

**GitHub:** ramcharan7251

##### Example
Here's an example of how to use the program:

enter the date in format(dd/mm/yyyy): 15/09/2023
15/09/2023 is Thursday

###### LIMITATIONS

While the "DayExtractor" program effectively calculates the day of the week for most dates, it's important to be aware of its limitations:

1. **Gregorian Calendar Only:** This program is designed to work with dates in the Gregorian calendar, which is the calendar system widely used today. It may not produce accurate results for dates outside the Gregorian calendar.

2. **Range of Supported Years:** The program is optimized for dates within a reasonable range, typically from the early 18th century to the late 21st century. Dates significantly outside this range may not yield correct results.

3. **Input Validation:** The program assumes valid input in the "dd/mm/yyyy" format. It does not include extensive input validation checks, so incorrect or invalid date formats may lead to unexpected behavior.

4. **Time Zone Independence:** The program calculates the day of the week based solely on the date components (day, month, year) without considering time zones. Therefore, it does not account for time zone differences that might affect the actual day of the week in a specific location.

5. **Leap Second Handling:** The program does not account for leap seconds or daylight saving time adjustments. It treats all days within a month equally, regardless of any unusual timekeeping events.

6. **Negative Years:** The program does not handle negative years, as they are not applicable in the Gregorian calendar.

7. **Edge Cases:** While the program handles most common cases accurately, edge cases, such as historical calendar reforms or rare date scenarios, may not produce expected results.

Please keep these limitations in mind when using the program, and ensure that your use case falls within its supported scope.
###### CONTRIBUTING
Feel free to use, modify, and distribute this program as needed. If you have any questions or suggestions for improvement, please don't hesitate to contact the author.





