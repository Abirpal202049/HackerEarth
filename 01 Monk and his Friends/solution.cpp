#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int stud_present, stud_comining;
        cin >> stud_present >> stud_comining;
        unordered_set <long long> candiesPresent;
        vector <string> finalData;
        for (int i = 0; i < stud_present; i++)
        {
            long long no_of_candy;
            cin >> no_of_candy;
            candiesPresent.insert(no_of_candy);
        }
        for (int j = 0; j < stud_comining; j++)
        {
            long long no_of_candy;
            cin >> no_of_candy;
            auto it = candiesPresent.find(no_of_candy);
            if(it == candiesPresent.end()){
                finalData.push_back("NO");
            }
            else{
                finalData.push_back("YES");
            }
            candiesPresent.insert(no_of_candy);
        }
        for(auto &value : finalData){
            cout<<value<<endl;
        }
        
    }
    return 0;
}
