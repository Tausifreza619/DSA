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
    int sum[n];
    sum[0]=arr[0];
    int j=0;
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[j]+arr[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }
    return 0;
}



