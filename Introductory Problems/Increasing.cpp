#include<iostream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    long long int n;
    cin >> n;
    int* arr = new int[n];
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long int count = 0;
    for(long long int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            count += arr[i]-arr[i+1];
            arr[i+1]+=arr[i]-arr[i+1];
        }
    }

    cout << count << endl;
    return 0;
   
}