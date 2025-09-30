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

int majority_elements_bruteforce (vector<int>& arr) {
  int counter = arr.size()/2;
  for (int i=0; i<arr.size(); i++) {
    int frequency = 0;
    for (int j=i+1; j<arr.size(); j++) {
      if(arr[i] == arr[j]){
        frequency++;
      }
      if(frequency >= counter){
        return arr[i];
      }
    }
  }
  return -1;
}

int container_with_most_water_brute(vector<int>& containers) 
{
  int largest_area = 0;
  for (int i = 0; i< containers.size(); i++) {
    for (int j = i+1; j < containers.size(); j++) {
      int height = min(containers[j], containers[i]);
      int width = j - i;
      int area = height * width;
      largest_area = max(largest_area, area);
    }
  }
  return largest_area;
}

int container_with_most_water(vector<int>& containers)
{
 int largest_area = 0; 
 int i = 0;
 int j = containers.size() - 1;

 while (i < j) {
   int area = min(containers[i], containers[j])*(j - i);
   largest_area = max(largest_area, area);
   containers[i] > containers[j] ? j-- : i++;
 }
 return largest_area;
}

int main() {
  cout << "Yo check this shit out" << endl;
  vector<int> arr = {1,8,6,2,5,4,8,3,7};
  cout << container_with_most_water(arr) << endl;
  return 0;
}
