#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size,ctr=0,flag=0;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int start=0;
        ctr++;
        if(key==a[start])
        {
            cout<<"Present"<<ctr<<endl;
            flag=1;
        }
        int end=2;
        ctr++;
        while(a[end]<=key && end<size)
        {
            start=end;
            end+=2;
            ctr++;
        }
        if(end>=size)
            end=size-1;
        if(flag==0)
        {
            for(int i=start;i<=end;i++)
            {
                ctr++;
                if(key==a[i])
                {
                    cout<<"Present"<<" "<<ctr<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"Not present"<<" "<<ctr<<endl;    
    }
}
