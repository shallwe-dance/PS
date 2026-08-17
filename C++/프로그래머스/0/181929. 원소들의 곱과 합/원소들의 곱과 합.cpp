#include <string>
#include <vector>
#include <numeric>

using namespace std;
int sum_square(vector<int> num_list) {
    int acc=accumulate(num_list.begin(), num_list.end(), 0);
    return acc*acc;
}

int product(vector<int> num_list) {
    int result=1;
    for (auto& num: num_list) {
        result*=num;
    }
    return result;
}

int solution(vector<int> num_list) {
    return product(num_list)<sum_square(num_list);
}