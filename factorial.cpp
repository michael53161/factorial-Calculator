#include<iostream>
using namespace std; 

int main()
{
     long int factorial; 
     int number;
     
     cout<<"Enter a whole number: ";
     cin>>number;
     
     if(number<0)
     {
          cout<<"There is no factorial for negative numbers
     }
      else 
     {
        for (int x=1;x<=number;x++)
        {
           factorial *= x; 
        }  
     }
     
     cout<<"factorial of "<<number<<" is "<<factorial<<endl;
     

return 0; 
}
