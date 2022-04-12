#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count = 0;
    multiset <int> ms;
    for (int i = 0; num != 0; i++)
    {
        int digit = num % 10;
        ms.insert(digit * -1);
        num = num / 10;
    }
    long long sum = 0;
    int size = (ms.size() - 1);
    for(auto &value : ms){
        long long temp = (value * -1 * pow(10, size));
        sum = sum + temp;
        size--;
        // cout<<temp<< " "<<value<<"\n";
    }
    cout<<sum;
    
    return 0;
}