#include<iostream>
using namespace std;
int main()
{
    int arr[15],c=0,i,n,f=0;
    int key;
    cout<<"Enter the range"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter key element"<<endl;
    cin>>key;
    for(i=0;i<=n-1;i++)
    {
        c++;
        if(key==arr[i])
        {
            f++;
            break;
        }
    }
    if(f!=0)
    {
        cout<<key<<" found successfully"<<endl;
        cout<<"Comparisons required is "<<c<<endl;
    }
    else
    {
        cout<<key<<" was not found"<<endl;
        cout<<"Number of comparisons required is "<<n<<endl;
    }
    return 0;
}
