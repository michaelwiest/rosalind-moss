#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int PatternCount(string Text, string Pattern){
	int count = 0;
	for(int i=0;i<= Text.length()-Pattern.length()-1;i++){
		if(Text.compare(i,Pattern.length(),Pattern) == 0){
			count++;
			if(i+Pattern.length()>Text.length()){
				break;
			}
			else{
				i++;
			}
		}
	}
	return count;
}

int main (){
	string Pattern;
	ifstream ifs("hw.txt");
	string Text((std::istreambuf_iterator<char>(ifs)),
					(std::istreambuf_iterator<char>()));
	cout << "Enter a pattern:\n";
	cin >> Pattern;
	cout << PatternCount(Text, Pattern) << "\n";
	return 0;
}