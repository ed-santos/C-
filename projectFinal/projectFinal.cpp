// projectFinal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

// Chapter 1 - Q#1
void q1() {
	cout << "Chapter 1 Q#1 - Add two integers\n\n";
	int num1a;
	int num1b;

	cout << "Please enter first number: ";
	cin >> num1a;

	cout << "Please enter second number: ";
	cin >> num1b;

	int total1 = num1a + num1b;
	cout << "The sum of both values are: " << total1;
	cout << endl;
	cout << endl;
}

//Chapter 1 - Q#2
void q2() {
	cout << "Chapter 1 Q#2 - Display CS!!\n\n";
	cout << "**************************************************\n\n";
	cout << "\t   C C C\t   S S S S\t  !!\n";
	cout << "\t C \t C\t S\t   S\t  !!\n";
	cout << "\tC\t\tS   \t\t  !!\n";
	cout << "       C\t\t S   \t\t  !!\n";
	cout << "       C\t\t   S S S S   \t  !!\n";
	cout << "       C\t\t\t   S      !!\n";
	cout << "\tC\t\t\t    S     !!\n";
	cout << "\t C \t C\t S\t   S\t  \n";
	cout << "\t   C C C\t   S S S S\t  00\n\n";
	cout << "**************************************************\n\n";
	cout << "\tComputer Science is Cool Stuff!!!\n\n";
	cout << endl;
}

//Chapter 1 - Q#3
void q3() {
	cout << "Chapter 1 Q#3 - Quarters, Nickles and Dimes\n\n";
	double quarters = .25;
	double dimes = .10;
	double nickles = .05;
	int q1;
	int d1;
	int n1;
	cout << "Please enter how many quarters: ";
	cin >> q1;
	cout << "Please enter how many dimes: ";
	cin >> d1;
	cout << "Please enter how many nickles: ";
	cin >> n1;
	double totalMoney = ((q1*quarters) + (d1*dimes) + (n1*nickles));

	cout << "The total amount of money you have is: $" << fixed << setprecision(2) << totalMoney;
	cout << endl;
	cout << endl;
}

//Chapter 1 - Q#4
void q4() {
	cout << "Chapter 1 Q#4 - Calculate Drop Distance Based on User Time Provided\n\n";
	int timeFour;
	int accel = 32;

	cout << "Please enter how much time in seconds the item is going to drop: ";
	cin >> timeFour;
	int distance = (accel * (timeFour*timeFour)) / 2;
	cout << "The total distance the item will drop is: " << fixed << setprecision(2) << distance << " feet\n\n";
	system("pause");
}

//Chapter 2 Q#2 Retro Salary
void q5() {

	const double inc = 7.6;
	int wage;

	cout << "Please enter your current wage: ";
	cin >> wage;

	double retro = ((wage*inc) / 100) / 2;
	double newAnn = (wage*inc) / 100 + wage;
	double newMonth = newAnn / 12;

	cout << "Thank you!\n\n";

	cout << "Your retractive pay due is: $" << retro << endl;
	cout << "Your new annual salary is: $" << newAnn << endl;
	cout << "Your new monthly salary will be: $" << newMonth << endl << endl;

}

//Chapter 2 Q#3 Retro Salary Monthly
void q6() {
	const double inc = 7.6;
	int wage;
	int months;

	cout << "Please enter your current wage: ";
	cin >> wage;
	cout << endl << "Please enter how many months to calculate for retro pay: ";
	cin >> months;

	double retroMonthly = ((wage*inc) / 100) / 12;
	double retroPay = retroMonthly * months;

	cout << "Thank you!\n\n";
	cout << "Your retractive pay due based on the number of months entered is: $" << retroPay << endl << endl;

}



