#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a= 12, b = 45;

    cout<<"a:"<<a<<"\tb:"<<b<<endl;
    swap(a, b);
    cout<<"a:"<<a<<"\tb:"<<b<<endl;
    return 0;
}