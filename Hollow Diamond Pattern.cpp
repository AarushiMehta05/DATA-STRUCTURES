#include <iostream>
using namespace std;
int main () {

	int tr;
	cin>> tr;

	int i=1;
	while (i<= tr){

	cout<< '*'<<'\t';
	i=i+1;
	}
	cout<< endl;

	int rn=1;
	while (rn<= (tr-1)/2) {

		int j=1;
		while (j<= (tr+1)/2 -rn){
			cout<< '*'<<'\t';
			j=j+1;
		}

		int k=1;
		while (k<= 2*rn-1){
			cout<< ' '<<'\t';
			k=k+1;
		}

		int L=1;
		while(L<= (tr+1)/2 -rn){
			cout<< '*'<<'\t';
			L=L+1;
			}
			cout<<endl;
			rn=rn+1;
	}

	rn=1;
	while (rn<= (tr-3)/2 ) {

		int m=1;
		while (m<= rn+1){

			cout<<'*'<<'\t';
			m=m+1;
		}
		int n=1;
		while (n<= tr-2*(rn+1)){
			cout<< ' '<<'\t';
			n=n+1;
		}

		int p=1;
		while (p<= rn+1){
			cout<< '*'<<'\t';
			p=p+1;
		}

		cout<< endl;
		rn=rn+1;
		}
        int q=1;
        while (q<=tr){
            cout <<'*'<<'\t';
            q=q+1;
        }

	return 0;
}
	
        
	