//Chapter 2 Q#5 Venue Capacity
void q7() {
	int maxCap = 250;
	int attendees;

	cout << "Please enter the number of attendees: ";
	cin >> attendees;

	if (attendees <= maxCap) {
		int room = maxCap - attendees;
		cout << endl << "It will be legal to hold this event. Based on the max capcity, you can still accommodate " << room << " guests. Thank you" << endl << endl;
	}
	else {
		int extra = attendees - maxCap;
		cout << endl << "It will be illegal to hold this event due to fire regulations." << endl << "You will need to exclude " << extra << " guests in order to comply with fire regulations. Thank you" << endl << endl;
	}

	char runAgain;

	cout << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q7();
	}

	else {
		cout << endl << "Goodbye!" << endl << endl;
	}
}



//Chapter 2 Q#6 BasePay, Social, Federal, state, Union Dues, Insurance, Xtra Health Insurance
void q8() {
	double basePay = 16.75;
	double social = .06;
	double federal = .14;
	double state = .05;
	int dues = 10;
	int insurance = 35;
	double hours;
	int child;

	cout << "Please enter the amount of hours worked this week: ";
	cin >> hours;
	cout << endl << "Please enter how many dependents you have: ";
	cin >> child;

	if (hours <= 40 && child <= 2) {
		double gross = hours * basePay;
		double netSocial = gross * social;
		double netFederal = gross * federal;
		double netState = gross * state;
		double netPay = gross - (netSocial + netFederal + netState - dues);

		cout << endl << "Your gross pay for this week will be: $" << fixed << setprecision(2) << gross;
		cout << endl << "Less Social Security Tax: $" << fixed << setprecision(2) << netSocial;
		cout << endl << "Less Federal Tax: $" << fixed << setprecision(2) << netFederal;
		cout << endl << "Less State Tax: $" << fixed << setprecision(2) << netState;
		cout << endl << "Less Union Dues: $" << fixed << setprecision(2) << dues;
		cout << endl << "Your net pay for this week: $" << fixed << setprecision(2) << netPay;
		cout << endl << endl;
	}
	else if (hours <= 40 && child >= 3) {
		double gross = hours * basePay;
		double netSocial = gross * social;
		double netFederal = gross * federal;
		double netState = gross * state;
		double netPay = gross - (netSocial + netFederal + netState - dues - insurance);

		cout << endl << "Your gross pay for this week will be: $" << fixed << setprecision(2) << gross;
		cout << endl << "Less Social Security Tax: $" << fixed << setprecision(2) << netSocial;
		cout << endl << "Less Federal Tax: $" << fixed << setprecision(2) << netFederal;
		cout << endl << "Less State Tax: $" << fixed << setprecision(2) << netState;
		cout << endl << "Less Union Dues: $" << fixed << setprecision(2) << dues;
		cout << endl << "Less additional health insurance: $" << fixed << setprecision(2) << insurance;
		cout << endl << "Your net pay for this week: $" << fixed << setprecision(2) << netPay;
		cout << endl << endl;
	}

	else if (hours > 40 && child <= 2) {
		double otHours = hours - 40;
		double otPay = otHours * 1.5;
		double gross = 40 * basePay + otPay;
		double netSocial = gross * social;
		double netFederal = gross * federal;
		double netState = gross * state;
		double netPay = gross - (netSocial + netFederal + netState - dues);

		cout << endl << "Your gross pay for this week will be: $" << fixed << setprecision(2) << gross;
		cout << endl << "Your overtime pay is: $" << fixed << setprecision(2) << otPay;
		cout << endl << "Less Social Security Tax: $" << fixed << setprecision(2) << netSocial;
		cout << endl << "Less Federal Tax: $" << fixed << setprecision(2) << netFederal;
		cout << endl << "Less State Tax: $" << fixed << setprecision(2) << netState;
		cout << endl << "Less Union Dues: $" << fixed << setprecision(2) << dues;
		cout << endl << "Your net pay for this week: $" << fixed << setprecision(2) << netPay;
		cout << endl << endl;
	}
	else {
		double otHours = hours - 40;
		double otPay = otHours * 1.5;
		double gross = 40 * basePay + otPay;
		double netSocial = gross * social;
		double netFederal = gross * federal;
		double netState = gross * state;
		double netPay = gross - (netSocial + netFederal + netState - dues - insurance);

		cout << endl << "Your gross pay for this week will be: $" << fixed << setprecision(2) << gross;
		cout << endl << "Your overtime pay is: $" << fixed << setprecision(2) << otPay;
		cout << endl << "Less Social Security Tax: $" << fixed << setprecision(2) << netSocial;
		cout << endl << "Less Federal Tax: $" << fixed << setprecision(2) << netFederal;
		cout << endl << "Less State Tax: $" << fixed << setprecision(2) << netState;
		cout << endl << "Less Union Dues: $" << fixed << setprecision(2) << dues;
		cout << endl << "Less additional health insurance: $" << fixed << setprecision(2) << insurance;
		cout << endl << "Your net pay for this week: $" << fixed << setprecision(2) << netPay;
		cout << endl << endl;
	}

	char runAgain;
	cout << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q8();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}
}

