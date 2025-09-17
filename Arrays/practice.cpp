#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Q1 given an non empty array we have to find out the pair from that array so that the target can be the sum of that array;
  Example arr = [2,3,5,6] target = 5 hence [2,3] is the answer
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


int main() {
  cout << "Yo check this shit out" << endl;
  vector<int> arr = {2,3,4,5};
  int target = 9;
  vector<int> answer = pair_sum(arr,target);
  for (int i=0; i < answer.size(); i++) {
    cout << answer[i];
  }
  return 0;
}
