#include <iostream>
#include <fstream>
#include <string>
//#include <filesystem>
using namespace std;

// TODO: Complementary: Instead of having an if-statement to 
// make the first iteration a special case, just do the special case 
// before the loop.
// You still have a special case for reading the first word.
//---DONE---
//
// Comment: Using seekg and tellg works, but is fairly cumbersome to use. A much 
// simplier way to solve it by just trying to stream a word from the file and checking
// the result.

// TODO: Complementary work: Don't include files that you aren't going to use.
// You don't use filesystem.
//
// Remove dead code instead of leaving it as comments.
//---DONE---
//

int main()
{
	
	ifstream ifs{};
	ifs.open("textfile.txt");
	ifs.seekg(0, ios::end);
	if (ifs.tellg() < 1) {
		cout << "FILE Is EMPTY. The program will be shut down." << endl;
	}
	else {
		ifs.clear();
		ifs.seekg(0, ios::beg);
		int words = 0;
		int length = 0;
		long unsigned int wordcount{};
		string longest{};
		string shortest{};
		string word{};
		ifs >> word;
		shortest = word;
		longest = word;
		do
		{
			wordcount = static_cast<int>(word.length());
			length += wordcount;
			if (wordcount > longest.length())
				longest = word;
			if (wordcount < shortest.length())
				shortest = word;
			words++;
		}
		while (ifs >> word);
		ifs.close();
		cout << "There are " << words << " words in the file.\n"
			<< "The shortest word was \"" << shortest << "\" with " << shortest.length() << " character(s).\n"
			<< "The longest word was \"" << longest << "\" with " << longest.length() << " character(s).\n"
			<< "The average length was " << static_cast<float>(length) / static_cast<float>(words) << " character(s).\n";
	}
}
