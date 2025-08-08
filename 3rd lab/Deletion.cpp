#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements are in the shelf? : ";
    cin>>n;
    int j=n;
    int s[n];
    cout<<"Input elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<"Shelf: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    int item,position;
    cout<<"\nWhich element do you wanna delete? :";
    cin>>item;
    cout<<"What is the position of the element? :";
    cin>>position;
    item=s[position];
    n=n-1;
    for(int i=position;i<n;i++)
    {
        s[i]=s[i+1];
    }
    cout<<"New shelf(After deleting): "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
