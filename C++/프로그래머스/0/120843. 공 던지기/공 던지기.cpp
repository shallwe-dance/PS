#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    vector<int> repeated_numbers;
    for (int i=0;i<1000;i++) {
        for (int j=0;j<numbers.size();j++) {
            repeated_numbers.push_back(numbers[j]);
        }
    }
    
    for (int i=1;i<k;i++) {
        answer=repeated_numbers[2*i];
    }
    return answer;
}