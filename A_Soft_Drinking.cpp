#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[8];
    for (int i=0; i<8; i++){
        cin>>arr[i];
    }

    int drink = arr[1]*arr[2];
    int lime = arr[3]*arr[4];

    int sold = arr[5];

    int neededDrink = drink/arr[6];
    int neededSold = sold/arr[7];

    int minMum = min({neededDrink,neededSold,lime});

    cout<<minMum/arr[0]<<endl;



    return 0;
}