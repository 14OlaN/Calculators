//- - - - - - - - - - - - - - - - - - - - MAIN - - - - - - - - - - - - - - - - - - - -
#include <iostream>
#include <string>
#include "programs.cpp"
#include "header.h"
using namespace std;

string cont;

int main()
{
    cout<<"SIMPLE CALCULATORS";
    do{
        cout<<"\n\nPROGRAMS\n";
        cout<<"1\tGreatest Common Factor\n2\tLeast Common Multiple\n3\tFinding Nth Number in the Fibonacci Sequence\n4\tExponents";
        cout<<"\n5\tDifference in Time - how much time has passed\n6\tDistance Between Two Points (given the coordinates)\n7\tPrime Factorization\n\n";
        cout<<"Choose a program and enter the corresponding number\n";
        cin>>program;
        if(program==1)
            gcf();
        if(program==2)
            lcm();
        if(program==3)
            fib();
        if(program==4)
            exp();
        if(program==5)
            timed();
        if(program==6)
            coord();
        if(program==7)
            primef();
        cout<<"Do you want to make another calculation? Type YES or NO\n";
        cin>>cont;
    }while(cont=="YES" || cont=="yes");
}
