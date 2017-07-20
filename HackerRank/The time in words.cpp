#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result;
    string linker="";
    map<int,string> store{ {0,"zero"},{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"},{10,"ten"},{11,"eleven"},{12,"twelve"},{13,"thirteen"},{14,"fourteen"},{15,"quarter"},{16,"sixteen"},{17,"sevteen"},{18,"eighteen"},{19,"ninteen"},{20,"twenty"},{21,"twenty one"},{22,"twenty two"},{23,"twenty three"},{24,"twenty four"},{25,"twenty five"},{26,"twenty six"},{27,"twenty seven"},{28,"twenty eight"},{29,"twenty nine"},{30,"thirty"}};
    if (m<=30)
    {
        linker="past";
        
    }
    else{
     
        linker="to";
        m=60-m;
        h++;
    }
                          
                          
    if (m!=30 && m!=0 && m!=15)
    {
        result = store[m]+" minutes "+linker+" "+store[h];
    }
    else if (m==30)
    {
        result = "half past "+store[h];
    }
    else if (m==0){
        result = store[h] + " o' clock";
    }
    else if (m==15){
        result = store[m]+" "+linker+" "+store[h];
    }
    cout<<result;
    
    
    return 0;
    
}