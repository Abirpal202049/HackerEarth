#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
using namespace std;

int main()
{
    map<int, int> v = {{1,12}, {2,15}, {3,18}, {4,19}, {5,12}};
    auto it = v.find(1);
    cout<<(*it).second;
    return 0;
}