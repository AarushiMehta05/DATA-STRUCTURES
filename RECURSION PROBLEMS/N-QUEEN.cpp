
#include<iostream>
using namespace std;


 int sol[100][100]={0};
bool queenrakhu(int sol[100][100],int n, int i,int j){
    //upar
    for(int l=0;l<i;l++){
        if(sol[l][j]==1){
            return false;
        }
    }

    //dig right
    int u=i-1;
    int v=j+1;
    while(u>=0 &&v<n){
        if(sol[u][v]==1){
            return false;
        }
        u--;
        v++;
    }

    //dig left
    u=i-1;
    v=j-1;
    while(u>=0 &&v>=0){
        if(sol[u][v]==1){
            return false;
        }
        u--;
        v--;
    }
    return true;
}

bool nqueen(int n,int i){

//b case
if(i==n){
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cout<<sol[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    return false;
}

for(int j=0;j<n;j++){
    if(queenrakhu(sol,n,i,j)==true){
            sol[i][j]=1;
        bool aagequeen= nqueen(n,i+1);
        if(aagequeen==true){
            return true;
        }
        sol[i][j]=0;
    }

}
return false;
}

int main(){
int n;
cin>>n;
nqueen(n,0);
return 0;
}

