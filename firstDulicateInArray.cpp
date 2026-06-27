#include<iostream>
using namespace std;


void firstDuplicate(int arr[], int n){

for (int i =0;i<n;i++){

for(int j=i+1;j<n;j++ ){

     if(arr[i] == arr[j]){
        cout<<"the first duplicate is "<<arr[i] <<" at "<<j<<"th index"<<endl;
        return;
     }
}

}


}

int main(){

int arr[] = {44,65,44,34,89,65,89,54};

int n = sizeof(arr)/sizeof(int);



 firstDuplicate(arr,n);


}