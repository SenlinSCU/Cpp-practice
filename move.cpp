#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    while (true){
        int first=p[0];
        for(int i=0;i<n-1;i++){
            p[i]=p[i+1];
        }
        p[n-1]=first;
        for(int i=0;i<n;i++){
            cout<<p[i]<<(i==n-1?"":" ");
        }
        cout<<endl;
        if(p[n-1]==n){
            break;
        }
    }
    return 0;


}