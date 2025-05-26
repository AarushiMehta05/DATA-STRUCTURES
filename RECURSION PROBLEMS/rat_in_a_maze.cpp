#include<iostream>
using namespace std;
int sol[100][100]={0};
bool f(char mat[100][100],int i,int j,int tr,int tc){
	if(i==tr-1 and j==tc-1){
		sol[i][j]=1;
		for (int l = 0; l <tr;l++)
		{
			for(int k=0;k<tc;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;
		return true;
	}

	// base  case
	sol[i][j]=1;
	// forward
	if(j<=tc-2 and mat[i][j+1]!='X'){
		bool kyapathmila=f(mat,i,j+1,tr,tc);
		if(kyapathmila==true){
			return true;
		}
	}
	// donward
	if(i<=tr-2 and mat[i+1][j]!='X'){
		bool kyapathmila=f(mat,i+1,j,tr,tc);
		if(kyapathmila==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;

}

int main(){
int tr;
int tc;
cin>>tr>>tc;
char mat[100][100];
for(int i=0;i<tr;i++){
    for(int j=0;j<tc;j++){
        cin>>mat[i][j];
    }
}

	f(mat,0,0,tr,tc);





	return 0;
}
