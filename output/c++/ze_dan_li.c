//============================================================================
// Name        : HW1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int PatternCount(string text, string pattern){
    int count = 0;
    int a = text.length();
    int b = pattern.length();

    for (int i = 0; i < a-b; i++)
    {
		if (pattern == text.substr(i, b))
			count = count + 1;
    }

    return count;
}

int main() {
	int i = 0;
	string text[2];
    string line;
    ifstream file ("rosalind_ba1a.txt");
    if (file.is_open())
    {
      while (getline(file,line))
      {
    	  text[i] = line;
    	  i++;
      }
      file.close();
    }
    else
    	cout << "error";

	cout << PatternCount(text[0],text[1]) << endl;
	return 0;
}