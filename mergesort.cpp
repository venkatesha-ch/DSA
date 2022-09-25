#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void merge_s(int low, int mid, int high, int a[]){
    int i = low;
    int j = mid+1;
    int k = low;
    int b[100];
    while(i<=mid && j<=high){
        if(a[i] < a[j]){
            b[k] = a[i];
            k++;
            i++;
        }
        else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k] = a[j];
        j++;
        k++;
    }
    for(int i=low; i<=high; i++){
    a[i] = b[i];
}

    }

void merge_fun(int low, int high, int a[]){
if(low<high){
    int mid = (low+high)/2;
    merge_fun(low, mid, a);
    merge_fun(mid+1, high, a);
    merge_s(low,mid,high, a);
}
}

int main(){
int a[] = {10,20,1,5,4,2,1};
for(int i=0;i<7;i++){
    cout<<a[i]<<"\t";
}
cout<<"\n";
merge_fun(0, 6, a);
cout<<"\n";
for(int i=0;i<7;i++){
    cout<<a[i]<<"\t";
}
return 0;
}
