#include <iostream>
#include <cmath>
using namespace std;
bool numrakhu(int mat[100][100], int i, int j,int num, int n){
// verticle
for(int l=0;l<n;l++){
    if(mat[l][j]==num){
        return false;
    }
}

//horizontal
for(int m=0;m<n;m++){
    if(mat[i][m]==num){
        return false;
    }
}

//root*n root*n
int p=sqrt(n);
int si= (i/p)*p;
int sj=(j/p)*p;

for(int k=si;k<=si+p-1;k++){
    for(int o=sj;o<=sj+p-1;o++){
        if (mat[k][o]==num){
            return false;
        }
    }
}
return true;
}

bool sudukosolver(int mat[100][100], int i, int j, int n){
    //b case
    if (i==n){
        for(int l=0;l<n;l++){
        for(int k=0;k<n;k++){
            cout<<mat[l][k]<<" ";
        }
        cout<<endl;
    }
    return true;
}

//r case
if(j==n){
    sudukosolver(mat,i+1,0,n);
}

if(mat[i][j]!=0){
    sudukosolver(mat,i,j+1,n);
}

else{
    for(int num=1; num<=n;num++){
        if(numrakhu(mat,i,j,num,n)==true){
            mat[i][j]=num;
        bool aageans= sudukosolver(mat,i,j+1,n);
        if (aageans==true){
            return true;
        }
        mat[i][j]=0;
        }
        
    }
}
return false;
}
int main (){
    int n;
    cin>>n;
int mat[100][100];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
}
sudukosolver(mat,0,0,n);
    return 0;
}