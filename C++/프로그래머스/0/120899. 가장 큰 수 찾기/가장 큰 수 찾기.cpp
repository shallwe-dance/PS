#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maximum_number=array[0];
    int maximum_index=0;
    for (int i=0;i<array.size();i++) {
        if (array[i]>maximum_number) {
            maximum_number=array[i];
            maximum_index=i;
        }
    }
    answer.push_back(maximum_number);
    answer.push_back(maximum_index);
    return answer;
}