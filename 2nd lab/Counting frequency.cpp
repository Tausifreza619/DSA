#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input element number: ";
    cin>>n;
    int arr[n+5];
    cout<<"Input elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int unique[n+5];
    int unique_count=0;
    for (int i=0;i<n;i++)
    {
        bool found=false;
        for (int j=0;j<unique_count;j++)
        {
            if (arr[i]==unique[j])
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            unique[unique_count]=arr[i];
            unique_count++;
        }
    }

    cout<<"Frequency of elements: "<<endl;
    for(int i=0;i<unique_count;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(unique[i]==arr[j])
            {
                count++;
            }
        }
        cout<<unique[i]<<":"<<count;
        if(i!=unique_count-1)
        {
            cout<<",";
        }
    }
    cout<<endl;
    return 0;
}
