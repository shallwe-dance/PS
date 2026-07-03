#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    vector<int> cnt1;
    vector<int> cnt2;
    for (int i=0;i<26;i++) {
        cnt1.push_back(0);
        cnt2.push_back(0);
    }
    for (int i=0;i<before.length();i++) {
        cnt1[before[i]-'a'+0]++;
    }
    for (int i=0;i<after.length();i++) {
        cnt2[after[i]-'a'+0]++;
    }
    for (int i=0;i<26;i++) {
        if (cnt1[i]!=cnt2[i]) {return 0;}
    }
    
    return 1;
}