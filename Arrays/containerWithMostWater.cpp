#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int brute_force_solution (vector<int>& nums) {
  int largest_area = 0;
  
  for(int i = 0; i < nums.size(); i++) {
    for (int j = i+1; j < nums.size(); j++) {
        int height = min(nums[i], nums[j]);
        int width = j - i;
        int area = height*width;
        largest_area = max(largest_area, area);
    }  
  }

  return largest_area;
}

int optimizedSolution (vector<int>& nums) {
  int largest_area = 0;
  int i=0; int j = nums.size() -1;
  while (i < j) {
    int area = min(nums[i], nums[j]) * (j - i);
    largest_area = max(largest_area, area);
    
    nums[i] > nums[j] ? j-- : i++;
  } 
  return largest_area;
}

int main() {
  vector<int> graph = {1,8,6,2,5,4,8,3,7};
  int answer = optimizedSolution(graph);
  cout << "Area to cntain most water" << answer << endl;
  return 0;
}
