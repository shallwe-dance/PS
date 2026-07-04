#include <string>
#include <vector>

using namespace std;

bool is_prime(int n) {
    vector<int> divisors;
    for (int i=1;i<=n;i++) {
        if (n%i==0) {divisors.push_back(i);}
    }
    if (divisors.size()==2) {return 1;}
    else {return 0;}
}

vector<int> solution(int n) {
    vector<int> answer;
    //calculate sqrt
    int sqrt;
    for (int i=1;i<=n;i++) {
        if (i*i>=n) {sqrt=i;}
    }
    for (int i=2;i<=sqrt;i++) {
        if (n%i==0 && is_prime(i)) {answer.push_back(i);}
    }
    return answer;
    
}