//Chapter 2, Q#8 Well Casing in Depth
void q9() {
	double casing;
	double depth;

	cout << "Please enter the well casing diameter in inches: ";
	cin >> casing;
	cout << endl << "Please enter the well depth in feet: ";
	cin >> depth;
	
	double vol;
	double pi = 3.14;

	vol = pi*(casing*casing)*depth;

	cout << endl << "This well will approximately hold " << vol << " gallons of water.\n\n";

}

//Chapter 2, Q#9 Ten Whole Numbers
void q10() {
	double sumPos = 0;
	double sumNeg = 0;
	double sumTotal = 0, number;

	cout << "Enter 10 whole numbers which are unique: ";

	for (int i = 0; i < 10; i++) {
		cin >> number;
		sumTotal += number;
		if (number > 0)
			sumPos += number;
		else
			sumNeg += number;
	}

	cout << "Sum of positive number: " << sumPos << endl;
	cout << "Sum of negative number: " << sumNeg << endl;
	cout << "Sum of all numbers: " << sumTotal << endl;
}

//Chapter2, Q#10 Ten Whole Numbers *Revised
void q11() {
	
	double sumPos = 0;
	double sumNeg = 0;
	double sumTotal = 0;
	double number;
	int TotalN = 0;
	int TotalP = 0;

	cout << "Enter 10 whole numbers which are unique: ";

	for (int i = 0; i <= 10; i++) {
	cin >> number;
	sumTotal += number;
	
	if (number > 0) {
		sumPos += number;
		TotalP++;
	}
	else {
		sumNeg += number;
		TotalN++;
	}
	}
	
	cout << "Sum of all positve number: " << sumPos << endl;
	cout << "Average of all positve number: " << sumPos / TotalP << endl;

	cout << "Sum of all negative number: " << sumNeg << endl;
	cout << "Average of all negative number: " << sumNeg / TotalN << endl;

	cout << "Sum of all numbers: " << sumTotal << endl;
	cout << "Average of all numbers: " << sumTotal / 10 << endl;

}

