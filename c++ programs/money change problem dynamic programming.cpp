#include <iostream>
#include<cmath>
using namespace std;
//int coins[3]={1,3,4};
int get_change(int m,int n,int coins[]) {
  int minNumCoins[m+1];
  minNumCoins[0]=0;

  for(int i =1;i<m+1;i++){
    minNumCoins[i]=1000;
    int numberCoins;
    for(int j = 0 ;j<n;j++){
        if(i>=coins[j]){
            numberCoins = minNumCoins[i-coins[j]]+1;
            if(numberCoins<minNumCoins[i])
                minNumCoins[i]=numberCoins;
        }
    }
  }
  //for(int i =0;i<m+1;i++)
    //cout<<minNumCoins[i]<<" ";
  //cout<<"\n";
  return minNumCoins[m];
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
  cout << get_change(money,numberOfCoins,coins) << '\n';
}
