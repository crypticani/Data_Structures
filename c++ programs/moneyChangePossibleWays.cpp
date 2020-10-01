#include <iostream>
#include<cmath>
using namespace std;
//int coins[3]={1,3,4};
long get_change_ways(int m,int n,int c[]) {
    //int numberOfCoins = c.size()-1;
    //sort(c.begin(),c.end());
    long totalWays[n][m+1];
    for(int j =0 ;j<=m;j++){
        if(j%c[0]==0)
            totalWays[0][j] = 1;
        else
            totalWays[0][j] = 0;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<=m;j++){
                if(j>=c[i]){
                totalWays[i][j] = totalWays[i-1][j] + totalWays[i][j-c[i]];
            }
            else{
                totalWays[i][j] = totalWays[i-1][j];
            }
        }
    }
    return totalWays[n-1][m];
}

int main() {
  int money,numberOfCoins;
  cout<<"Enter amount to be exchanged ";
  cin >> money;
  cout<<"Enter number of denomination of coins available ";
  cin>>numberOfCoins;
  cout<<"Enter denomination of coins ";
  int coins[numberOfCoins];
  for(int i =0;i<numberOfCoins;i++){
    cin>>coins[i];
  }
  cout<< "total no of ways: "<< get_change_ways(money,numberOfCoins,coins) << '\n';
}

