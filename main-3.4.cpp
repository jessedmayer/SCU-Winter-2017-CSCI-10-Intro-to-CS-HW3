#include <iostream>

using namespace std;

int main(){
int N=0;
int D=0;
int C=0;
float S=0;
float P=0.004;
float W=1.2;

cout<<"Welcome to the painter's calculator"<<endl;
cout<<"Please enter the surface area to be painted"<<endl;
cin>>S;
cout<<"Please enter the number of neighboring structures to be painted"<<endl;
cin>>C;
cout<<"Please enter the estimated number of days to complete the job"<<endl;
cin>>D;

N=1+(((P*C*S)+W)*(1+(1/static_cast<double>(D))));

cout<<"Number of gallons of paint needed for job is "<<N;

    return 0;
}
