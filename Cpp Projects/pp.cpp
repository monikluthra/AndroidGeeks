#include <iostream>
using namespace std;
int main()
{
    int i, j,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
