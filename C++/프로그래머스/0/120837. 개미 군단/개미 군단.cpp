#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int general=hp/5;
    hp%=5;
    
    int sergeant=hp/3;
    hp%=3;
    
    int worker=hp;
    
    return general+sergeant+worker;
}