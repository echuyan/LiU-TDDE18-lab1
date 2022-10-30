#include <iostream>
#include <iomanip>
using namespace std;

// TODO: Comment: Do not use float when you are only interested in the discrete 
// values, as in 1, 2, 3. Especially not for control variables in for-loops.
//---DONE--

int main()
{
    cout << endl << "INPUT PART" << endl;
    cout << "=========" << endl;

    float firstprice{ 0.0 };
    cout << "Enter First Price: ";
    cin >> firstprice;
    while (firstprice < 0.0f)
    {
        cin.ignore(1000, '\n');
        cerr << "ERROR: First price must be at least 0 (zero) SEK " << endl;
        cout << "Enter First Price: ";
        cin >> firstprice;
    }

    float lastprice{ 0.0 };
    cout << "Enter Last Price: ";
    cin >> lastprice;
    while (lastprice <= firstprice)
    {
        cin.ignore(1000, '\n');
        cerr << "ERROR: Last Price must be G.T. First Price by at least 0.01 " << endl;
        cout << "Enter Last Price: ";
        cin >> lastprice;
    }

    float stride{ 0.0 };
    cin.ignore(1000, '\n');
    cout << "Enter Stride: ";
    cin >> stride;

    float const pdiv{ 100.0 };

    do
    {

        if (stride < 0.01f)
        {
            cerr << "ERROR:Stride must be at least 0.01 " << endl;
            cout << "Enter Stride: ";
            cin >> stride;
        }

        if (stride > (lastprice - firstprice))
        {
            cerr << "WARNING: Keep Stride equal-to OR below "
                << setprecision(2) << lastprice - firstprice << endl;
            cout << "Enter Stride: ";
            cin >> stride;
        }

    } while ((stride < 0.01f) || (stride > (lastprice - firstprice)));

    float taxrate{ 0.0 };
    cout << "Enter Tax Percentage: ";
    cin >> taxrate;

    while (taxrate < 0.0f || taxrate > 100.0f)
    {
        cin.ignore(1000, '\n');
        cerr << "ERROR:Tax Percentage must be at least 0 (and no more than 100) " << endl;
        cout << "Enter Tax Percentage: ";
        cin >> taxrate;
    }

    cout << endl << "TAX TABLE" << endl;
    cout << "=========" << endl;

    cout << setw(12) << "Price" << setw(12) << "Tax" << setw(18)
        << "Price With Tax" << endl;

    cout << setw(43) << setfill('-') << " " << setfill(' ') << endl;

    int iteration{ 0 };
    iteration = (lastprice - firstprice) / stride;

    float tax_price{ 0.0 };
    float tax{ 0.0 };

    for (int i{ 0 }; (i <= iteration); i++)
    {
        tax = (taxrate * firstprice) / pdiv;
        tax_price = firstprice + tax;

        cout << fixed
            << setw(12) << setprecision(2) << firstprice + stride * i << setw(12)
            << setprecision(2) << tax << setw(18) << setprecision(2)
            << tax_price << endl;
    }
    cout << endl;
    return 0;
}
