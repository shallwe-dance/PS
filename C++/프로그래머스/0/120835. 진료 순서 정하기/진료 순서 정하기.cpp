#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted_emergency;
    for (int i=0;i<emergency.size();i++) {
        sorted_emergency.push_back(emergency[i]);
    }
    sort(sorted_emergency.begin(), sorted_emergency.end(), greater<int>());
    
    for (int i=0;i<emergency.size();i++) {
        for (int j=0;j<sorted_emergency.size();j++) {
            if (emergency[i]==sorted_emergency[j]) {
                answer.push_back(j+1);
                break;
            }
        }
    }
    
    return answer;
}