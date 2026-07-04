#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    answer+=my_string[0];
    for (int i=0;i<my_string.length();i++) {
        bool is_new=true;
        for (int j=0;j<answer.length();j++) {
            if (my_string[i]==answer[j]) {
                is_new=false;
            } 
        }
        if (is_new) {answer+=my_string[i];}
        
    }
    return answer;
}