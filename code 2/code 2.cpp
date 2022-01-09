// question 2
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>& arr, int x)
{
    // To store the closest sum
    int closestSum1 = x-arr[0]+arr[1]+arr[2];
    int closestSum,t;
    for (int i = 0; i < (arr.size()-2) ; i++) 
    {
        closestSum=0;
        for(int j =i; j <=( i+2); j++)
        {
            closestSum=closestSum+arr[j];
            
        }
        if(abs(closestSum-x)<=closestSum1)
        {  
            closestSum1=abs(closestSum-x);
            t=closestSum;
        }
        
    }
    // Return the closest sum found
    return t;
}

// Driver code
int main()
{
    vector<int> arr ;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        arr.push_back(y);
    }
    int t;
    cin>>t;
    cout << solution(arr, t);

    return 0;
}