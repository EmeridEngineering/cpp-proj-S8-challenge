// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!
*/

#include <iostream>

int main() {

    // Ask the user to provide the amount of cents
    std::cout << "Default Template." << std::endl;

    // Prompt and Store the amount of pennies

    // Calculate the change 
    // - define the conversion rates and variables to store the change
    //  - dollar to cents = 100
    //  - quarter to cents = 25
    //  - dime to cents = 10
    //  - nickel to cents = 5
    //  - penny to cents = 1

    // - divide amount of pennies by dollar to cents to get the number of dollars and display it

    // - use modulo compound assignment operator to get the rest of the pennies and proceed with quarters

    // - repeat for dimes

    // - repeat for nickels

    // - assign the rest to pennies and display 
    

    return 0;
}