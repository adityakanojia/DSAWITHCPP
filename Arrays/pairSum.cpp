#include<iostream>
#include<vector>
using namespace std;

/*
given a non-empty sorted array we need to find the pair of array where we are given  a target and we need to find pair which sum together to form a target

Example :- arr = [2,7,11,15]
           target = 9;
           output = [2,7]  2 + 7 = 9;

*/

vector<int> bruteForceSolution(int arr[],int count,int target){
    vector<int> vec;
    for (int i = 0; i < count; i++)
    {
        for (int j=i+1; j < count; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);

                return vec;
            }           
        }
    }
    return vec;
}

vector<int> optimizedSolution (int arr[],int count, int target) {
    int startingIndex = 0, endIndex = count-1;
    vector<int> ans;
    while (startingIndex < endIndex)
    {
        if(arr[startingIndex] + arr[endIndex] > target){
            endIndex--;
        }else if (arr[startingIndex] + arr[endIndex] < target)
        {
            startingIndex++;
        }else{
            ans.push_back(arr[startingIndex]);
            ans.push_back(arr[endIndex]);
            return ans;
        }
    }
    return ans;
}

int main() {
    int arr[] = {2,7,11,15};
    int count = sizeof(arr)/sizeof(int);
    int target = 9;
    vector<int> ans = optimizedSolution(arr,count,target);
    cout << ans[0] << " " << ans[1];
    return 0;
}