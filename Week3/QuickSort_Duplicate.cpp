#include <iostream>
using namespace std;
int partioning(int a[], int low, int high)
{
    int pivot=a[low];
    int i = low;
    int j = high;
    do
    {
        do
        {
            ++i;
        } while(a[i]<=pivot);
        do
        {
            --j;
        } while(a[j]>pivot);
        if(i<j)
            swap(a[i], a[j]);
    } while(i<j);
    swap(a[j], a[low]);
    return j;
}
void Quick_sort(int a[], int low, int high)
{
    if(low<high)
    {
        int j = partioning(a, low, high);
        Quick_sort(a, low, j);
        Quick_sort(a, j + 1, high);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        size=size+1;
        int *a = new int[size];
        for(int i=0;i<size-1;i++)
            cin>>a[i];
        a[size-1]=INT32_MAX;
        Quick_sort(a, 0, size-1);
        int flag=0;
        for(int i=0;i<size-2;i++)
        {
            if (a[i]==a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
