#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
string text = "sgvcience";
string a = "s";
int n = text.length();
int m = a.length();
int j;
for(int i=0;i <(n); i++){
    j = 0;
    while(j<m && text[i+j] == a[j]){
        j++;
    }
    if(j == m){
        cout<<"Found at "<< i;
        return 0;
    }
}
cout<<"not found";

return 0;

}
