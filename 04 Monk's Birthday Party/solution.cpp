#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        set<string> guestList;
        int guestNumber;
        cin>>guestNumber;
        for (int i = 0; i < guestNumber; i++)
        {
            string name;
            cin>>name;
            guestList.insert(name);
        }
        for(auto &name : guestList){
            cout<<name<<endl;
        }
        
    }

    return 0;
}