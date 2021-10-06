#include<iostream>
using namespace std;

int main()
{
     int arr[20],n,i,j;
     cout<<"\nEnter number of elements : ";
    cin>>n;
    cout<<"\nEnter the unsorted elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int temp;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i - 1;
        while((temp<arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
     cout<<"\n\nThe elements after sorting are : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }
    
    return 0;
}
