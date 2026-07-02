#include <string>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n<4) {return true;}
    for (int i=2;i<=10 && i<n;i++) {
        if (n%i==0) {return false;}
    }
    return true;
}

int solution(int n) {
    if (n<4) {return 0;}
    int answer=0;
    for (int i=0;i<=n;i++) {
        if (!is_prime(i)) {answer++;}
    }
    return answer;
}