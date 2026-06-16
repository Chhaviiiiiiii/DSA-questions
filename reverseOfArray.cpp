#include <iostream>
using namespace std;


void reverse(int arr[],int n){

int start = 0;
int end = n-1;

int temp=0;

while (start < end)
{
   temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
    start++;
    end--;
}

cout<<"The reverse Array is:  ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<"\t";
}

}

int main(){

 int arr[] = {43,100,57,78,90};

 int n = sizeof(arr)/sizeof(int);

  cout<<"The Array is:  ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<"  ";
}
cout<<endl;

  reverse(arr,n);

}