#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> vowels={'a','e','i','o','u'};
    for (int i=0;i<my_string.length();i++) {
        int is_vowel=0;
        for (int j=0;j<5;j++) {
            if (my_string[i]==vowels[j]) {is_vowel=1;}
        }
        if (is_vowel==0) {answer+=my_string[i];}
    }
    return answer;
}