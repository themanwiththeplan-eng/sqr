#include<iostream>
#include<cmath>

using namespace std;

int main(){
int i;
int a;
for(int i=11;i<100;i++){
    int a=pow(i,2);
    cout<<a;

    if(sqrt(a)== sqrt(pow(i,2))){
        return a;

    }else{
    return i;}
}



return 0;
}
