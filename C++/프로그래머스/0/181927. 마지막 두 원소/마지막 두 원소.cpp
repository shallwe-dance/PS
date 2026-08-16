#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int back_1=num_list.back();
    int back_2=num_list[num_list.size()-2];
    if (back_1>back_2) {num_list.push_back(back_1-back_2);}
    else {num_list.push_back(back_1*2);}
    return num_list;
}