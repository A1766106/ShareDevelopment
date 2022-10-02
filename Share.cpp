#include "Share.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

using namespace std;

Share::Share()
{
    Ticker = "CBA";
    Name = "N/A";
    Current_Year = 2014;
    Current_Price = 0;
    Units = 0;
    Prices = new double[1];
    Prices[0] = 0;
    Value = 0;
    Cost_Base = 0;

}

Share::Share(string Ticker, int Current_Year)
{
    this->Ticker = Ticker;
    while(!Check_Valid_Ticker(Ticker, Current_Year))
    {
        cout << "Please re enter the ticker as the company information wasnt found: ";
        cin >> Ticker;
        this->Ticker = Ticker;
    }
    Prices = new double[9];
    Prices = Get_Prices(Ticker);

}

Share::Share(std::string Ticker, int Current_Year, int Units)
{

}

void Share::Set_Prices()
{

}

string Share::Get_Ticker()
{
    return "nothing";
}

string Share::Get_Name()
{
    return "nothing";
}

int Share::Get_Current_Year()
{
    return 0;
}

int Share::Get_Current_Price()
{
    return 0;
}

int Share::Get_Units()
{
    return 0;
}

double *Share::Get_Prices(string Ticker)
{
    double Prices[9];
    for(int i=2014;i<2023;i++)
    {
        string i_string = to_string(i);
        string FileToBeOpened = i_string + ".csv";

        ifstream Information;
        Information.open(FileToBeOpened);

        if(!Information.is_open()){
            cout << "File wasnt found and openned " << endl;
        }
        
        string Temp_Ticker;
        string Temp_Price;
        double Another_Temp_Price;
        string Temp_Name;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            getline(ss, Temp_Name, ',');
            getline(ss, Temp_Price, ',');
            Another_Temp_Price = stod(Temp_Price);
            if(Temp_Ticker == Ticker)
            {
                Prices[i-2014] = Another_Temp_Price;
                break;
            }
        }
        Information.close();
    }
    return Prices;
}

void Share::Sell_Units(int Sold_Units)
{

}

bool Share::Check_Valid_Ticker(std::string Ticker, int Current_Year)
{
    if(Current_Year == 2014)
    {
        ifstream Information;
        Information.open("2014.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2015)
    {
        ifstream Information;
        Information.open("2015.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2016)
    {
        ifstream Information;
        Information.open("2016.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2017)
    {
        ifstream Information;
        Information.open("2017.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2018)
    {
        ifstream Information;
        Information.open("2018.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
        else if(Current_Year == 2019)
    {
        ifstream Information;
        Information.open("2019.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2020)
    {
        ifstream Information;
        Information.open("2020.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2021)
    {
        ifstream Information;
        Information.open("2021.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    else if(Current_Year == 2022)
    {
        ifstream Information;
        Information.open("2022.csv");
        if(!Information.is_open()){
            return false;
        }
        
        string Temp_Ticker;
        string line;

        while(getline(Information, line)){
            stringstream ss(line);
            getline(ss, Temp_Ticker, ',');
            if(Temp_Ticker == Ticker)
            {
                return true;
                break;
            }
        }
        Information.close();
        return false;
            
    }
    return false;
}

double Share::Get_Price(int Year)
{
    return Prices[Year-2014];
}

int Test(int Year)
{
    return 0;
}

Share::~Share()
{
    delete Prices;
}