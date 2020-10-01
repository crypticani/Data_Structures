#include<bits/stdc++.h>
using namespace std;

int min(int a, int b);
int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }
    return C[n][k];
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int n[3],k[3];
    for(int i=0;i<3;i++){
        cout<<"enter value of n"<<i<<" ";
        cin>>n[i];
        cout<<"enter value of k"<<i<<" ";
        cin>>k[i];
    }
    cout<<"   n   k   binomialCoeff"<<endl;
    for(int i=0;i<3;i++){
        cout<<"   "<<n[i]<<"   "<<k[i]<<"   "<<binomialCoeff(n[i], k[i])<<endl;
    }

}
