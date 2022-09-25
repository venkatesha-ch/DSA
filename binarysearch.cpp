#include<bits/stdc++.h>

using namespace std;

int main(){
int a[] = {1, 3, 5, 7,8,22};
int mid,low,high;
low = 0;
high = 6;
int ele = 7;
while(low<high){
    mid = (low+high)/2;
    if(a[mid] == ele){
        cout<<mid+1;
        return 0;
    }
    if(ele < a[mid]){
        high = mid;
    }
    else{
        low = mid+1;
    }
}

cout<<-1;
return 0;
}
