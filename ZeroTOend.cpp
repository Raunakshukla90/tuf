//Move  all zero to the end of array

#include <iostream>
using namespace std;
void main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       int j=-1;
       for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
       }
       for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
       }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" "    ;
    }