#include "Card.h"

#include <iostream>
#include <string>
#include <vector>

void DebitCard::addCard()
{
	std::string temp_card_number;

	std::cout << "Debit card initialization\n";
	std::cout << "Choose Bank: 1 - Monobank, 2 - PrivateBank\n";
	int choice;
	std::cin >> choice; std::cout << std::endl;

	std::cin.ignore(32767, '\n');
	{
		do
		{
			std::cout << "Enter card number (with spaces, only last 3 groups of 4 numbers): ";
			std::getline(std::cin, temp_card_number);
			std::cout << std::endl;

		} while (temp_card_number.length() != 14);
		switch (choice)
		{
		case 1:
		{
			bank_name = "Monobank";
			card_number = BanksList["Monobank"] + temp_card_number;
			std::cout << "Entered card number: " << card_number << std::endl;
		}break;
		case 2:
		{
			bank_name = "Private bank";
			card_number = BanksList["Privatebank"] + temp_card_number;
			std::cout << "Entered card number: " << card_number << std::endl;
		}break;
		default:
		{
			bank_name = "Monobank";
			card_number = BanksList["Monobank"] + temp_card_number;
			std::cout << "Entered card number: " << card_number << std::endl;
		}break;
		}
		std::cout << "Enter your name surname: ";
		std::getline(std::cin, card_holder);
		std::cout << std::endl;
		do
		{
			std::cout << "Enter expiration month: "; std::cin >> expiration_month;
			std::cout << std::endl;
		} while (expiration_month >= 13 || expiration_month <= 0);
		do
		{
			std::cout << "Enter expiration year: "; std::cin >> expiration_year;
			std::cout << std::endl;
		} while (expiration_year >= 100 || expiration_year <= 22);
		do
		{
			std::cout << "Enter cvc: ";
			std::cin >> cvc;
			std::cout << std::endl;
		} while (cvc >= 1000 || cvc <= 99);
	}
}

void DebitCard::showCard()
{
	std::cout << "Bank: " << bank_name << std::endl;
	std::cout << "Card number: " << card_number << std::endl;
	std::cout << "Expiration date: " << expiration_month << "/" << expiration_year << std::endl;
	std::cout << "Card holder name: " << card_holder << std::endl;
	std::cout << "cvc: " << char(219) << char(219) << char(219) << std::endl;
}