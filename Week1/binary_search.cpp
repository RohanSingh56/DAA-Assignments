#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size,key,flag;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        cin>>key;
        int min=0,max=size-1,ctr=0;
        while(max>=min)
        {
            int mid=(min+max)/2;
            if(key == a[mid])
            {
                ctr++;
                cout<<"Present"<<" "<<ctr<<endl;
                flag=1;
                break;
            }
            else if(key<a[mid])
            {
                max=mid-1;
                ctr++;
            }
            else if(key>a[mid])
            {
                min=mid+1;
                ctr++;
            }

        }
        if(flag==0)
        cout<<"Not present"<<" "<<ctr++<<endl;
    }
}
