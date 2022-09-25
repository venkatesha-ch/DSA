#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int a[] = {10,25,20,20,25,25,25,25,40,25,4};
int n = sizeof(a)/ sizeof(a[0]);
int runval;
sort(a, a+n);
int runningL = 0, modF = 0, i = 0;
while(i <=n-1){
    runningL = 1;
    while( a[i+runningL] == a[i] && (i + runningL) <= n ){
        runningL++;
    }
    if(modF < runningL){
        runval = a[i];
        modF = runningL;
    }
    i++;
}
cout<<runval<<"\t"<<modF;
return 0;
}
