
//Calculator by using stack STL including only the operations plus, minus, multiply, and divide, using floating point 

// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
#include <string>
#include <stack>

using namespace std;

#include <cassert>

int main()
{

  
  stack<double> k;
  string buff;
  double z;
  
  while(true)
  {
    cout<<"Enter: ";
    for (stack<double> copy = k; !copy.empty(); copy.pop())
      cout << copy.top() <<"   ";
    getline(cin,buff);
    
    //quit
    
    if(buff == "Q")
      break;
    
    // add
    
    if (buff == "+" && k.size()>=2)
    {
      double a = k.top();
      k.pop();
      double b = k.top();
      k.pop();
      double c = b+a;
      k.push(c);
    }
    
    //  minus
    
    else if (buff == "-" &&k.size()>=2)
    {
      double a= k.top();
      k.pop();
      double b= k.top();
      k.pop();
      double c = b-a;
      k.push(c);
    }
    
    //multiplication
    
    else if (buff == "*" &&k.size()>=2)
    {
      double a= k.top();
      k.pop();
      double b= k.top();
      k.pop();
      double c = b*a;
      k.push(c);
    }
    
    //divide
    
    else if (buff == "/" &&k.size()>=2)
    {
      double a= k.top();
      k.pop();
      double b= k.top();
      k.pop();
      double c = b/a;
      k.push(c);
    }
    else
    {
      z = atof(buff.c_str());
      k.push(z);
    }
  }
}
