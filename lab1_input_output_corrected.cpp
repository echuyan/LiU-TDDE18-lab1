// in out
#include <iostream>
#include <string>
#include <iomanip>


// TODO: Complementary work: Don't repeat multiple cout statements in 
// a row. Instead of this: 
// 
// cout << ...; 
// cout << ...; 
// 
// Do this: 
// 
// cout << … 
//      << ...; 
// ---DONE---
//
// Comment: Same thing for cin.
//---DONE---


// TODO: Complementary work: Don't flush unnecessarily, there is a 
// reason that the buffer doesn't flush every time. 
//---DONE, BUT: those flushes were added for purpose. Without them the program is not stable against exessive input. For example if in first query you input two integers instead of one, it will mess up the whole logic. 
//So without these flushes the program works only if the input is correct.
//
// Comment: flush works on standard out (cout), not standard in (cin). ignore 
// ignores any extra input in the buffer. Your program works just fine without any extra
// flushes.
//---OK--- for now there are no extra flushes



using namespace std;

int main()
{

    //p1
    cout << "Enter one integer: ";
    int x{ 0 };
    cin >> x;
    cin.ignore(1000, '\n');

    cout << "You entered the number: " << x << endl << endl;

    //p2  
    cout << "Enter four integers: ";
    cin >> x;
    cout << "You entered the numbers: "
        << x << " ";
    cin >> x;
    cout << x << " ";
    cin >> x;
    cout << x << " ";
    cin >> x;
    cout << x << endl << endl;


    //p3
    cout << "Enter one integer and one real number: ";
    double d{ 0.0 };
    cin >> x
        >> d;
    cin.ignore(1000, '\n');
    std::cout << std::fixed;
    cout << left << setw(17) << "The real is: " << right << setw(8) << std::setprecision(3) << d << endl
        << left << setw(17) << "The integer is: " << right << setw(8) << x << endl << endl;

    //p4
    cout << "Enter one real and one integer number: ";
    cin >> d
        >> x;
    cin.ignore(1000, '\n');
    cout << left << setfill('.') << setw(16) << "The real is: " << right << setw(13) << std::setprecision(3) << d << endl
        << left << setfill('.') << setw(16) << "The integer is: " << right << setw(13) << x << endl << endl;

    //p4
    cout << "Enter a character: ";
    char a{ ' ' };
    cin >> a;
    cin.ignore(1000, '\n');
    cout << "You entered: " << a << endl << endl;

    //p5
    cout << "Enter a word: ";
    string s{ " " };
    cin >> s;
    cout << "The word \'"
        << s
        << "\' has "
        << s.size()
        << " character(s)."
        << endl << endl;

    //p6
    cout << "Enter an integer and a word: ";
    cin >> x
        >> s;
    cin.ignore(1000, '\n');
    cout << "You entered \'" << x << "\' and \'" << s << "\'." << endl << endl;

    //p7
    cout << "Enter an character and a word: ";
    cin >> a
        >> s;
    cin.ignore(1000, '\n');
    cout << "You entered the string \"" << s << "\" and the character \'" << a << "\'." << endl << endl;

    //p8
    cout << "Enter a word and real number: ";
    cin >> s
        >> d;
    cout << "You entered \"" << s << "\" and \"" << std::setprecision(3) << d << "\"." << endl;
    cin.ignore(1000, '\n');
    cout << endl;

    //p9
    cout << "Enter a text-line: ";
    string line;
    getline(cin, line);
    cout << "You entered \"" << line << "\"" << endl << endl;

    //p10
    cout << "Enter a second line of text: ";
    getline(cin, line);
    cout << "You entered \"" << line << "\"" << endl << endl;

    //p11
    cout << "Enter three words: ";
    cin >> s;
    cout << "You entered: \'" << s << " ";
    cin >> s;
    cout << s << " ";
    cin >> s;
    cout << s << "\' " << endl << endl;

    return 0;
}
