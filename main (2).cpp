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
    int N;
    cout<<"Enter no of rooms"<<endl;
    cin >>N;
    int Rent;
    int TotalR;
    int TotalRoom;
    for(int i=0;i<=N;i++)
    {
        cout<<"enter the rent for rooms"<<endl;
        cin>>Rent;
        TotalR+=Rent;
        if(Rent<7000)
        cout<<"Subsidized Room"<<endl;
        TotalRoom++;
    }
    cout<<"Total rent"<<TotalR<<endl;
    cout<<"Total nk of rooms"<<TotalRoom<<endl;
    
    return 0;
}