#include<bits/stdc++.h>
using namespace std;

class Class1
{
public:
    int a;
};

class Class2
{
public:
    int b;
};


class FinalClass: public Class1, public Class2
{
public:
    int getMultiply(int a,int b,int c)
    {
        return a*b*c;
    }
};

int main()
{
    FinalClass obj;
    cout<<obj.getMultiply(3,4,5)<<endl;
    return 0;
}
