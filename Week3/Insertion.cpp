#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        int ctr=0;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(a[j]<a[i])
                {
                    swap(a[i],a[j]);
                    ctr++;
                }
            }
        }
        for(int i=0;i<size;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparisons = "<<ctr<<"\nShifts = "<<ctr+size-1<<endl;
    }
}
