#include<iostream>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    
    long long int n;
    cin >> n;
    long long int sum=0;
    for(long long int i=0; i<n-1; i++){
        int num;
        cin >> num;
        sum += num;
    }

    long long int totalSum = (n*(n+1))/2;
    long long int ans = totalSum - sum;
    cout << ans << endl;
    return 0;
   
}