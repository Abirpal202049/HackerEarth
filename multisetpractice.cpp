#include<bits/stdc++.h>
using namespace std;

int main(){

    // We use multiset in Priority Queue -> Graphs, Distras, BFS , DFS
    multiset <int> ms;
    ms.insert(54);  // O(log(n))   
    ms.insert(78);    
    ms.insert(15);    
    ms.insert(63);    
    ms.insert(15);
    auto it = ms.find(15);
    if(it == ms.end()){
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element found : "<<*it<<endl;
        ms.erase(it);
    }

    for(auto value : ms){
        cout<<value<<" ";
    }    
    cout<<"Size : "<<ms.size()<<endl;
    return 0;
}