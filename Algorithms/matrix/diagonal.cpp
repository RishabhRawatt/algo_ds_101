#include<bits/stdc++.h>

using namespace std;

void create(int A[],int n){
    int ele=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
         cin>>ele;
         if(ele!=0 && i==j){
             A[i]=ele;
         }
         }
         }
     
}

int display(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                cout<<"0 ";
            }
        
        else
        cout<<A[i]<<" ";
    }
    cout<<endl;
    }
}

int main()
{
    int *A,n=4;
    A=new int[n];
    create(A,n);
    display(A,n); 
    return 0;
}
