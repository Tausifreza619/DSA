#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements:" << endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int even=0,odd= 0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Number of even elements: "<<even<<endl;
    cout<<"Number of odd elements: "<<odd<<endl;

    return 0;
}
