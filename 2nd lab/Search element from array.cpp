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
    int k;
    cout<<"Input element for searching: "<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
