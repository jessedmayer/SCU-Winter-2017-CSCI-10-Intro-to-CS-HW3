#include <iostream>

using namespace std;

int main(){
int Max=0;
int Min=0;
double PosNum=0;
double NegNum=0;
double Avg=0;
double Total=0;
int integer;
bool end=false;

    while(end==false){
        cout<<"Input integer";
        cin>>integer;
        if (integer==0){
            end=true;
        }

        if (integer>0){
            PosNum++;
            if (integer>Max){
                    Max=integer;
                }
        }


        if(integer<0){
            NegNum++;
            if (integer<Min){
                Min=integer;
            }
        }

        Total+=integer;
        Avg=Total/(PosNum+NegNum);



    }
    cout<<"Number of Positive integers input is "<<PosNum<<endl;
    cout<<"Number of Negative integers input is "<<NegNum<<endl;
    cout<<"Max integer input is "<<Max<<endl;
    cout<<"Min integer input is "<<Min<<endl;
    cout<<"Sum total of integers is "<<Total<<endl;
    cout<<"Average of integers is "<<Avg<<endl;


    return 0;
}
