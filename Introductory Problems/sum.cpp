#include <iostream>
#include<algorithm>
using namespace std;
int mostFrequent(int arr[], int n) 
{ 
    sort(arr, arr + n); 
    int max_count = 1, curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
            } 
            curr_count = 1; 
        } 
    } 

    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
    } 
  
    return max_count; 
}

int leastFrequent(int arr[], int n) 
{ 
    sort(arr, arr + n); 
    int min_count = INT_MAX, curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count < min_count) { 
                min_count = curr_count; 
            } 
            curr_count = 1; 
        } 
    } 

    if (curr_count < min_count) 
    { 
        min_count = curr_count; 
    } 
  
    return min_count; 
}


int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    int arr[6];
	    for(int i=0; i<n;i++){
	        cin >> arr[i];
	    }
	    
	    int sum[6];
	    for(int i=0;i<n;i++){
	        sum[i] = (i+1+arr[i]);
	    }
	    
	    cout << leastFrequent(sum, n) << " " << mostFrequent(sum, n) << endl;
	    
	}
	return 0;
}