//Check array is sorted or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"Array is not sorted";
            return 0;
        }
    }
    cout<<"Array is sorted";
    return 0;
}
