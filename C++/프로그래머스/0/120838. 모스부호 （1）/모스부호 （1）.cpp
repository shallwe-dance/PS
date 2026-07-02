#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<string, string> s1, pair<string, string> s2) {
    if (s1.first.length()>s2.first.length()) {return true;}
    else {return false;}
}

string solution(string letter) {
    string answer = "";
    vector<string> morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> alpha={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    vector<pair<string, string> > table = {};
    for (int i=0;i<26;i++) {
        table.push_back(make_pair(morse[i], alpha[i]));
    }
    sort(table.begin(), table.end(), compare);
    letter+=" 0000";
    
    int index=0;
    while (index<letter.length()) {
        string current="";
        for (int i=index;i<letter.length() && letter[i]!=' ';i++) {
            current+=letter[i];
            index++;
        }
        index++;
        for (int i=0;i<26;i++) {
            if (morse[i]==current) {answer+=alpha[i];}
        }
    }
    
    return answer;
}