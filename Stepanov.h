#include <iostream>
using namespace std;
int Max(int a,int b,int c)
{
   
    int s=0;
    s = a > b ? a: b;
    s = s > c ? s: c;
    return s;
}
int Min(int a,int b,int c)
{
   
    int s=0;
    s = a > b ? b: a;
    s = s > c ? c: s;
    return s;
}
float Sred(float a,float b,float c)
{
    return (a+b+c)3;
}
int Sum (int a,int b)
{
    return(a+b);
}
int Minus (int a,int b)
{
    return(a-b);
}
float Del(float a,float b)
{
    int s=b!=0?a/b:0;
    return s;
}
int Search (int a,int b)
{
    int s = a < 0? a:b;
    return s;
}