#include <string>
#include <vector>

using namespace std;

int factorial(int n) {
    if (n==0) {return 0;}
    int result=1;
    for (int i=1;i<=n;i++) {
        result*=i;
    }
    return result;
}

int solution(int n) {
    int answer = 0;
    vector<int> factorials;
    for (int i=0;i<=10;i++) {
        factorials.push_back(factorial(i));
    }

    while (factorials[answer]<=n && answer<=10) {
        answer++;
    }
    return answer-1;
}