#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    ifstream ifs{ "example1.txt" };
    string s{};
    string shortestWord{};
    string longestWord{};
    int wordCount{ 0 };
    float averageWordLength{ 0 };

    while (ifs >> s)
    {
        if (wordCount == 0) { shortestWord = s; longestWord = s; }
        wordCount++;
        averageWordLength = averageWordLength + s.size();
        if (shortestWord.size() > s.size()) { shortestWord = s; }
        if (longestWord.size() < s.size()) { longestWord = s; }
    }

    averageWordLength = averageWordLength / wordCount;

    cout << "There are " << wordCount << " words in the given file." << endl;
    cout << "The shortest word in file is " << shortestWord << endl;
    cout << "The longest word in file is " << longestWord << endl;
    cout << "Average word length in the given file is " << averageWordLength << "." << endl;

    return 0;
}
