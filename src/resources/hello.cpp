#include <iostream>
#include "../includes/hello.h"

Hello::Hello():s("hello world")
{

}

Hello::Hello(const Hello& tmp)
{
    s = tmp.s;
}

Hello& Hello::operator=(const Hello& tmp)
{
    if(this == &tmp)
	    return *this;

    s = tmp.s;

    return *this;
}

void Hello::Display()
{
    std::cout<<s<<std::endl;
}
