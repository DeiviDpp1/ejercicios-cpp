#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int A,B;
    std::cout<<"Ingrese dos numeros:"<<std::endl;
    std::cin>>A>>B;
    while(B!=0){
        int r=A%B;
        A=B;
        B=r;
    }
    std::cout<<"El maximo comun divisor es: "<<A<<std::endl;
    return 0;

}