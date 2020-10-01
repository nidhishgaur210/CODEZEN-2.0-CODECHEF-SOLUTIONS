#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        
        long long int sum_positive = 0;
        long long int sum_negative = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>=0 && arr[i]!=arr[i+1]){
                sum_positive += arr[i];
            }
            else if(arr[i]<0 && arr[i]!=arr[i+1]){
                sum_negative += arr[i];
            }
        }
        cout<<sum_positive<<" "<<sum_negative<<endl;
    }
    return 0;
}