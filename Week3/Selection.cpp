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
        int ctr=0,s=0;
        for(int i=0;i<size-1;i++)
        {
            int min=i;
            for(int j=i+1;j<size;j++)
            if(a[j]<a[min])
            {
                min=j;
                ctr++;
            }
            else 
                ctr++;
            swap(a[min],a[i]);
            s++;
        }
        for(int i=0;i<size;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparisons = "<<ctr<<"\nSwaps = "<<s<<endl;
    }
}
