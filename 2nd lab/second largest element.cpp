#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int largest=a[0],sec_largest=-2222222;
    for(int i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>sec_largest&&a[i]<largest)
        {
            sec_largest=a[i];
        }
    }
    if(sec_largest==-2222222)
    {
        cout<<"There is no second largest element."<<endl;
    }
    else
    {
        cout<<"The second largest element of the array is: "<<sec_largest<<endl;
    }
    return 0;
}

