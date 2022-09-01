// in out
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 

//p1
    cout << "Enter one integer: " <<endl;
    int x {0};
    cin >> x;
    cin.ignore(1000, '\n');
  
    cout << "You entered the number: " << x <<endl << flush;
    
    
//p2  
    cout << "Enter four integers: " <<endl;
    cin >> x;
    cout << "You entered the numbers: ";
    cout << x << " ";
    cin >> x;
    cout << x<< " ";
    cin >> x;
    cout << x << " ";
    cin >> x;
    cout << x << endl<< flush;
    
//p3
cout << "Enter one integer and one real number: " <<endl;
double d{0.0};
cin >> x;
cin >> d;
cin.ignore(1000, '\n');

cout << "The real is: " << d <<endl;
cout << "The integer is: " << x <<endl<< flush;

//p4
cout << "Enter one real and one integer number: " << endl;
cin >> d;
cin >> x;
cin.ignore(1000, '.');
cin.ignore(1000, '\n');
cout<< "The real is: " <<right << setfill('.') << setw(20)   << d <<endl;
cout<< "The integer is: " <<right << setfill('.') << setw(20)  << x <<endl<< flush;

//p4
cout << "Enter a character: " <<endl;
char a{' '};
cin >>a;
cin.ignore(1000, '\n');
cout << "You entered: "<< a <<endl<< flush;

//p5
cout << "Enter a word: " <<endl;
string s{" "};
cin >> s;
cout << "The word \'" 
<< s 
<< "\' has " 
<< s.size()
<< " character(s)." 
<<endl<< flush;

//p6
cout << "Enter an integer and a word: " << endl;
cin >> x;
cin >> s;
cin.ignore(1000, '\n');
cout << "You entered \'" << x <<"\' and \'" <<s << "\'." << endl<< flush;

//p7
cout << "Enter an character and a word: " << endl;
cin >> a;
cin >> s;
cin.ignore(1000, '\n');
cout << "You entered the string \"" << s <<"\" and the character \'" <<a << "\'." << endl<< flush;

//p8
cout << "Enter a word and real number: " << endl;
cin >>s;
cin >> d;

cout << "You entered \"" << s <<"\" and \"" <<d << "\"." << endl<< flush;
cin.ignore(1000, '\n');

//p9
cout << "Enter a text-line: " ;
string line;
getline(cin, line);

cout << "You entered \"" << line <<"\"" << endl<< flush;

//p10
cout << "Enter a second line of text: " << endl;
getline(cin, line);

cout << "You entered \"" << line <<"\"" << endl<< flush;

//p11
cout << "Enter three words: " << endl;

cin >> s;
cout << "You entered: \'" << s <<" " ;
    cin >> s;
    cout << s<< " ";
    cin >> s;
    cout << s << "\' " << endl<< flush;
 

return 0; 
}