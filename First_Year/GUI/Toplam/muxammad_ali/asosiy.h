#pragma once
using namespace System;
ref class asosiy
{
private:
    int a, b, s, d, x,v;

public:
    asosiy(int a, int b, int s, int d, int x,int v)
    {
        this->a = a;
        this->b = b;
        this->s = s;
        this->d = d;
        this->x = x;
        this->v = v;
    }

    int Yigindisi()
    {
        return a * d + b * x + s * v;
    }
};

