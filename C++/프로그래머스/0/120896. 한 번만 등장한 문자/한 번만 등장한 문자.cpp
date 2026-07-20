#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    vector<char> uniques;
    bool is_unique=true;
    for (int i=0;i<s.length();i++) {
        for (int j=0;j<uniques.size();j++) {
            if (s[i]==uniques[j]) {
                false;
            }
        }
        if (is_unique) {uniques.push_back(s[i]);}
    }
    
    int cnt;
    for (int i=0;i<uniques.size();i++) {
        cnt=0;
        for (int j=0;j<s.length();j++) {
            if (uniques[i]==s[j]) {cnt++;}
        }
        if (cnt==1) {answer+=uniques[i];}
    }
    return answer;
}