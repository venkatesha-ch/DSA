#include<bits/stdc++.h>

using namespace std;



int partition(int low, int high,int a[]){
int i = low;
int j = high;
int pivot = a[low];
while(i < j){
    while(pivot >= a[i] && i <= high){
        i++;
    }
    while(pivot<a[j] && j>0)
        j--;
}
if(i < j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
else{
        int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
}
return j;
}


void quicks(int low, int high, int a[]){
    if(low<high){
        int j = partition(low, high, a);
        cout<<j<<"\n";
        quicks(low,j,a);
        quicks(j+1, high,a);
    }
}

int main(){
int a[] = {7, 5, 3, 4, 2, 1};
for(int i=0;i<6;i++)
    cout<<a[i]<<"\t";
    cout<<"\n";
quicks(0,5,a);
for(int i=0;i<6;i++)
    cout<<a[i]<<"\t";
return 0;
}

