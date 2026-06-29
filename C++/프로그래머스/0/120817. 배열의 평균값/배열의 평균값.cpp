#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int total_sum=0;
    for (int i=0;i<numbers.size();i++) {
        total_sum+=numbers[i];
    }
    answer=total_sum*1.0/numbers.size();
    return answer;
}