#include <iostream>
using namespace std;
void max (int arr[],int n){

    int maximum=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i] > maximum){
            maximum = arr[i];
        }
    }

    cout<<"MAX is: "<<maximum<<endl;

   
}

void min (int arr[],int n){

    int minimum=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i] <  minimum){
            minimum = arr[i];
        }
    }

    cout<<"MIN is: "<<minimum<<endl;
}

void secondLargest(int arr[], int n){

     int maximum = arr[0];
     int secondLargest;

     for (int i=1;i<n;i++){

  if (arr[i] > maximum){
      secondLargest = maximum;
      maximum = arr[i];

  }
else if (arr[i] > secondLargest && arr[i] < maximum ){
 
      secondLargest = arr[i];

}

     }
     cout<<"the secondlargest is: "<<secondLargest<<endl;
 
}

int main (){

    int arr[5] = {152,456,657,585,47};

    int n = sizeof(arr)/sizeof(int);

    
// max(arr,n);
// min(arr,n);

secondLargest(arr,n);
}