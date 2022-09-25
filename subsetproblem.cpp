#include<bits/stdc++.h>

using namespace std;

int x[10];
int m = 6;
int w[] = {2,4,2,6,1,5,1,2,5,8};
int sum(int a[]){
    int sum = 0;
int n = sizeof(a)/ sizeof(a[0]);
for(int i =0; i<n; i++){
    sum+=a[i];
}
return sum;
}
//void subsetsum(int wsofar, int k, int remainingw){
//
//x[k] = 1;
//if(wsofar + w[k] == m){
//    cout<<"found\t";
//    for(int i = 0; i<k+1;i++){
//        if(x[i] == 1){
//            cout<<w[i]<<"\t";
//        }
//    }
//return;
//}
//if(wsofar+ w[k]<=m && k<2){
//        subsetsum(wsofar+w[k], k+1, remainingw - w[k]);
//
//
//}
////if(wsofar + w[k] + w[k+1] >= m && k < 4 && w[k+1] > w[k]){
////    x[k] = 0;
////    subsetsum(wsofar, k+1, remainingw);
////}
//if((wsofar + w[k+1] <= m && k<2) || wsofar + w[k] + w[k+1] >= m ){
//        x[k] = 0;
//    subsetsum(wsofar, k+1, remainingw);
//}
//
//}

void subsetsum(int wsofar, int k, int remainingw){

x[k] = 1;
if(wsofar + w[k] == m){
    cout<<"found\t";
    for(int i = 0; i<k+1;i++){
        if(x[i] == 1){
            cout<<w[i]<<"\t";
        }
    }
}
if(wsofar+ w[k] + w[k+1] <=m){
        subsetsum(wsofar+w[k], k+1, remainingw - w[k]);


}
if(wsofar + remainingw - w[k] >= m && wsofar + w[k+1] <= m){
            x[k] = 0;
    subsetsum(wsofar, k+1, remainingw - w[k]);
}
//if(wsofar + w[k] + w[k+1] >= m && k < 4 && w[k+1] > w[k]){
//    x[k] = 0;
//    subsetsum(wsofar, k+1, remainingw);
//}
//if((wsofar + w[k+1] <= m && k<2) || wsofar + w[k] + w[k+1] >= m ){
//        x[k] = 0;
//    subsetsum(wsofar, k+1, remainingw);
//}

}


int main(){
subsetsum(0, 0, 36);

return 0;
}
