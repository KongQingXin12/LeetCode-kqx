//
// Created by 1 on 2019/1/15.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <queue>
#include <regex>
#include <list>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int res=0;
        int preSum=0;
        map<int,int>m;
        m[0]=1;
        for (int i:A) {
            preSum=(preSum+i)%K;
            if(preSum<0)preSum+=K;
            res+=m[preSum]++;
        }
        return res;
    }
};




int main() {
    Solution s;
    vector<int>A={4,5,0,-2,-3,1};
    int K=5;
    s.subarraysDivByK(A,K);
    return 0;
}





