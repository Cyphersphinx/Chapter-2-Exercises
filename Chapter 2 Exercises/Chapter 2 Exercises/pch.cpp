// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>

// In general, ignore this file, but keep it around if you are using pre-compiled headers.

void Exer_2_1()
{
	// Completed Exercise 1
	std::cout << "**********************************\n";
	std::cout << "*     Programming Assignment 1   *\n";
	std::cout << "*      Computer Programming I    *\n";
	std::cout << "*        Author: Michael Reyes   *\n";
	std::cout << "*   Due Date: Saturday, Dec. 08  *\n";
	std::cout << "**********************************\n";
}

void Exer_2_2()
{
	// Completed Exercise 2
	std::cout << "CCCCCCCCC        ++                ++\n";
	std::cout << "CC*              ++                ++\n";
	std::cout << "CC*        ++++++++++++++    ++++++++++++++\n";
	std::cout << "CC*        ++++++++++++++    ++++++++++++++\n";
	std::cout << "Cc*              ++                ++\n";
	std::cout << "CCCCCCCCC        ++                ++\n";
}

void Exer_2_3()
{
	// Completed Exercise 3
	int num1 = 125;
	int num2 = 28;
	int num3 = -25;

	int average = num1 + num2 + num3;

	std::cout << "The average of " << num1 << " + " << num2 << " + " << num3 << " = " << average;
}

void Exer_2_4()
{
	// Completed Exercise 4
	double num1 = 75.35;
	double num2 = -35.56;
	double num3 = -15.76;

	double average = num1 + num2 + num3;

	std::cout << "The average of " << num1 << " + " << num2 << " + " << num3 << " = " << average;
}

void Exer_2_5()
{
	const double PI = 3.14;

	double radius;
	double area;
	double circumference;

	std::cout << "Enter the radius: ";
	std::cin >> radius;

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	std::cout << "Area = " << area << std::endl;
	std::cout << "Circumference = " << circumference << std::endl;
}

void Exer_2_6()
{
	std::string name;
	double studyHours;

	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "\nEnter amount of hours studies: ";
	std::cin >> studyHours;
	std::cout << std::endl;
	std::cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exam." << std::endl;

}

void Exer_2_7()
{
	float userdata = 0.00;
	int roundedNumber = 0;

	std::cout << "Please enter a value to be rounded: ";
	std::cin >> userdata;

	roundedNumber = (int)round(userdata);

	std::cout << "The value - " << userdata << " - rounded to the nearest integer is: " << roundedNumber;
}

void Exer_2_8()
{
	const int SECRET = 11;
	int num1, num2, newNum;
	
	const double RATE = 12.50;
	double hoursWorked, wage;
		
	std::string name ="";

	std::cout << "Please enter two integer values (separated by a space): ";
	std::cin >> num1 >> num2;
	std::cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2;

	newNum = (num1 * 2) + num2;
	std::cout << "The value of (num1 * 2) + num2 = " << newNum;

	newNum += SECRET;

	std::cout << "The value of newNum + SECRET = " << newNum;

	std::cout << "\nEnter a person's last name: ";
	std::cin >> name;

	std::cout << "\nPlease enter a decimal number that is between 0 and 70: ";
	std::cin >> hoursWorked;
	wage = hoursWorked * RATE;

	std::cout << "\nName: " << name;                  //output of the value of the variable name
	std::cout << "\nPay Rate: " << RATE;              //output the value of RATE 
	std::cout << "\nHours Worked: " << hoursWorked;     //output the value of the variable hoursWorked
	std::cout << "\nSalary: " << wage;                  //output the value of the variable wages



}

void Exer_2_9()
{
	double testscores[5] = { 0.00 };
	double avg = 0.00;

	int arraySize;

	std::cout << "Please enter five different test scores: ";
	std::cin >> testscores[0] >> testscores[1] >> testscores[2] >> testscores[3] >> testscores[4];

	arraySize = (sizeof testscores / sizeof testscores[0]);
	for (int i = 0; i < arraySize ; i++)
	{
		avg += testscores[i];
	}
	
	avg = avg / arraySize;
	std::cout << "\nThe average of all " << arraySize << " test scores is: " << avg;
}

void Exer_2_10()
{

}

void Exer_2_11()
{

}

void Exer_2_12()
{

}

void Exer_2_13()
{

}

void Exer_2_14()
{

}

void Exer_2_15()
{

}

void Exer_2_16()
{

}

void Exer_2_17()
{

}

void Exer_2_18()
{

}

void Exer_2_19()
{

}

void Exer_2_20()
{

}

void Exer_2_21()
{

}

void Exer_2_22()
{

}

void Exer_2_23()
{


}

void Exer_2_24()
{

}

void Exer_2_25()
{

}

void Exer_2_26()
{

}

void Exer_2_27()
{


}