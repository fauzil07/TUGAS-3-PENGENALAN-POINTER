
#include<iostream>
using namespace std;
int main(){
    int x,*y,**z;
    x=10;
    y=&x;
    z=&y;
    cout<<*y;
    cout<<**z;
}

