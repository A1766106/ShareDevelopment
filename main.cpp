#include "Share.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std; 

int main()
{
    system("Clear");
    string Given_Ticker;
    int Given_Year = 2014;
    cout << "Please enter the ticker for the share you would like information on: ";
    cin >> Given_Ticker;
    Share s1;
    for(int i=2014;i<2023;i++)
    {
        cout << Given_Ticker << "'s Price in " << i << " was: " << s1.Get_Price(i);
    }



    return 0;
}