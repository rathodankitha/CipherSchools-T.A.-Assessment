#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(vector<int> a, int n)
{

    int total = (n ) * (n +1) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

// Driver Code
int main()
{
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    int miss = getMissingNo(v, v.size());
    cout << miss;
    return 0;
}
