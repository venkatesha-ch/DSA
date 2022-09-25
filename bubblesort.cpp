#include<bits/stdc++.h>

using namespace std;

int main(){
int flag = 0;
int a[] = {66,43,54,65,77, 76};
for(int i= 0; i<5; i++){
    for(int j = 0;j < 5-i; j++){
        if(a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            flag = 1;
        }
    }

}
            for(int k=0;k<6;k++)
        cout<<a[k]<<"\t";
        return 0;
}
