#include <iostream>
using namespace std;
int main () {

int tr;  //5
cin>> tr;

int stno=tr;
int rn=1;             //11  tr*2+1
while (rn<=tr){
     stno=tr;
    int a=1;
    while (a<=rn){
        
        cout<< stno<<'\t';
        stno=stno-1;
        a=a+1;
    }
    
    int b=1;
    while (b<= (tr-rn)*2+1){
        
        cout<< " "<<'\t';
        b=b+1;
    }
    stno=tr-rn+1;
    int c=1;
    while (c<= rn){
        
    cout<< stno<<'\t';
    stno=stno+1;
    c=c+1;
    }
    
    cout<<endl;
    rn=rn+1;
    
    
}
stno=tr;
int l=stno;
   while (l>=0){
       cout<<l<<'\t';
       l=l-1;
   }
   l=l+2;
   while (l<=tr){
       cout<<l<<'\t';
       l=l+1;
   }
   cout<<endl;
   
   
   rn=1;
   while (rn<= tr){
       
       int stt=tr;
       int y=1;
       while (y<= tr+1-rn){
           cout << stt<<'\t';
           stt=stt-1;
           y=y+1;
       }
       
       int t=1;
       while (t<= 2*rn-1){
           cout<< " "<<'\t';
           t=t+1;
       }
       
       stno=rn;
       int q=1;
       while (q<= tr+1-rn){
           cout<< stno<<'\t';
           stno=stno+1;
           q=q+1;
       }
       
      cout<< endl;
      rn=rn+1;
       
   }
return 0;
}