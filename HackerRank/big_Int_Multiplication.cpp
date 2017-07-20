#include <iostream>
#include <vector>
using namespace std;

std::vector<int> product;

void multiply(std::vector<int> &large_no,int q )
{
	
	int prod=0,carry=0,result=0,i=0;
	for (i = 0; i < large_no.size(); ++i)
	{
		prod = large_no[i]*q;
		result = (prod+carry)%10;
		carry = (prod+carry)/10;
		
		if(i!=(large_no.size()-1))
		{
			product.push_back(result);
		}
		else if (i==(large_no.size()-1))
		{
			product.push_back(result);
			product.push_back(carry);
		}
	}


}

int main()
{
	std::vector<int> v;
	v={5,7,8};
	multiply(v,3);
	cout<<product[0];
	return 0;
}