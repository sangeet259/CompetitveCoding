#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int flag =1;
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }
        std::vector<int> row_sum(n,0);
        std::vector<int> col_sum(n,0);
        // your code goes here
        // So we have this square matrix of nXn size 
        // traverse through it's diagonal elements
        // compute the row sum and col sum 
        // if row sum == col sum , then possible , else impossible
        for (int i = 0; i < n; ++i)
        {
              // Now we are at at a particular target 
              // compute the required
              
              // row sum for row i
              for (int j = 0; j < n; ++j)
               {
                 row_sum[i]=row_sum[i]+M[i][j];
               }
              // col sum for col i
              for (int j = 0; j < n; ++j)
               {
                 col_sum[i]=col_sum[i]+M[j][i];
               }


        }
        sort(row_sum.begin(),row_sum.end());
        sort(col_sum.begin(),col_sum.end());
        if (row_sum==col_sum)
        {
          cout<<"Possible"<<endl;
        }
        else
        {
          cout<<"Impossible"<<endl;
        }




    }
    return 0;
}
