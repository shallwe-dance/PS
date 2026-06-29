#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> divisors;
    for (int i=1;i<=1000000;i++) {
        if (n%i==0 && n/i>0) {divisors.push_back(i);}
    }
    return divisors.size();
}