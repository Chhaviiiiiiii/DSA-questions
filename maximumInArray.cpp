#include <iostream>
using namespace std;

void maximum(int arr[],int n){

    int maximum =0;
for (int i=0;i<n;i++){
    if (maximum < arr[i]){
            maximum = arr[i];
    }
}

cout<<"The Maximum of array is: "<<maximum<<endl;

}

int main(){

 int arr[] = {43,100,57,78,90};

 int n = sizeof(arr)/sizeof(int);

 maximum(arr,n);

}