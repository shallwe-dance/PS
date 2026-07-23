#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string current="";
    int cnt=0;
    for (int i=0;i<my_str.length()/n;i++) {
        for (int j=0;j<n;j++) {
            current+=my_str[cnt*n+j];
        }
        answer.push_back(current);
        cnt++;
        current="";
    }
    
    if (my_str.length()%n!=0) {
        for (int i=0;i<my_str.length()%n;i++) {
            current+=my_str[n*cnt+i];
        }
        answer.push_back(current);
    }
    
    return answer;
}