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

    std::cout << "Enter an amount in cents: ";
    int cents_amount {0};
    std::cin >> cents_amount;

    // Calculate the change 
    // - define the conversion rates and variables to store the change
    const int dollar_to_cents {100};
    const int quarter_to_cents {25};
    const int dime_to_cents {10};
    const int nickel_to_cents {5};
    const int penny_to_cents {1};

    // int dollar_change {};
    int quarter_change {};
    int dime_change {};
    int nickel_change {};
    int penny_change {};

    std::cout << "\nYou can provide the change as follows:" << std::endl;
    std::cout << "dollars: " << cents_amount / dollar_to_cents; // division operator with two integers as operands returns a flor integer
    cents_amount %= dollar_to_cents;
    
    // - repeat for quarters

    // - repeat for dimes

    // - repeat for nickels

    // - assign the rest to pennies and display 
    

    return 0;
}