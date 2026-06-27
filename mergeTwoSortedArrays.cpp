#include<iostream>
using namespace std;

 void mergeArrays(int arr1[], int arr2[], int n, int m){

   int size = n+m;
   int arr3[size];
int i=0,j=0,k=0;


  while (i<n && j<m){

  if ( arr1[i] < arr2[j]){
    arr3[k] = arr1[i];
    i++;
  }
  else {
     arr3[k] = arr2[j];
    j++;
  }
  k++;
 
  }
  
  while(i < n)
    arr3[k++] = arr1[i++];

while(j < m)
    arr3[k++] = arr2[j++];


   cout<<"\n The merged array is:"<<endl;

   for(int i=0;i<size;i++){
    cout<<arr3[i]<<" ";
   }
  
 }


int main(){

  int arr1[] = {1,5,7,67,46};
  int arr2[] = {2,4,9,8,10,34,47,8676,57668};

  int n = sizeof(arr1)/sizeof(int);
  int m = sizeof(arr2)/sizeof(int);

  mergeArrays(arr1,arr2,n,m);

}
