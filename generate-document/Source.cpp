#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

bool generateDocument(string characters, string document);

int main()
{
	string characters = "Bste!hetsi ogEAxpelrt x ";
	string document = "AlgoExpert is the Best!";
	bool result = generateDocument(characters, document);

	cout << boolalpha << result;
	return 0;
}

bool generateDocument(string characters, string document) {
	// Write your code here.
	unordered_map<char, int> diMap;

	for (char charcter : characters)
	{
		
		if (diMap.find(charcter) == diMap.end())
			diMap[charcter] = 0;

		diMap[charcter]++;
	}

	for (char charcter : document)
	{

		if (diMap.find(charcter) == diMap.end() || diMap[charcter] == 0)
			return false;

		diMap[charcter]--;
	}

	return true;
}
