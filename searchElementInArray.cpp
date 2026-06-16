#include <iostream>
# include <algorithm>
using namespace std;

void linerSearch(int arr[],int n,int target){

   for(int i=0;i<n;i++){

  if( arr[i] == target){
    cout<<"The target "<<target<<" is found at "<<i<<endl;
  }

}}




void binarySearch(int arr[],int n,int target){
  sort(arr, arr +n); // 43 57 78 90 100

     int low = 0;
     int high = n-1;

     while (low <= high)
     {
       int mid =  (low + high) / 2;

        if(arr[mid] == target){
            cout<<"Target found" <<endl;
            return;
        }

       else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }}
      
    cout <<"value not found"; 

}




int main(){

 int arr[] = {43,100,57,78,90};

 int n = sizeof(arr)/sizeof(int);

 int target = 57;

cout<<"The Array is:  ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<"  ";
}
cout<<endl;

    linerSearch(arr,n,target);
  binarySearch(arr,n,target);

}
