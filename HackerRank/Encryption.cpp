#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int row=0, col =0 ;
string strip_it(string &s)
{
	string s2="";
	for (int i = 0; i < s.length(); ++i)
	{
		if (!(s[i]==' ' || s[i]=='\n'))
		{
			s2=s2+s[i];
		}
	}
	return s2;
}
void optimise_row_col(double lower_bound, double upper_bound, int tex_len)
{
	
	for (row=lower_bound; row<=upper_bound;row++)
	{
		for (col=row; col<= upper_bound; col++)
		{
			if((col*row)>=tex_len)
			{
				return;
			}
		}
	}
}


int main(){
    string s;
    getline(cin,s);
    string result = strip_it(s);
    /*cout<<result<<endl;*/
    int tex_len = result.length();
    /*cout<<tex_len*//*<<endl;
*/
    double lower_bound = floor(sqrt(tex_len));
    double upper_bound = ceil(sqrt(tex_len));
    //define a function which takes the lower and upper bound and returns the row and column
    /*printf("The lower bound is %f , upper bound is %f . tex_len is %d\n", lower_bound,upper_bound,tex_len);*/
    optimise_row_col(lower_bound,upper_bound, tex_len);
    /*printf("Row is %d , col is %d\n",row,col);*/
    //iterate till columns and print characters at a gap of row
    int count=0;
    for (int i = 0; i <col ; i++)
    {
    	/*printf("value of i is %d\n",i );*/
    	for (int j = i; j < tex_len; j=j+col)
    	{
    		cout<<result[j];
    		count++;
    	}
    	cout<<" ";
    }
    /*cout<<count<<endl;
*/



    return 0;

}