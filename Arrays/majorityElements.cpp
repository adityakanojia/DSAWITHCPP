#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bruteForceSolution(vector<int>& nums){
    int counter = nums.size()/2;
    for (int i = 0; i < nums.size(); i++)
    {
        int frequency = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if(nums[i] == nums[j]){
                frequency++;
            }
            if(frequency > counter){
                return nums[i];
            }
        }     
    }
    return -1;
}

int secondMostOptimizedSolution(vector<int> nums) {
    int counter = nums.size()/2;
    // sort the current vector
    sort(nums.begin(),nums.end());

    // inititalizing our frequency variable and answer
    int frequency = 1;

    // looping throught the elements

    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i] == nums[i-1]){
            frequency++;
            if(frequency > counter){
                return nums[i];
            }
        }else{
            frequency=1;
        }
    }
    return -1;
}

int mostOptimizedSolution (vector<int>& nums) {
    //intitializing the frequency and answer
    int frequency = 0, answer = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if(frequency == 0){
            answer = nums[i];
        }
        if(nums[i] == answer){
            frequency++;
        }else {
            frequency--;
        }
        
    }
    return answer;
}

int main(){
    vector<int> arr = {1,2,2,1,1,2,3,3,3,3};
    int ans = secondMostOptimizedSolution(arr);
    cout << ans;
    return 0;
}
