// in out
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 

    float firstPrice{0.00};
    float lastPrice{0.00};
    float stride{0.00};
    float taxPercent{0.00};


//asking for input data and retrieving it from input buffer

    cout << "INPUT PART" <<endl;
    cout << "==========" <<endl;
    cout << "Enter first price: " <<endl;
    cin >> firstPrice;
    while (firstPrice<0 || firstPrice>100000)
    {
        cout << "ERROR. First price shouldn't be less then zero or exceed 100 000 SEK. Please input correct number." << endl;
        cin >> firstPrice;
    }
    
    cout << "Enter last price : " <<endl;
    cin >> lastPrice;
    while (lastPrice<0 || lastPrice>100000 || lastPrice < firstPrice)
    {
        cout << "ERROR. Last price shouldn't be less then zero or exceed 100 000 SEK and can't be less then first price. Please input correct number." << endl;
        cin >> lastPrice;
    }
    
    cout << "Enter stride : " <<endl;
    cin >> stride;
     while (stride<0 || stride>(lastPrice-firstPrice))
    {
        cout << "ERROR. Stride shouldn't be less then zero or more then actual difference between prices. Please input correct number." << endl;
        cin >> stride;
    }
    
    cout << "Enter tax percent: " <<endl;
    cin >> taxPercent;
      while (taxPercent<0 || taxPercent>100)
    {
        cout << "ERROR. Tax percent should be between 0 and 100. Please input correct number." << endl;
        cin >> taxPercent;
    }
    
//calculating and printing out tax table
    cout << "TAX TABLE" <<endl;
    cout << "==========" <<endl;
    cout << setw(10) <<right << "Price" << setw(15) <<right << "Tax" << setw(25)<<right << "Price with tax"<<endl;
    cout << "-------------------------------------------------------" <<endl;
    
    float tax{0.00};
    float currentPrice = firstPrice;
    
    while(currentPrice <= lastPrice)
    {
        tax = currentPrice*taxPercent/100;
        cout << setw(10) <<right << currentPrice << setw(15) <<right << tax << setw(25)<<right << currentPrice+tax<<endl;
        currentPrice=currentPrice+stride;
    }
    
   return 0; 
}