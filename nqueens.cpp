#include<bits/stdc++.h>

using namespace std;

int total = 0;

void printsol(int x[], int n){
        total++;
            for(int a = 0; a < n; a++){
            for(int b = 0; b < n; b++){
                if(x[a] == b){
                    cout<<"1"<<" ";
                }
                else{
                    cout<<"0"<<" ";
                }

    }
    cout<<"\n";
}
cout<<"\n\n";
}

bool place(int k, int i, int x[]){
for(int j = 0; j < k; j++){
    if(x[j] == i || abs(x[j] - i) == abs(j-k)){
        return false;
    }
}
return true;
}

void nqueens(int k, int n, int x[]){

for(int i = 0; i<n; i++){
if(place(k,i,x) && k < n){
x[k] = i;
if(k == n-1){
printsol(x, n);
}
else{
        nqueens(k+1, n, x);
    }
}
}
}
int main(){
int x[6];
nqueens(0, 5, x);
cout<<"Total : "<<total;
return 0;
}
