#include <iostream>
using namespace std;
int main() {
    int sum;
    int target;
    cin>>target;
    int arr1[5]={1,2,3,4,5};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<=size;i++){
       if(arr1[i]+arr1[i+1]==target){
        sum=arr1[i]+arr1[i+1];
       }

    }
    if(sum==target){
        cout<<"the target found"<<endl;

    }else{
        cout<<"target not found"<<endl;
    }

}
