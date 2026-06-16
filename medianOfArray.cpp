#include <iostream>
using namespace std;



void findOddMedian(int arr1[],int n){
   
cout<<"The Array is:  ";
for(int i=0;i<n;i++){
   cout<<arr1[i]<<"  ";
}
cout<<endl;

int low =0;
int high = n-1;

int mid = (low+high)/2;

cout<<"Median for odd Array is:   "<<arr1[mid]<<" at "<<mid<<" index"<<endl;

}

void findEvenMedian(int arr2[],int m){

cout<<"The Array is:  ";
for(int i=0;i<m;i++){
   cout<<arr2[i]<<"  ";
}
cout<<endl;

int low =0;
int high = m-1;

int mid = (low+high)/2;

cout<<"Median for odd Array is:   "<<arr2[mid]<<" and "<<arr2[mid+1] <<" at "<<mid<<" and "<<mid+1<<" index"<<endl;
}


int main(){

 int arr1[] = {43,100,57,78,90};

 int n = sizeof(arr1)/sizeof(int);

  int arr2[] = {43,100,57,78,90,67};

 int m = sizeof(arr2)/sizeof(int);

findOddMedian(arr1,n);
findEvenMedian(arr2,m);

}