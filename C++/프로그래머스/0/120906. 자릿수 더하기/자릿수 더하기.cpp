#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string string_n=to_string(n);
    for (int i=0;i<string_n.length();i++) {
        answer+=(string_n[i]-'0');
    }
    return answer;
}