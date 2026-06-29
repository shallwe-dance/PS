#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    vector<int> cnt;
    for (int i=0;i<1000;i++) {
        cnt.push_back(0);
    }
    //count
    for (int i=0;i<array.size();i++) {
        cnt[array[i]]++;
    }
    //find maximum
    int maximum=0;
    int maximum_num=0;
    for (int i=0;i<cnt.size();i++) {
        if (cnt[i]>maximum) {
            maximum=cnt[i];
            maximum_num=i;
        }
    }
    //check duplicate
    int maximum_count=0;
    for (int i=0;i<cnt.size();i++) {
        if (cnt[i]==maximum) {maximum_count++;}
    }
    if (maximum_count>1) {return -1;}
    else {return maximum_num;}
    
}