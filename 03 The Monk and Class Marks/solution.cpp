#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    map<int, multiset<string>> info;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        string name;
        int marks;
        cin>>name>>marks;
        info[-1 * marks].insert(name);
    }
    for(auto &pairData : info){
        auto &nameSet = pairData.second;
        int marks = pairData.first;
        for(auto &value : nameSet){
            cout<<value<<" "<<-1 * marks<<endl;
        }
    }

    
    return 0;
}