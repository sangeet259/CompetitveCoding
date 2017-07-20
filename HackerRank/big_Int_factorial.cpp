#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int mult(int size,int res[],int x)
{
        int carry=0,prod;
        for(int j=0;j<size;j++)
            {
            prod=res[j]*x+carry;
            res[j]=prod%10;
            carry=prod/10;
        }
        while(carry)
            {
            res[size]=carry%10;
            carry=carry/10;
            size++;
        }
        return size;
}
void fact(int n)
    {
    int i,size;
    //declare res to store the result,
    // so the idea is to disintegrate the number digit by digit
    int res[200];
    //
    res[0]=1;
    size=1;
    for(i=2;i<=n;i++)
    {
        size=mult(size,res,i);
    }
    for(i=size-1;i>=0;i--)
    {
       cout<<res[i]<<endl;
    }

}
int main() {
int n;
    cin>>n;
    fact(n);
    cout<<endl;   
    return 0;
}