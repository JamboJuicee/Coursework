#include "Program.h"
#include "DebitCard.h"

#include <iostream>
#include <vector>
#include <map>

std::vector<DebitCard> cardsList;

std::map<std::string, std::string> ShopList =
{
	{"Steam", "Games and Fun"},
	{"Amazon", "Online Shopping"},
	{"Starbucks", "Coffee and Beverages"},
	{"Apteka ANC", "Pharmacy and Health"},
	{"Zara", "Clothing and Fashion"},
	{"Home Depot", "Home Improvement"},
	{"Netflix", "Streaming and Entertainment"},
	{"Epicenter", "Retail Superstore"},
	{"Uber Eats", "Food Delivery"},
	{"Glovo", "Food Delivery"},
	{"Domria", "Accommodation"},
	{"Spotify", "Music Streaming"},
	{"Auchan", "Grocery and supermarkets"},
	{"H&M", "Clothing and Fashion"},
	{"Nike", "Sportswear"},
	{"KFC", "Fast Food"},
	{"Adidas", "Sportswear"},
};

void Program::makePayment(const std::string& shopName)
{
	auto it = ShopList.find(shopName);

	if (it != ShopList.end())
	{
		std::string category = it->second;
		

	}
}

void Program::run()
{
	int choice;
	std::cout << "Menu:\n1 - Add payment method\n2 - Remove payment method\n3 - Make payment\n4 - Show my wallet\n";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
	{
		DebitCard thisCard;
		thisCard.addCard();
		cardsList.push_back(thisCard);
	}break;
	case 2:
	{
		if (cardsList.size() > 0)
		{

		}
		else
		{
			std::cout << "Your wallet is empty, you do not have any cards.\n";
		}
	}break;
	case 3:
	{
		for (const auto& pair : ShopList)
		{
			int choice;
			std::cout << "Shop: " << pair.first << std::endl;
			std::cin >> choice;

			switch (choice)
			{
			case 1:
			{

			}break;
			case 2:
			{

			}break;
			case 3:
			{

			}break;
			case 4:
			{

			}break;
			case 5:
			{

			}break;
			case 6:
			{

			}break;
			case 7:
			{

			}break;
			case 8:
			{

			}break;
			case 9:
			{

			}break;
			case 10:
			{

			}break;
			case 11:
			{

			}break;
			case 12:
			{

			}break;
			case 13:
			{

			}break;
			case 14:
			{

			}break;
			case 15:
			{

			}break;
			case 16:
			{

			}break;
			case 17:
			{

			}break;
			}
		}
	}break;
	case 4:
	{
		if (cardsList.size() > 0)
		{
			for (auto& card : cardsList)
			{
				card.showCard();
			}
		}
	}break;
	}
}