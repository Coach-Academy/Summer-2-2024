#include <iostream>
using namespace std;
int main() {
   int matrix[5][5];
   int row_of_one,col_of_one;
   for(int i=0;i<5;++i){ 
       for(int j=0;j<5;++j){
           cin>>matrix[i][j];
          if (matrix[i][j] == 1){
            row_of_one=i+1;
            col_of_one=j+1;
          }

        }
   }

       
   
int moive =abs(row_of_one-3)+abs(col_of_one-3);

cout<<moive;

return 0 ; 

}