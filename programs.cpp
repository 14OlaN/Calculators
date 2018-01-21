#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include "header.h"

using namespace std;

//- - - - - - - - - - - - - - - - - - - - GREATEST COMMON FACTOR - - - - - - - - - - - - - - - - - - - -
void gcf()
{
    int a,b;
    cout<<"\n\nGREATEST COMMON FACTOR CALCULATOR\n\n";
    cout<<"First number: ";
    cin>>a;
    cout<<"Second number: ";
    cin>>b;
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"\n\nGCF = "<<a<<"\n\n";
}
//- - - - - - - - - - - - - - - - - - - - LEAST COMMON MULTIPLE - - - - - - - - - - - - - - - - - - - -
void lcm()
{
    int a,b,c,d;
    cout<<"\n\nLEAST COMMON MULTIPLE CALCULATOR\n\n";
    cout<<"First number: ";
    cin>>a;
    cout<<"Second number: ";
    cin>>b;
    c=a;
    d=b;
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    b=c/a*d;
    cout<<"\n\nLCM = "<<b<<"\n\n";
}
//- - - - - - - - - - - - - - - - - - - - FIBONACCI CALCULATOR - - - - - - - - - - - - - - - - - - - -
void fib()
{
    int f,x,y,n;
    cout<<"\n\nFIBONACCI CALCULATOR\nFind the Nth number in the Fibonacci sequence\n\n";
    cout<<"Which number: ";
    cin>>n;
    cout<<"\n\n";
    x=0;
    y=1;
    if(n==0){
        cout<<"0";
    }
    else if(n==1){
        cout<<x;
    }
    else if(n==2){
        cout<<y;
    }
    else{
        for(int i=0; i<n-1; i++){
            f=x+y;
            x=y;
            y=f;
        }
        cout<<"The number is: "<<f<<"\n\n";
    }
}
//- - - - - - - - - - - - - - - - - - - - EXPONENTS - - - - - - - - - - - - - - - - - - - -
void exp()
{
    int b,p,r;
    cout<<"\n\nEXPONENT CALCULATOR\n\n";
    cout <<"Enter base number: ";
    cin>>b;
    cout<<"Enter power number (positive integer): ";
    cin>>p;
    while(p>0){
        r=b*b;
        p--;
    }
    cout<<"\n\n"<<b<<"^"<<p<<" = "<<r<<"\n\n";
}
//- - - - - - - - - - - - - - - - - - - - TIME DIFFERENCE - - - - - - - - - - - - - - - - - - - -
void timed()
{
    int s;
    cout<<"\n\nDIFFERENCE IN TIME CALCULATOR\n\n";
    cout<<"Write the number corresponding to how specific your time is:\n1 - hours\t2  - minutes\t3 - seconds: ";
    cin>>s;
    time t1, t2, difference;
    int sum1, sum2;
    cout<<"\nEnter the earlier time first, then the later time\n";
    if(s==3){
        cout<<"First time (hour, minute, second, click enter after each):\n";
        cin>>t1.hour>>t1.minute>>t1.second;
        cout<<"Second time (hour, minute, second, click enter after each):\n";
        cin>>t2.hour>>t2.minute>>t2.second;
        sum1 = (t1.hour*3600) + (t1.minute*60) + t1.second;
        sum2 = (t2.hour*3600) + (t2.minute*60) + t2.second;
        difference.hour = (sum2-sum1)/3600;
        difference.minute = ((sum2-sum1)%3600)/60;
        difference.second = ((sum2-sum1)%3600)%60;
        cout<<"\n\nTime that passed: "<<difference.hour<<" : "<<difference.minute<<" : "<<difference.second<<"\n\n";
        }
    if(s==2){
        cout<<"First time (hour, minute, click enter after each):\n";
        cin>>t1.hour>>t1.minute;
        cout<<"Second time (hour, minute, click enter after each):\n";
        cin>>t2.hour>>t2.minute;
        sum1 = (t1.hour*60) + t1.minute;
        sum2 = (t2.hour*60) + t2.minute;
        difference.hour = (sum2-sum1)/60;
        difference.minute = (sum2-sum1)%60;
        cout<<"\n\nTime that passed: "<<difference.hour<<" : "<<difference.minute<<"\n\n";
        }
    if(s==1){
        cout<<"First time (hour):";
        cin>>t1.hour;
        cout<<"\nSecond time (hour):";
        cin>>t2.hour;
        difference.hour = t2.hour-t1.hour;
        cout<<"\n\nTime that passed: "<<difference.hour<<"\n\n";
        }
}
//- - - - - - - - - - - - - - - - - - - - DISTANCE BETWEEN COORDINATES - - - - - - - - - - - - - - - - - - -
void coord()
{
    point p1;
    point p2;
    int sumx, sumy, distance;
    cout<<"\n\nDISTANCE BETWEEN POINTS\n\n";
    cout<<"First point (x coordinate, y coordinate, click enter after each):\n";
    cin>>p1.x>>p1.y;
    cout<<"\nSecond point (x coordinate, y coordinate, click enter after each):\n";
    cin>>p2.x>>p2.y;
    sumx = pow((p1.x-p2.x), 2);
    sumy = pow((p1.y-p2.y), 2);
    distance = sqrt(sumx+sumy);
    cout<<"\n\nDistance between the points: "<<distance<<"\n\n";
}
//- - - - - - - - - - - - - - - - - - - - PRIME FACTORIZATION - - - - - - - - - - - - - - - - - - - -
void primef()
{
    int x;
    cout<<"\n\nPRIME FACTORIZATION\n\n";
    cout <<"Enter number: ";
    cin >>x;
    cout<<"\n";
    for (int i=2;x>1;) {
        if (x%i==0) {
            x=x/i;
            cout<<i<<endl;
        }
        else {
            i++;
        }
    }
}
