#include<iostream>
using namespace std;
int main(){
    int x,*y,**z;
    x=15;
    y=&x;
    z=&y;
    cout<<*y;
    cout<<**z;
}

