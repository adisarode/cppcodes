//Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

#include<iostream>

int main() {

	int age;
	std::cout<<"what is your age\n";
	std::cin>>age;

	if(age<12)
		std::cout<<"NO you are not eligible to get discount on Ticket\n";
	else
		std::cout<<"YES you are eligible to get discount on Ticket\n";
}
