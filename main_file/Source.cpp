

#include <iostream> //adding the libraries that contains the functions we need to use it in your code 

/*it's generally considered a good practice to avoid including entire namespaces "using namespace std;"
 especially in large projects, because it can lead to naming conflicts if different libraries
  define functions or classes with the same names. 
  Instead, it's often recommended to bring in only the specific components you need from the std namespace */

using std::cout;
using std::endl;



int main() 
{
//local variables :
int x=10 ;
int i=0 ;
int j ;
//how to write (in/de)crements , (pos/pre)fix :
 x++ ; //increment
 x-- ; //decrement 
 ++i ; //prefix
 i++ ; //postfix

//I)conditions :

/*we can write if condition in one ligne like this*/
 (x>=5)?cout<<"x is bigger than 5\n ":cout<<"not\n";
//1) if-else if-else : 

 if (x==0) 
  { cout<<"msg1"<<endl; }
  else if (x<=5)
  { cout<<"msg2"<<endl; }
  else (x>=20) 
  { cout<<"msg3"<<endl; }
  
   
//2)switch-case-default :
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
//II)loops:
//1)for:
for (i=0;i<4;++i)
{
 cout<<i<<":for loop\n"<<endl;
}
//reverse-order-for:
for(j=3;j>0;)
{
  cout<< j <<" : reverse for loop\n" <<endl;
  j--;
}
//2)while :


return 0;
}
