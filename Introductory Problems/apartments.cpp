#include<iostream>
#include<algorithm>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    FIO;
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int applicants[n];
    long long int apartments[m];
    for(long long int i=0; i<n; i++){
        cin >> applicants[i];
    }

    for(long long int i=0; i<m; i++){
        cin >> apartments[i];
    }
    sort(apartments, apartments+m);
    sort(applicants, applicants+n);
    long long int papr = 0, papp = 0, working = 0;
    while(papr < m && papp < n){
        if(apartments[papr] >= applicants[papp]-k && apartments[papr] <= applicants[papp]+k){
            working++;
            papp++;
            papr++;
        } else if(apartments[papr]< applicants[papp]-k){
            papr++;
        } else {
            papp++;
        }
    }

    cout << working << endl;
return 0;
   
}