//Chapter 2, Q#14 Average of Exercises
void q12() {
	int exer;
	
	cout << "How many exercises to input? ";
	cin >> exer;

	 if (exer == 1) {
		float exer1;
		float poss1;
		
		cout << endl << "Score received for exercise 1: ";
		cin >> exer1;
		cout << endl << "Total points possible for exercise 1: ";
		cin >> poss1;

		float result = (exer1 / poss1)*100;

		cout << endl << endl << "Your total is " << exer1 << " out of " << poss1 << ", or " << result << "%" << endl << endl;
	}
	else if (exer == 2) {
		int exer1;
		int exer2;
		int poss1;
		int poss2;

		cout << endl << "Score received for exercise 1: ";
		cin >> exer1;
		cout << endl << "Total points possible for exercise 1: ";
		cin >> poss1;
		cout << endl << "Score received for exercise 2: ";
		cin >> exer2;
		cout << endl << "Total points possible for exercise 2: ";
		cin >> poss2;

		float exerTotal = exer1 + exer2;
		float possTotal = poss1 + poss2;
		float result = (exerTotal / possTotal) * 100;

		cout << endl << endl << "Your total is " << exerTotal << " out of " << possTotal << ", or " << result << "%" << endl << endl;
	}
	else if (exer == 3) {
		int exer1;
		int exer2;
		int exer3;
		int poss1;
		int poss2;
		int poss3;

		cout << endl << "Score received for exercise 1: ";
		cin >> exer1;
		cout << endl << "Total points possible for exercise 1: ";
		cin >> poss1;
		cout << endl << "Score received for exercise 2: ";
		cin >> exer2;
		cout << endl << "Total points possible for exercise 2: ";
		cin >> poss2;
		cout << endl << "Score received for exercise 3: ";
		cin >> exer3;
		cout << endl << "Total points possible for exercise 3: ";
		cin >> poss3;

		float exerTotal = exer1 + exer2 + exer3;
		float possTotal = poss1 + poss2 + poss3;
		float result = (exerTotal / possTotal) * 100;

		cout << endl << endl << "Your total is " << exerTotal << " out of " << possTotal << ", or " << result << "%" << endl << endl;
	}
	else {
		cout << "Please enter a value from 1-3";

		system("pause\n\n");
		q11();
	}

}

//Chapter 4, Q#1 Home Ownership Cost
void q13() {
	float annMortgage = .03;
	float initialInterest = .06;
	float taxSavingsRate = .35;
	float homePrice, downPmt, initialBal;

	cout << "Annual after-tax cost of home ownership for the first year" << endl;

	cout << "Cost of house $ ";
	cin >> homePrice;
	cout << "Down payment amount $ ";
	cin >> downPmt;

	initialBal = homePrice - downPmt;
	double annMortgageCost = initialBal * annMortgage;
	double firstYearInt = initialBal * initialInterest;
	double taxSavingsTot = annMortgageCost * taxSavingsRate;


	cout << endl << "Annual after-tax cost of home ownership for the first year is $" << fixed << setprecision(2) << annMortgageCost - taxSavingsTot + (firstYearInt*.65);

	cout << endl << "Your initial loan balance is $" << fixed << setprecision(2) << initialBal << endl;
	cout << "Your annual mortgage cost is $" << fixed << setprecision(2) << annMortgageCost << endl;
	cout << "With a tax savings each year of $" << fixed << setprecision(2) << taxSavingsTot << endl << endl;

	char runAgain;
	cout << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q13();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}

}

//Chapter 4, Q#2 Hat, Jacket, Waist Sizes
void q14() {
	double height, weight;
	int age;

	cout << "Enter weight of person in pounds: ";
	cin >> weight;
	cout << "Enter height of person in inches: ";
	cin >> height;
	cout << "Enter age of person: ";
	cin >> age;

	double hatS = (weight / height)*2.9;
	cout << endl << "This person's hat size is: " << fixed << setprecision(2) << hatS;

	double jacketS = (height*weight) / 288;
	if (age <= 39)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS;
	else if (age <= 49)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.125;
	else if (age <= 59)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.25;
	else if (age <= 69)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.375;
	else if (age <= 79)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.50;
	else if (age <= 89)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.625;
	else if (age <= 99)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.750;
	else
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.875;

	double waistS = weight / 5.7;
	double xtraWaist = ((age - 28) / 2)*.10;
	double xtra = waistS + xtraWaist;

	if (age <= 28)
		cout << endl << "This person's waist size is: " << fixed << setprecision(2) << waistS << " inches";
	else
		cout << endl << "This person's waist size is: xtra " << fixed << setprecision(2) << xtra << " inches";

	char runAgain;
	cout << endl << endl << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q14();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}
}

