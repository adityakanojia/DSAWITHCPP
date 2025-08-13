#include<iostream>
#include<vector>
using namespace std;


int Solution (vector<int>& prices){
    int bestDayToBuy = prices[0], highestProfit = 0; // initialising the variables bestDayToBuy would be lowest price day and we set it at arr[0]
    for (int i = 1; i < prices.size(); i++)  // because we know that a person cant sell the stock on day one but can buy
    {
        if(prices[i] > bestDayToBuy){            //looping through the array from 1st index and comparing if day 1 is lower than day 2  
            highestProfit = max(highestProfit,prices[i] - bestDayToBuy); // if day 2 is bugger than day 1 then we can successfully buy the stock on day one and can sell them on day2
        }
        bestDayToBuy = min(bestDayToBuy,prices[i]); // comparing if there is another bestDayToBuy (lowest price)
    }
    return highestProfit;
}

int main(){
    vector<int> stocks = {7,1,5,3,6,4};
    int answer = Solution(stocks);
    cout << answer;
    return 0;
}