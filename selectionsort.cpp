#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int a[5] = {5,4,3,2,1};
int i,j,pos,small, temp;

for(i = 0; i<3; i++){
    small = a[i];
    for(j = i+1; j < 5; j++){
        if(a[j]<small){
            small = a[j];
            pos = j;
        }
    }
    temp = a[pos];
    a[pos] = a[i];
    a[i] = temp;
}
for(i = 0; i<5; i++){
    cout<<a[i]<<"\t";
}
return 0;
}
