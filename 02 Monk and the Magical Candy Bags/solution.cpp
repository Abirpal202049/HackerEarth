#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int B; // Number of Bags
        int M; // Number of Minutes
        cin>>B>>M;
        multiset<long long> ms;
        for (int i = 0; i < B; i++)
        {
            long long c; // Number of candies in each bag
            cin >> c;
            ms.insert(c);
        }
        long long total_candies = 0;
        for (int i = 0; i < M; i++)
        {
            auto lastele = (--ms.end());
            long long presentVal = (*lastele) / 2;
            total_candies = total_candies + (*lastele);
            ms.erase(lastele);
            ms.insert(presentVal);
        }

        cout<<total_candies<<endl;
    }

    return 0;
}