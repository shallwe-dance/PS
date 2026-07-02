#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string order_string=to_string(order);
    for (int i=0;i<order_string.length();i++) {
        if (order_string[i]=='3' || order_string[i]=='6' || order_string[i]=='9') {answer+=1;}
    }
    return answer;
}