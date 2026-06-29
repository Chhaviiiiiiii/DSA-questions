#include<iostream>
using namespace std;


void pairArray(int arr[], int n, int sum){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j] == sum){
                cout<<"pair ("<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
            }
        }
    }

}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/sizeof(int);
int sum=0;
    cout<<"enter the sum:";
    cin>>sum;

    pairArray(arr,n,sum);

}