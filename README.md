# Date-to-Day Calculator

This is a C program that calculates the day of the week for a given date in the format "dd/mm/yyyy". 
## Author
**Author:** Parvatham Ram Charan

**GitHub:** [ramcharan7251](https://github.com/ramcharan7251)

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT) - see the [LICENSE](LICENSE) file for details.

## How to Use

1. **Compile the Program**: You can compile the program using a C compiler. For example, if you're using GCC, you can compile it as follows:

   ```sh
   gcc date_to_day.c -o date_to_day
**2.Run the Program:** After compiling, run the program by executing the generated binary:
                      ./date_to_day
                      
**3.Input Format:** Enter the date in the format "dd/mm/yyyy" when prompted.

**4.Output:** The program will output the day of the week for the entered date.

## Algorithm Explanation
The program follows these steps to calculate the day of the week:

**1.Input Parsing:** It first parses the input date into day, month, and year components.

**2.Year Code Odd Days Calculation:** Calculates the odd days based on the year, considering different ranges of years (every 100 years, 200 years, etc.).

**3.Date Code Odd Days Calculation:** Calculates the odd days based on the day of the month.

**4.Month Code Odd Days Calculation:** Calculates the odd days based on the month, considering leap years.

**5.Result Calculation:** Combines the odd days from the above steps to calculate the final result.

**6.Output:** The program maps the result to the corresponding day of the week and displays it.

## Example
Here's an example of how to use the program:

enter the date in format(dd/mm/yyyy): 15/09/2023
15/09/2023 is Thursday

## Uses

The "DayExtractor" program serves the following purposes and can be useful for various scenarios:

1. **Calculate Day of the Week:** The primary function of this program is to calculate and display the day of the week for a given date in the "dd/mm/yyyy" format. Users can input a date, and the program will provide the corresponding day of the week.

2. **Historical Research:** Historians, researchers, or anyone interested in historical events can use this program to determine the day of the week for specific dates in history. This can aid in understanding historical contexts and timelines.

3. **Planning and Scheduling:** Individuals and organizations can utilize this program for scheduling and planning activities or events on specific days of the week. For example, it can be helpful when setting up recurring meetings or events.

4. **Educational Purposes:** Students and educators can use this program to learn about date calculations and algorithms, such as Zeller's Congruence, which is used in this program.

5. **Calendar Conversion:** The program can assist in converting dates between different calendar systems or formats, especially when working with international date formats.

6. **Integration in Other Projects:** Developers can integrate the day calculation functionality of this program into their own projects, such as calendar applications or date-related utilities.

7. **Exploring Algorithm Logic:** Programmers and enthusiasts interested in algorithms can examine the implementation of this logic and gain insights into how date calculations work.

These are some of the key uses of the "DayExtractor" program. It provides a simple yet effective way to determine the day of the week for any given date, making it versatile and valuable for a wide range of applications.


## LIMITATIONS

While the "DayExtractor" program effectively calculates the day of the week for most dates, it's important to be aware of its limitations:

1. **Gregorian Calendar Only:** This program is designed to work with dates in the Gregorian calendar, which is the calendar system widely used today. It may not produce accurate results for dates outside the Gregorian calendar.

2. **Range of Supported Years:** The program is optimized for dates within a reasonable range, typically from the early 18th century to the late 21st century. Dates significantly outside this range may not yield correct results.

3. **Input Validation:** The program assumes valid input in the "dd/mm/yyyy" format. It does not include extensive input validation checks, so incorrect or invalid date formats may lead to unexpected behavior.

4. **Time Zone Independence:** The program calculates the day of the week based solely on the date components (day, month, year) without considering time zones. Therefore, it does not account for time zone differences that might affect the actual day of the week in a specific location.

5. **Leap Second Handling:** The program does not account for leap seconds or daylight saving time adjustments. It treats all days within a month equally, regardless of any unusual timekeeping events.

6. **Negative Years:** The program does not handle negative years, as they are not applicable in the Gregorian calendar.

7. **Edge Cases:** While the program handles most common cases accurately, edge cases, such as historical calendar reforms or rare date scenarios, may not produce expected results.

Please keep these limitations in mind when using the program, and ensure that your use case falls within its supported scope.
## CONTRIBUTING
Feel free to use, modify, and distribute this program as needed. If you have any questions or suggestions for improvement, please don't hesitate to contact the author.





