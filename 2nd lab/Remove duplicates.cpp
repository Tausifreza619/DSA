#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input element number: ";
    cin>>n;
    int arr[n];
    cout<<"Input elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        bool isduplicate=false;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    cout<<"Array without duplicates: ";
    for (int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
