#include <fstream>
#include <iostream>
#include <string>

using namespace std;


/** this method sould count the number of occurences of string pattern within
        the string Text. It's done by "shifting a window" **/
int PatternCount(string Text, string Pattern)
{
    // set count as 0
    int count = 0;
    //cout << Text.size() << endl;

    // for loop runs from i=0 to text-pattern, the last possible pattern
    for ( int i = 0 ; i <= Text.size() - Pattern.size() ; i++ )
        {
                // if at position i, the text's fits the pattern, count+1
                if (Text.substr(i, Pattern.size()) == Pattern)
                    { 
                     count = ++count;
                     //cout << Text.substr(i, Pattern.size())<< endl;
                        
                    }
        }
    cout<< count << endl;
    return count;
   
}

int main(){
	string Text = "GCGCG";
	string Pattern = "GCG";

    PatternCount (Text, Pattern);
}