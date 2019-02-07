#include <iostream>

using namespace std;

int main(){
int a=0;
int b=0;
int result=0;
bool end=false;

cout<<"input a";
cin>>a;
cout<<"input b";
cin>>b;
 while (end==false){
        result++;
    if(result*b>a){
        result--;
        end=true;
    }

 }

 cout<<"final result is "<<result<<endl;


    return 0;
}
