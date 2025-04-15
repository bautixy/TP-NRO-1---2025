/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int nota1,nota2,nota3,prom;
    cout<<"ingrese la nota";
    cin>>nota1;
    cout<<"ingrese la nota";
    cin>>nota2;
    cout<<"ingrese la nota";
    cin>>nota3;
    prom=(nota1+nota2+nota3)/3;
    if(prom>=7){
        cout<<"promocionado";}
    if(prom>=4){
        cout<<"regular"; 
      
    }
    cout<<"repobado";
    

    return 0;
}