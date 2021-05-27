
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele,index=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to delete";
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        cout<<"elemet is not found";
        return 0;
    }
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"array after deleting the element is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}