#include<iostream>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,key,comp=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
        for(int i=0;i<n;i++)
        { 
            comp++;
            if(key==a[i])
            {
                cout<<"present"<<"  ";
                break;

            }
        }
        cout<<comp<<endl;


    }
    
    return 0;
}
