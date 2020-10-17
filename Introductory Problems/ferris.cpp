#include<iostream>
#include<algorithm>
using namespace std;
 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    FIO;
    long long int n, weight;
    cin >> n >> weight;
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    long long int end = n-1;
    long long int start = 0;
    long long int count=0;
    while(end >= start){
        if(end == start && arr[end] <= weight){
            count++;
            start++;
            break;
        }
        else if(arr[end]>weight){
            end--;
        } else if((arr[end] + arr[start])<= weight){
            count++;
            start++;
            end--;
        } else if(arr[end] <= weight){
            count++;
            end--;
        }
    }

    cout << count << endl;
    return 0;
   
}
