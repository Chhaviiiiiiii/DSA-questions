#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j; k<length-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                length--;
                j--;
            }
        }
    }
    cout<<"The Array is:  ";
for(int i=0;i< length;i++){
   cout<<arr[i]<<"  ";
   
}
cout<<endl;
}


int main(){

 int arr[] = {43,43,57,78,100,45,67,43,57,100};

 int  length = sizeof(arr)/sizeof(int);

cout<<"The Array is:  ";
for(int i=0;i< length;i++){
   cout<<arr[i]<<"  ";
   
}
cout<<endl;

  removeDuplicate(arr, length);

}