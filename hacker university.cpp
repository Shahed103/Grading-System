#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
int k =A[i]%5;
if(A[i]>=38 && k>=3)
{
    A[i]=A[i]+(5-k);
    }
cout<<A[i]<<endl;

    }
return 0;
}
