Explanation
Input Marks:

The program first defines a constant NUM_SUBJECTS representing the number of subjects (5 in this case).
An array marks of size NUM_SUBJECTS is used to store the marks of each subject.
The user is prompted to enter the marks for each subject. These marks are stored in the array and added to the total.
Display Total Marks:

The total marks obtained by the student are displayed.
Calculation Choice:

The user is given three options: Percentage, CGPA, or SGPA.
The user's choice is read and stored in the variable choice.
Percentage Calculation:

Percentage is calculated using the formula:
Percentage
=
(
total
NUM_SUBJECTS
×
100.0
)
×
100
Percentage=( 
NUM_SUBJECTS×100.0
total
​
 )×100
The result is displayed.
CGPA Calculation:

CGPA is calculated assuming the maximum marks for each subject is 100. The formula used is:
CGPA
=
total
NUM_SUBJECTS
×
10.0
CGPA= 
NUM_SUBJECTS×10.0
total
​
 
The result is displayed.
SGPA Calculation:

SGPA is calculated similarly to CGPA, using the same formula.
The result is displayed.
Invalid Choice:

If the user enters an invalid choice, an error message is displayed.

Example :-
Enter the marks of 5 subjects:
Subject 1: 85
Subject 2: 90
Subject 3: 78
Subject 4: 88
Subject 5: 92

Total marks: 433
What would you like to calculate?
1. Percentage
2. CGPA
3. SGPA
Enter your choice (1, 2, or 3): 1
Percentage: 86.6%