//Chapter 4, Q#3 Hat, Jacket and Waist - Modified
void q15() {
	double height, weight;
	int age;

	cout << "Enter weight of person in pounds: ";
	cin >> weight;
	cout << "Enter height of person in inches: ";
	cin >> height;
	cout << "Enter age of person: ";
	cin >> age;

	double hatS = (weight / height)*2.9;
	cout << endl << "This person's hat size is: " << fixed << setprecision(2) << hatS;

	double jacketS = (height*weight) / 288;
	if (age <= 39) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 49) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.125;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 59) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.25;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 69) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.375;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 79) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.50;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 89) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.625;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 99) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.750;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.875;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}

	double waistS = weight / 5.7;
	double xtraWaist = ((age - 28) / 2)*.10;
	double xtra = waistS + xtraWaist;

	if (age <= 28) {
		cout << endl << "This person's waist size is: " << fixed << setprecision(2) << waistS << " inches";
		double fWaist = waistS + 0.5;
		cout << endl << "In 10 years, this person's waist size will be: " << fixed << setprecision(2) << fWaist << " inches";
	}
	else {
		cout << endl << "This person's waist size is: xtra " << fixed << setprecision(2) << xtra << " inches";
		double fWaist = xtra + 0.5;
		cout << endl << "In 10 years, this person's waist size will be: " << fixed << setprecision(2) << fWaist << " inches";
	}

	char runAgain;
	cout << endl << endl << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q15();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;

	}
}

//Chapter 4, Q#6 Dollar, Quarter, Dime, Nickle and Twinkie
double getCoin() {
	int twinkie = 350;
	int dollar = 100;
	int quarter = 25;
	int dimes = 10;
	int nickle = 5;
	int choice;
	cout << "\n Which is the next coin? ";
	cout << "\n #1 Dollar";
	cout << "\n #2 Quarter";
	cout << "\n #3 Dime";
	cout << "\n #4 Nickle";

	cout << "\n Enter an integer corresponding to coin: ";
	cin >> choice;

	if (choice == 1)
		return dollar;
	else if (choice == 2)
		return quarter;
	else if (choice == 3)
		return dimes;
	else if (choice == 4)
		return nickle;
	else {
		cout << "Invalid choice\m";
		return 0;
	}
}
void q16() {

	int twinkie = 350;
	int dollar = 100;
	int quarter = 25;
	int dimes = 10;
	int nickle = 5;

	double amount = 0;
	cout << "\n This machine serves Twinkie to you @ $3.50 \n";

	while (amount < twinkie) {
		amount += getCoin();
	}

	cout << "\n Enjoy your deep fried twinkies";
	cout << "\n Change amount is " << (amount -
		twinkie) << " cents\n";

}

//Chapter 4, Q#1 Home Ownership Cost
void q17() {
	float annMortgage = .03;
	float initialInterest = .06;
	float taxSavingsRate = .35;
	float homePrice, downPmt, initialBal;

	cout << "Annual after-tax cost of home ownership for the first year" << endl;

	cout << "Cost of house $ ";
	cin >> homePrice;
	cout << "Down payment amount $ ";
	cin >> downPmt;

	initialBal = homePrice - downPmt;
	double annMortgageCost = initialBal * annMortgage;
	double firstYearInt = initialBal * initialInterest;
	double taxSavingsTot = annMortgageCost * taxSavingsRate;


	cout << endl << "Annual after-tax cost of home ownership for the first year is $" << fixed << setprecision(2) << annMortgageCost - taxSavingsTot + (firstYearInt*.65);

	cout << endl << "Your initial loan balance is $" << fixed << setprecision(2) << initialBal << endl;
	cout << "Your annual mortgage cost is $" << fixed << setprecision(2) << annMortgageCost << endl;
	cout << "With a tax savings each year of $" << fixed << setprecision(2) << taxSavingsTot << endl << endl;

	char runAgain;
	cout << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q17();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}

}

