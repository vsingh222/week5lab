#include <iostream>
#include <math.h>
#include <fstream>
int main()
{
int a,b;
std::cout<<"write the length  of triangle  : ";
std::cin>>a;
std::cout<<"write the  breadth of triangle : ";
std::cin>>b;
auto c=sqrt(pow(a,2)+pow(b,2));
std::cout<<"weadth of triangle : "<<c;
std::ofstream myfile;
myfile.open("example.txt");
if (myfile<<"your trianle has three sides = length  "<<a<<", bredth "<<b<<",  weadth "<<c);

myfile.close() ;


    return 0;
}
