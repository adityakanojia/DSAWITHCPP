#include<iostream>
#include<vector>
using namespace std;

/*
Given a non-empty 2n (n = length(array)) array we have to find a pair of numbers which will give  maximum XOR ie:- 
array = [1,2,3,4,5];
possibe pairs :- [1,2],[1,3],[1,4],[1,5]    define two index i,j
                 [2,3],[2,4],[2,5]          run both i,j to size(array)
                 [3,4],[3.5]                cout possibe arr[i],arr[j]
                 [4,5]
*/

int bruteForceSolution(vector<int>& nums){
    int maxXor = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int currrentXor = 0;
        for (int j = i; j < nums.size(); j++)
        {
             currrentXor ^= nums[j];
             maxXor = max(currrentXor,maxXor);
        }
    }
    return maxXor;
}

int optimizedSolution (vector<int>& nums) {
    int maxXor = 0;
    int currentXor = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currentXor ^= nums[i];
        maxXor = max(maxXor,currentXor);
        if(currentXor == 0){
            currentXor = 0;
        }
    }
    return maxXor;
}

int main(){
    vector<int> nums;
    nums = {3,10,5,25,2,8};
    int ans = optimizedSolution(nums);
    cout << ans;
    return 0;
}