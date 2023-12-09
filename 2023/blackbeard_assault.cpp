#include<bits/stdc++.h>
using namespace std;
void convert(vector<vector<int>>& mat,int i,int j,int n,int m,int value)
{
    if(j<0 || j==m) return;
    if(i<0 || i==n) return;
    if(mat[i][j]!=value) return;

    mat[i][j]=-2;
    convert(mat,i+1,j,n,m,value);
    convert(mat,i-1,j,n,m,value);
    convert(mat,i,j+1,n,m,value);
    convert(mat,i,j-1,n,m,value);
    

}
void sink(vector<vector<int>>& mat,int i,int j,int n,int m,int height,int &count)
{
    if(i<0 || i==n) return;
    if(j<0 || j==m) return;
    if(mat[i][j]==-1) return;
    if(mat[i][j]>height) return;
    int temp_height=mat[i][j];
    
    if(temp_height!=0 && temp_height!=-2) {
        //cout<<i<<" "<<j<<endl;
        count++;
    }
    if(temp_height!=-2)convert(mat,i,j,n,m,temp_height);
    mat[i][j]=-1;
    sink(mat,i+1,j,n,m,height,count);
    sink(mat,i-1,j,n,m,height,count);
    sink(mat,i,j+1,n,m,height,count);
    sink(mat,i,j-1,n,m,height,count);

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int px,py;
    cin>>px>>py;
    int height;
    cin>>height;
    if(mat[px][py]!=0) cout<<"NONE";
    else 
    {
        int count=0;
        int current=0;
        sink(mat,px,py,n,m,height,count);
        cout<<count;
    }
    //cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++) cout<<mat[i][j]<<" ";
    //     cout<<endl;
    // }
    return 0;
}