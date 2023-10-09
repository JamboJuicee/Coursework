#pragma once
#include <map>
std::map<std::string, std::string> BanksList = { {"Monobank", "5375 "}, {"Privatebank", "5457 "} };

class DebitCard
{
private:
    std::string bank_name;
    std::string card_number;
    int expiration_month;
    int expiration_year;
    std::string card_holder;
    int cvc;

public:
    DebitCard(std::string bankName, std::string cardNumber, int expirationMonth, int expirationYear, std::string cardHolder, int CVC)
        : bank_name{ bankName }, card_number{ cardNumber }, expiration_month{ expirationMonth }, expiration_year{ expirationYear }, card_holder{ cardHolder }, cvc{ CVC } {}
    DebitCard() : bank_name(""), card_number(""), expiration_month(0), expiration_year(0), card_holder(""), cvc(0) {}

    void addCard();
    void showCard();
};5