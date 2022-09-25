#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

int n, a[100], b[50], i, j, k;

for(i = 2; i< 50; i++){
    a[i] = i;
}
for(i = 2; i < sqrt(50); i++){
    if(a[i] != 0){
            j = i * i;
        while( j < 50){
            a[j] = 0;
            j = j + i;
        }
    }
}
//k = 0;
for(i = 2; i< 50; i ++){
    if (a[i] != 0){
        cout<<a[i]<<"\t";
        //k++;
    }
}
}
