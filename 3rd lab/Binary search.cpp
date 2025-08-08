#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array size : ";
    cin>>n;
    int s[n];
    cout<<"Input elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    cout<<"Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<" ";
    }
    int item,position;
    cout<<"\nWhich element do you wanna search? :";
    cin>>item;
    int Beg=0,End=n-1,Mid=0;
    while(Beg<=End)
    {
        Mid=int((Beg+End)/2);
        if(s[Mid]==item)
        {
            position=Mid;
            break;
        }
        else if(item<s[Mid])
        {
            End=Mid-1;
        }
        else
        {
            Beg=Mid+1;
        }

    }

    cout<<"Location of the element: "<<position;
    return 0;
}

