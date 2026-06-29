#include<iostream>
using namespace std;


void rotateArrayfromNth(int arr[], int n, int place){

for(int i=0;i<place;i++){

cout<<arr[i]<<" ";

}

int start = place+1;
int end = n-1;
int temp;

while(start < end){
   swap(arr[start],arr[end]);
   start++;
   end--;

}

for(int i=place;i<n;i++){

cout<<arr[i]<<" ";

}

}

int main(){

int arr[] = {1,3,5,7,9,2,4,6,8};
int n = sizeof(arr)/sizeof(int);

 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
cout<<endl;
// cout<<"Enter the place:";
int place = 4;


rotateArrayfromNth(arr,n,place);

}