//Chapter 4, Q#2 Hat, Jacket, Waist Sizes
void q18() {
	double height, weight;
	int age;

	cout << "Enter weight of person in pounds: ";
	cin >> weight;
	cout << "Enter height of person in inches: ";
	cin >> height;
	cout << "Enter age of person: ";
	cin >> age;

	double hatS = (weight / height)*2.9;
	cout << endl << "This person's hat size is: " << fixed << setprecision(2) << hatS;

	double jacketS = (height*weight) / 288;
	if (age <= 39)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS;
	else if (age <= 49)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.125;
	else if (age <= 59)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.25;
	else if (age <= 69)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.375;
	else if (age <= 79)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.50;
	else if (age <= 89)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.625;
	else if (age <= 99)
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.750;
	else
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.875;

	double waistS = weight / 5.7;
	double xtraWaist = ((age - 28) / 2)*.10;
	double xtra = waistS + xtraWaist;

	if (age <= 28)
		cout << endl << "This person's waist size is: " << fixed << setprecision(2) << waistS << " inches";
	else
		cout << endl << "This person's waist size is: xtra " << fixed << setprecision(2) << xtra << " inches";

	char runAgain;
	cout << endl << endl << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q18();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;
	}
}

//Chapter 4, Q#3 Hat, Jacket and Waist - Modified
void q19() {
	double height, weight;
	int age;

	cout << "Enter weight of person in pounds: ";
	cin >> weight;
	cout << "Enter height of person in inches: ";
	cin >> height;
	cout << "Enter age of person: ";
	cin >> age;

	double hatS = (weight / height)*2.9;
	cout << endl << "This person's hat size is: " << fixed << setprecision(2) << hatS;

	double jacketS = (height*weight) / 288;
	if (age <= 39) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 49) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.125;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 59) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.25;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 69) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.375;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 79) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.50;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 89) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.625;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else if (age <= 99) {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.750;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}
	else {
		cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.875;
		double fJacket = jacketS + 0.125;
		cout << endl << "In 10 years, this person's jacket size will be: " << fixed << setprecision(2) << fJacket;
	}

	double waistS = weight / 5.7;
	double xtraWaist = ((age - 28) / 2)*.10;
	double xtra = waistS + xtraWaist;

	if (age <= 28) {
		cout << endl << "This person's waist size is: " << fixed << setprecision(2) << waistS << " inches";
		double fWaist = waistS + 0.5;
		cout << endl << "In 10 years, this person's waist size will be: " << fixed << setprecision(2) << fWaist << " inches";
	}
	else {
		cout << endl << "This person's waist size is: xtra " << fixed << setprecision(2) << xtra << " inches";
		double fWaist = xtra + 0.5;
		cout << endl << "In 10 years, this person's waist size will be: " << fixed << setprecision(2) << fWaist << " inches";
	}

	char runAgain;
	cout << endl << endl << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
	cin >> runAgain;

	if (runAgain == 'y' || runAgain == 'Y') {
		cout << endl << endl;
		q19();
	}
	else {
		cout << endl << "Goodbye!" << endl << endl;

	}
}

//Chapter 4, Q#6 Dollar, Quarter, Dime, Nickle and Twinkie
void q20() {

	int twinkie = 350;
	int dollar = 100;
	int quarter = 25;
	int dimes = 10;
	int nickle = 5;

	double amount = 0;
	cout << "\n This machine serves Twinkie to you @ $3.50 \n";

	while (amount < twinkie) {
		amount += getCoin();
	}

	cout << "\n Enjoy your deep fried twinkies";
	cout << "\n Change amount is " << (amount -
		twinkie) << " cents\n";

}

int main() 
{
	cout << "Welcome to Edward Santos' Final C++ project!!\n\n";

	//q1();
	//q2();
	//q3();
	//q4();
	//q5();
	//q6();
	//q7();
	//q8();
	//q9();
	//q10();
	//q11();
	//q12();
	//q13();
	//q14();
	//q15();
	//q16();
	//q17();
	//q18();
	//q19();
	//q20();

	system("pause");

    return 0;
}

