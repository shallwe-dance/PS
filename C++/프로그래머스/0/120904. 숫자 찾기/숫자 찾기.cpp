#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string num_string=to_string(num);
    for (int i=0;i<num_string.length();i++) {
        if (num_string[i]-'0'==k) {return i+1;}
    }
    
    return -1;
}