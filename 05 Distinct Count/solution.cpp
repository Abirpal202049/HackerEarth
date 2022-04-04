#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n , x;
        cin>>n>>x;
        unordered_set<long long> numbers;
        for (int i = 0; i < n; i++)
        {
            long long num;
            cin >> num;
            numbers.insert(num);
        }
        if(numbers.size() == x){
            cout<<"Good"<<endl;
        }
        else if(numbers.size() < x){
            cout<<"Bad"<<endl;
        }
        else{
            cout<<"Average"<<endl;
        }
        
    }
    return 0;
}