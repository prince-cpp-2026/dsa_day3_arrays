#include<iostream>

using namespace std;
int main(){

    int n, x;

    cout<<"Enter size of array:";
    cin>> n;

    int arr[n];

    cout<<"Enter " << n << " elements:";
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    cout<<"Enter element to search:";
    cin>> x;

    bool found = false;
    
   for(int i = 0;i < n; i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element "<<x<<" found at index"<<i<<endl;
           found = true;
           break;
        }
    }

    if(!found)
    {
        cout<<x<<" not found in array"<<endl;
    }

    return 0;
}
