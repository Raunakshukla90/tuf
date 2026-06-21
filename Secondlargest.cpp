#include <iostream>
#include<climits>
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
     
    int largest=arr[0];
    int s_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            s_largest=largest;
            largest=arr[i];
        }
    }
    cout<<"second largest element of array is " <<s_largest;
}
