#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int n, int m){

for (int i=0;i<n;i++){
    for ( int j=0;j<n;j++){
    if(arr1[i] == arr2[j] )
     
     cout<<"["<<arr1[i]<<"] ";

    }
} 
}


int main(){

    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};

    int n = sizeof(arr1)/sizeof(int);
     int m = sizeof(arr2)/sizeof(int);

     intersection(arr1,arr2,n,m);


}