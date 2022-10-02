#ifndef SHARE_H
#define SHARE_H
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

class Share
{
    private:
        std::string Ticker;
        std::string Name;
        int Current_Year;
        int Current_Price;
        int Units;
        double *Prices;
        int Value;
        int Cost_Base;

    public:
        Share(); // Default Constructor
        Share(std::string Ticker, int Current_Year); // Creates Share with the ticker provided when called which can give information to user
        Share(std::string Ticker, int Current_Year, int Units); // Creates Purchased share
        void Set_Prices(); // Gets share price information and sets it to prices
        std::string Get_Ticker(); // Returns Stock Ticker
        std::string Get_Name(); // Returns Stock Name
        int Get_Current_Year(); // Returns Current Year
        int Get_Current_Price(); // Returns Current Price of Stock
        int Get_Units(); // Returns Units Owned;
        double *Get_Prices(std::string Ticker); // Returns pointer to array with prices
        void Sell_Units(int Sold_Units); // Decreases units owned by amount provided
        bool Check_Valid_Ticker(std::string Ticker, int Current_Year); // Checks if company ticker exists in current year
        double Get_Price(int Year); // Returns price for year
        int Test(int Year);
        ~Share(); // Destructor

};

#endif