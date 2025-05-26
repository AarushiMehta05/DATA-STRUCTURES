#include <iostream>
using namespace std;
int main() {

int tn;
cin >> tn;
int rn=1;

int i=1;
while (i<=tn-1) {
    cout<< ' ';
    i=i+1;
}

int s=1;
while (s<=tn) {

    cout<< '*';
    s=s+1;
}
cout<< endl;

 rn=1;
 while (rn<= tn-2) {

     int a=1;
     while (a<= tn-rn-1) {
         cout<< ' ';
         a=a+1;
     }

     int b=1;
     while (b<=1) {
         cout<< '*';
         b=b+1;
     }

     int c=1;
     while (c<= tn-2) {
         cout<< ' ';
         c=c+1;
     }

     int d=1;
     while (d<= 1) {
         cout<< '*';
         d=d+1;
     }
     cout<< endl;
     rn=rn+1;
 }


int h=1;
while (h<=tn) {

    cout<< '*';
    h=h+1;
}


   return 0;
}
