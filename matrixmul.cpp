
#include<iostream>
#include<bits/stdc++.h>

#include<vector>

using namespace std;

int main(){
vector<vector<int>> a {{1,2},{3,4}};
vector<vector<int>> b {{5,6},{7,8}};

vector<vector<int>> c(2,vector<int>(2));
int i,j,k, sum;

for(i = 0; i<2; i++){
    for(j = 0; j<2;j++){
        sum = 0;
        for(k = 0; k<2;k++){
            sum = sum + (a[i][k] * b[k][j]);
        }
        c[i][j] = sum;
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<2;j++){
        cout<<c[i][j]<<"\t";
    }
}

return 0;
}





