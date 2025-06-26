#include <iostream> // required for input/output operations like 'std::cout' and 'std::cin'


 /*
 * Course: ECNG 1009
 * Assignment:  Semester GPA/ Grade Calculator
 * Date: June 26, 2025
 * Author: megan2807
 *
 This program prompts the user to enter five marks for a semester,
 * calculates the average percentage, and then determines and displays
 * the corresponding letter grade.
 *
 * IMPORTANT: This code is my original work for academic purposes.
 * It is licensed under the MIT License (see LICENSE file in the repository).
 * Unauthorized use or submission as one's own work without proper attribution
 * for academic credit is a violation of academic integrity policies.
 *
 * Full source code and licensing details available at:
 * https://github.com/megan2807/SemesterGradeCalculator
 */

/*
 * The main entry point of the program.
 *
 *This function handles user input for five marks, calculates their sum and
 * average percentage, and then determines and outputs the final letter grade
 * based on a predefined grading scale
 */


int main() {

	// Declare variables:
	int marks ; // To store each mark entered by the user.
	int averagePercent; // To store the calculated average percentage of the marks.
	int sum = 0; // To accumulate the total sum of all marks. Initialized to 0.

	// Loop to prompt the user for 5 marks.
	// The loop runs 5 times (for i = 0, 1, 2, 3, 4).
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter a mark: "; // Prompt the user to enter a mark.
		std::cin >> marks;  // Read the mark entered by the user.

		sum = sum + marks; // Add the current mark to the running total (sum).
		
	}

	// Calculate the average percentage by dividing the total sum by the number of marks (5).
	averagePercent = sum / 5;


	// --- Determine and Display the Grade ---
	// Use a series of if-else if statements to check the average percentage
	// against the grading scale and print the corresponding grade.
	if (averagePercent >= 85) {
		std::cout << "Your grade is: A+" << std::endl;
	}

	else if (averagePercent >= 75) {
		std::cout << "Your grade is: B+" << std::endl;
	}

	else if (averagePercent >= 65) {
		std::cout << "Your grade is: C+" << std::endl;
	}

	else if (averagePercent >= 50) {
		std::cout << "Your grade is: D+" << std::endl;
	}

	else {
		std::cout << "Your grade is: F" << std::endl;
	}
	return 0; // Indicate that the program executed successfully.
}