#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements are in the shelf? : ";
    cin>>n;
    int j=n;
    int s[n+1];
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
    cout<<"\nWhich element do you wanna insert? :";
    cin>>item;
    cout<<"What is the position of the element? :";
    cin>>position;
    for(int i=position;i<n+1;i++)
    {
        s[j+1]=s[j];
        j--;
    }
    s[position]=item;
    cout<<"New shelf(After inserting): "<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}

