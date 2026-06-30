#include<iostream>
using namespace std;

 void elementOccurOnceInArray(int arr[], int n){
      
   for(int i=0;i<n;i++){
    int count =0;
    for(int j=0;j<n;j++){

        if (arr[i] == arr[j]){
            count++;
        }

    }
      if (count == 1){
          cout<<arr[i]<<" ocurs once"<<endl;
      }
     
   }
 }


int main(){

    int arr[] = {4,6,2,2,4,5,8,6,4,5,8,9,2,1,0,3};

    int n = sizeof(arr)/sizeof(int);

 elementOccurOnceInArray(arr,n);

}