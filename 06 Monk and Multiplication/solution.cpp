#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int defaultValue = -1;

    int i = 0;
    multiset<long long> us = {};
    for (int j = 0; j <= i; j++)
    {
        us.insert(-1 * v[j]);
        if (j == i && us.size() >= 3)
        {
            cout << (*us.begin()) * (*(++us.begin())) * (*(++(++us.begin()))) * -1 << endl;
            
        }
        else if (j == i && us.size() < 3)
        {
            cout << defaultValue << "\n";
        }
        i++;
        if(i == n){
            break;
        }
    }

    return 0;
}