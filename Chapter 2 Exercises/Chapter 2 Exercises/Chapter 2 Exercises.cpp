// Exer 2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include "pch.h"

#include <iostream>


int main()
{
	int Menu_Choice = 1;

	while (Menu_Choice != 0) {
		std::cout << "Exercises for Chapter 2\n";
		std::cout << "1. Program 1   \t\t 11. Program 11  \t\t 21. Program 21\n";
		std::cout << "2. Program 2   \t\t 12. Program 12  \t\t 22. Program 22\n";
		std::cout << "3. Program 3   \t\t 13. Program 13  \t\t 23. Program 23\n";
		std::cout << "4. Program 4   \t\t 14. Program 14  \t\t 24. Program 24\n";
		std::cout << "5. Program 5   \t\t 15. Program 15  \t\t 25. Program 25\n";
		std::cout << "6. Program 6   \t\t 16. Program 16  \t\t 26. Program 26\n";
		std::cout << "7. Program 7   \t\t 17. Program 17  \t\t 27. Program 27\n";
		std::cout << "8. Program 8   \t\t 18. Program 18\n";
		std::cout << "9. Program 9   \t\t 19. Program 19\n";
		std::cout << "10. Program 10 \t\t 20. Program 20\n";



		std::cout << "Please select the Exercise for Chapter 2 you wish to see run: ";
		std::cin >> Menu_Choice;
		std::cout << std::endl;
		std::cout << std::endl;


		switch (Menu_Choice) {
		case 1:
			Exer_2_1();
			break;
		case 2:
			Exer_2_2();
			break;
		case 3:
			Exer_2_3();
			break;
		case 4:
			Exer_2_4();
			break;
		case 5:
			Exer_2_5();
			break;
		case 6:
			Exer_2_6();
			break;
		case 7:
			Exer_2_7();
			break;
		case 8:
			Exer_2_8();
			break;
		case 9:
			Exer_2_9();
			break;
		case 10:
			Exer_2_10();
			break;
		case 11:
			Exer_2_11();
			break;
		case 12:
			Exer_2_12();
			break;
		case 13:
			Exer_2_13();
			break;
		case 14:
			Exer_2_14();
			break;
		case 15:
			Exer_2_15();
			break;
		case 16:
			Exer_2_16();
			break;
		case 17:
			Exer_2_17();
			break;
		case 18:
			Exer_2_18();
			break;
		case 19:
			Exer_2_19();
			break;
		case 20:
			Exer_2_20();
			break;
		case 21:
			Exer_2_21();
			break;
		case 22:
			Exer_2_22();
			break;
		case 23:
			Exer_2_23();
			break;
		case 24:
			Exer_2_24();
			break;
		case 25:
			Exer_2_25();
			break;
		case 26:
			Exer_2_26();
			break;
		case 27:
			Exer_2_27();
			break;
		case 0:
			break;

		} // end of switch (Menu_Choice)
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	} // end of while (Menu_Choice) 


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
