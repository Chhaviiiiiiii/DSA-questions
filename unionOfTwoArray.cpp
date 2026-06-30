#include<iostream>
using namespace std;

void unionn(int arr1[], int arr2[], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        cout << "[ " << arr1[i] << " ] ";
    }

    for(int i = 0; i < m; i++)
    {
        int flag = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "[ " << arr2[i] << " ] ";
        }
    }
}

int main()
{
    int arr1[] = {1,4,3,5,2};
    int arr2[] = {3,4,5,6};

    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);

    unionn(arr1, arr2, n, m);
}