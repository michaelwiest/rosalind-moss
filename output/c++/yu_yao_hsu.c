#include <iostream>
using namespace std;

/*int PatternCount(){
	int count;
	count = 0;
	string text = "";
	string pattern = "";
	int textnum = text.size();
	int patternnum = pattern.size();
	for(int i =0; i <= textnum - patternnum ; i++){
		if(text(i,pattern) = pattern){
			count = count + 1;
		}
	}
	return count;
}*/

int main (){
	int count = 0;
	string text = "TCATGCACCATGCAGGCATGCAGGCGTTGCAGGCTGCAGGCGCTTGCAGGCGTGTTGCAGGCTGCAGGCATGCAGGCTGCAGGCTGCAGGCTGCAGGCTTGCAGGCATGCAGGCTCGGTTGCAGGCGTTTGCAGGCGCCTTGCAGGCTGCAGGCGATGCAGGCCTGCAGGCGTATGCAGGCGTGCAGGCAGGTGCAGGCGCTGCAGGCCAATGCAGGCTGCAGGCAACATGCAGGCATGCAGGCTGCAGGCTTGCAGGCTGCAGGCGATGCAGGCCTTAAGCCATGCAGGCGTGCAGGCAACACGCGATTTGCAGGCGTGCAGGCGTGCAGGCTAGTGCAGGCCTTGCAGGCAGTGCAGGCGGACTTGCAGGCGGTGCAGGCCTTCTTGCAGGCAAGTGCAGGCTGTGCAGGCTGCAGGCGTTGCAGGCTGCAGGCTGCAGGCGCAGTGCAGGCGTAATGCAGGCTGTTGCAGGCTTACTGCAGGCGGAAATGCAGGCTTGCAGGCCGTGCAGGCTCACATGCAGGCTGCAGGCTTGCAGGCTGCAGGCTGCAGGCGGCCTCATGCAGGCCTCCATTACCAATTGCAGGCTTGCAGGCCTATGCAGGCTGATGCAGGCTGCAGGCCTTGCAGGCTTGCAGGCATGCAGGCATGCAGGCAATCACTGCAGGCTGCAGGCTATCTGCAGGCCTAGCGATGCAGGCCTGCAGGCTGACGACTAGCGAGTGCAGGCTTGCAGGCTGCAGGCTGCAGGCAAACCAATGCAGGCTGCAGGCTGCAGGCGCCAGTTATCGAGTGCAGGCTTGCAGGCCATGCAGGCGGTAACTGCAGGCTCCTGCAGGCTCTCTCGTGCGTGCAGGCTGCAGGCTGCAGGCTGCAGGCCTGCAGGCTGCAGGCATGCAGGCTGCAGGCCTGCAGGCTAAT";
	string pattern = "TGCAGGCTG";
	int textnum = text.size();
	int patternnum = pattern.size();
	for(int i =0; i <= textnum - patternnum ; i++){
		//string substring = text.substr(i,pattern);
		if((text.substr(i,patternnum)) == pattern){
			count = count + 1;
		}
	}
	cout << count << endl;
	//return count;

	return 0;
}