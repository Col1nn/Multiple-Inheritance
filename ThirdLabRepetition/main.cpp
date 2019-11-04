//
//  main.cpp
//  ThirdLabRepetition
//
//  Created by Mateusz Kot on 04/11/2019.
//  Copyright © 2019 Mateusz Kot. All rights reserved.
//

/*
Make simple 4 classes with default constructors showing a message -> B and C
inherit from A, D inherits from B and C later provide method m in A, call d.m
in main later provide virtual
*/

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Class A constructor" << endl;
    }
    void m()
    {
        cout << "Multiple inheritance" << endl;
    }
    
};

class B: public virtual A
{
public:
    B()
    {
        cout << "Class B(constructor) inherits from class A" << endl;
        
    }
    
};

class C: public virtual A
{
public:
    C()
    {
        cout << "Class C(constructor) inherits from class A" << endl;
    }
};

class D: public B, public C
{
public:
    D()
    {
        cout << "Class D(constructor) inherits from class A and B" << endl;

    }
    
};

int main()
{
    D d;
    d.m();
    return 0;
}

