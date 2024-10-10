#include <stdio.h>
int main() {
int choice;
double weeklySalary, yearlySalary,Food,Bills,Health,Education;
double weeklyExpenses, monthlyExpenses, yearlyExpenses;
double weeklyIncome, monthlyIncome, remainingAmount;
printf("1. Calculate Yearly Salary and Assign a Salary Class\n");
printf("2. Calculate Monthly Expenses and Assign a Household Class\n");
printf("3. Calculate Monthly Deficit or Surplus\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter your weekly salary: ");
scanf("%lf", &weeklySalary);
yearlySalary = weeklySalary * 52; // Assuming 52 weeks in a year
printf("Your yearly salary is: PKR%.2lf\n", yearlySalary);
// Assign a salary class (three possible classes)
if (yearlySalary > 900000) {
printf("Your salary class is High Income\n");
} else if (yearlySalary > 600000) {
printf("Your salary class is Middle Income\n");
} else if (yearlySalary < 300000) {
printf("Your salary class is Low Income\n");
}
break;
case 2:
weeklyExpenses = 0;
printf("Enter your weekly expenses in the following categories:\n");
printf("Food items: PKR");
scanf("%lf",&Food);
printf("Bills: PKR");
scanf("%lf", &Bills);
printf("Education: PKR");
scanf("%lf", &Education);
printf("Health: PKR");
scanf("%lf", &Health);
// Calculate monthly and yearly expenses
weeklyExpenses = Food+Bills+Education+Health;
monthlyExpenses = weeklyExpenses * 4; // Assuming 4 weeks in a month
yearlyExpenses = monthlyExpenses * 12;
printf("Total weekly expenses: PKR%.2lf\n", weeklyExpenses);
printf("Total monthly expenses: PKR%.2lf\n", monthlyExpenses);

printf("Total yearly expenses: PKR%.2lf\n", yearlyExpenses);
// Assign a household class (four possible classes)
if (yearlyExpenses > 1000000) {
printf("Your household class is Elite\n");
} else if (yearlyExpenses > 600000) {
printf("Your household class is High\n");
} else if (yearlyExpenses > 300000) {
printf("Your household class is Medium\n");
} else {
printf("Your household class is Low\n");
}
break;
case 3:
printf("Enter your weekly income: PKR");
scanf("%lf", &weeklyIncome);
printf("Enter your total monthly expenses: PKR");
scanf("%lf", &monthlyExpenses);
monthlyIncome = weeklyIncome * 4; // Assuming 4 weeks in a month
remainingAmount = monthlyIncome - monthlyExpenses;
printf("Monthly Income: PKR%.2lf\n", monthlyIncome);
printf("Monthly Expenses: PKR%.2lf\n", monthlyExpenses);
printf("Remaining Amount: PKR%.2lf\n", remainingAmount);
if (remainingAmount >= 0) {
printf("You have a surplus for the month.\n");
} else {
printf("You have a deficit for the month.\n");
}
break;
case 4:
printf("Program terminated. Goodbye!\n");
break;
default:
printf("Invalid choice. Please enter a valid option.\n");
}
return 0;
}