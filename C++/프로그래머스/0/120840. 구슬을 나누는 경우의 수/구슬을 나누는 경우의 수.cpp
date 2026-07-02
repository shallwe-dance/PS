#include <string>
#include <vector>

using namespace std;

unsigned long long factorial(int share) {
    unsigned long long rtn=1;
    for (int i=1;i<=share;i++) {
        rtn*=i;
    }
    return rtn;
}

int combination(int n, int r) {
    if (n==r) {return 1;}
    if (r==1) {return n;}
   return combination(n-1, r-1)+combination(n-1, r); 
}

//combination
int solution(int balls, int share) {
    if (balls==share) {return 1;}
    unsigned long long answer=1;
    for (int i=balls;i>(balls-share);i--) {
        answer*=i;
    }
    return combination(balls, share);
    
}