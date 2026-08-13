#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;
    for (int i=0;i<score.size();i++) {
        avg.push_back((score[i][0])+(score[i][1]));
    }
    sort(avg.begin(),avg.end(),greater<int>());
    map<int,int> ranking;
    
    int i=1;
    int rank=1;
    ranking[avg[0]]=1;
    int cnt=1;
    while (i<avg.size()) {
        
        if (avg[i]==avg[i-1]) {
            ranking[avg[i]]=rank;
            cnt++;
        } else {
            rank+=cnt;
            ranking[avg[i]]=rank;
            cnt=1;
        }
        i++;
    }
    
    for (int i=0;i<score.size();i++) {
        answer.push_back(ranking[score[i][0]+score[i][1]]);
    }
    return answer;
}