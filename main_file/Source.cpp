

#include <iostream> //adding the libraries that contains the functions we need to use it in your code 

/*it's generally considered a good practice to avoid including entire namespaces "using namespace std;"
 especially in large projects, because it can lead to naming conflicts if different libraries
  define functions or classes with the same names. 
  Instead, it's often recommended to bring in only the specific components you need from the std namespace */

using std::cout;
using std::endl;
//


int main() 
{

int x=10 ;
int i=0 ;

 x++ ; //increment
 x-- ; //decrement 
 //++i ; //prefix
 //i++ ; //postfix

//conditions :
/*we can write if condition in one ligne like this*/
 (x>=5)?cout<<"x is bigger than 5\n ":cout<<"not\n";
/*
 if () 
  { cout<<"msg"<<endl; }
  else if ()
  { cout<<"msg"<<endl; }
  else () 
  {cout<<"msg"<<endl;}
} 

*/

//
 switch(x) {
  case 3 :
   cout<<"not equal to\n";
  break ;
  case 10 :
  cout<<"equal\n ";
  break;
  default : 
  cout<<"error\n" ; 
 }
//loops:
for (i=0;i<4;++i)
{
 cout<<i<<":for loop\n"<<endl;
}
/*
int j ;
for(j=3;j>0;)
{
  cout<< j <<" : reverse for loop\n" <<endl;
  j--;
}

*/

return 0;
}
