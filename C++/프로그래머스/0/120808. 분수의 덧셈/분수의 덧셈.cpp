#include <string>
#include <vector>

using namespace std;

vector<int> solution(int number1, int denom1, int number2, int denom2) {
    vector<int> answer;
    int common_denom=denom1*denom2;
    int result_number=number1*(common_denom/denom1)+number2*(common_denom/denom2);
    for (int i=2;i<=1000;i++) {
        while (common_denom%i==0 && result_number%i==0) {
            common_denom/=i;
            result_number/=i;
        }
    }
    answer.push_back(result_number);
    answer.push_back(common_denom);
    return answer;
}