#include <iostream>
using namespace std;

void sortInAcesnding(int arr[],int n){

 for(int i=0;i<=n-1;i++){       // 43 
    for(int j=i+1;j<=n-1;j++){

        if(arr[i] > arr[j])    swap(arr[i],arr[j]);
    }
 
 }

cout<<"The Array after sorting in ascending order is:  ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<"  ";
}
cout<<endl;
}

void sorInDecending(int arr[],int n){

 for(int i=0;i<=n-1;i++){       // 43 
    for(int j=i+1;j<=n-1;j++){

        if(arr[i] < arr[j])    swap(arr[i],arr[j]);
    }
 
 }

cout<<"The Array after sorting in desending order is:  ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<"  ";
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

  sortInAcesnding(arr,n);
  sorInDecending(arr,n);

}