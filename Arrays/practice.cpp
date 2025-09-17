#include <cstdint>
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

/*Q1 given an non empty array we have to find out the pair from that array so that the target can be the sum of that array;
  Example arr = [2,3,5,6] target = 5 hence [2,3] is the answer
*/

/*
  O2 givem an array we have to find out the maximum sum in subarray example
*/

vector<int> pair_sum(vector<int>& arr, int target) {
  vector<int> ans;
  for (int i = 0;i < arr.size(); i++) {
    for (int j = i+1; j<arr.size(); j++) {
      if (arr[i] + arr[j] == target) {
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        return ans;
      }
    }
  }

  return {-1};
}

int maximum_subarray_bruteforce(vector<int>& arr) {
  int maximum_sum = INT_MIN;
  for (int i=0; i<arr.size(); i++) {
    int current_sum = 0;
    for (int j=i; j<arr.size(); j++) {
      current_sum += arr[j];
      maximum_sum = max(maximum_sum, current_sum);
    }
  }
  return maximum_sum;
}

int maximum_subarray_optimized(vector<int>& arr){
  int maximum_sum = INT_MIN;
  int current_sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    current_sum += arr[i];
    maximum_sum = max(maximum_sum,current_sum);
    if(current_sum < 0) {
      current_sum=0;
    }
  }
  return maximum_sum;
}

int main() {
  cout << "Yo check this shit out" << endl;
  vector<int> arr = {-1,-2,-3,-4,-5};
  cout << maximum_subarray_optimized(arr) << endl;
  return 0;
}
