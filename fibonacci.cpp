#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number Of terms: ";
    cin>>n;

    int t1=0, t2=1, nt;
    int a[100], k=0, count=0;
    for (int i=0; i<n; i++)
    {
        a[k] = t1;
        k++;
        count++;
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    cout<<"Fabonacci Series..........."<<endl;
    for (int k=0; k<count; k++){
        cout<<a[k]<<" ";
    }

    int q[200], var=0, count2=0;
    for(int b=1;b<=a[n-1];b++){
        q[var] = b;
        var++;
        count2++;
    }

    cout<<endl;

    cout<<"Missing numbers............. "<<endl;
    int pos, t=0;
    for (int i=2; i<count; i++)
    {
        pos = a[i]-1-t;
        for (int var=pos; var<count2; var++)
        {
            q[var] = q[var+1];
        }
        t++;
    }
    for (int var=0; var < count2-t; var++)
    {
        cout<<q[var]<<" ";
    }

    return 0;
    
}