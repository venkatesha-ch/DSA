#include<iostream>
#include<bits/stdc++.h>




using namespace std;


unsigned long int fibono(int n){
if(n == 0){
    return 0;
}
if(n == 1){
    return 1;
}
return fibono(n-1) + fibono(n-2);

}
int main(){
unsigned long int a[100];
a[0] = 0;
a[1] = 1;
for(int i =2; i<20; i++){
    a[i] = a[i-1] + a[i-2];
}
for(int i=0;i<20;i++){
    cout<<i<<"\t"<<a[i]<<"\n";
}
cout<<fibono(30);
return 0;
}


