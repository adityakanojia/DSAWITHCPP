#include<iostream>
#include<vector>
using namespace std;


/*
  given a array which consist prices of stocks for each day we have to find what is the largest profit can be earned by 
  buying and selling the stock

EXAMPLE :- arr = [7,2,3,1,6,7]
  Answer would be you have to buy the stocks in day4 arr[3] and sell out at day6 arr[5] hence 7-1 =6 will be the largest 
 */

int Solution (vector<int>& prices){
    int min_price = prices[0], highest_profit = 0; // [7,1,5,3,6,4] best time to buy is day2(prices[1]) and best time to sell the stock is day5(prices[4]) hence their difference is 5 which is the highest difference.
    for (int i = 1; i< prices.size(); i++) {
        highest_profit = max(highest_profit,prices[i] - min_price);
        min_price = min(min_price, prices[i]);
    }
    return highest_profit;
}

int main(){
    vector<int> stocks = {7,1,5,3,6,4};
    int answer = Solution(stocks);
    cout << answer << endl;
    return 0;
}
