#include<iostream>
using namespace std;


void palindromeOrNot(int arr[],int n){

 int start = 0;
 int end = n-1;

while (start < end){

if(arr[start] == arr[end]){
    start++;
    end--;
}
else {
    cout<<"it is not palindrome"<<endl;
    return;
}
}
  cout<<"it is palindrome"<<endl;
}

int  main(){

    int arr[] = {4,5,7,4};
    int n = sizeof(arr)/sizeof(int);

    palindromeOrNot(arr,n);

}