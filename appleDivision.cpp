#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

/*#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);*/
long long int findMinRec(long long int arr[],long long  int i, long long int sumCalculated,long long int sumTotal) 
{ 

    if (i==0) 
        return abs((sumTotal-sumCalculated) - sumCalculated); 
    return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumTotal), 
               findMinRec(arr, i-1, sumCalculated, sumTotal)); 
}


int main() 
{
    
    long long int n;
    cin >> n;
    long long int arr[100000];
    long long int sum = 0;
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
   
   long long int ans = findMinRec(arr, n, 0, sum);

    cout << ans << endl;
    return 0;
   
}
