#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<string> table={"a","b","c","d","e","f","g","h","i","j"};
    string age_string=to_string(age);
    for (int i=0;i<age_string.length();i++) {
        answer+=table[age_string[i]-'0'];
    }
    return answer;
}