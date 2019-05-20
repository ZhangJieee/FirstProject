#ifndef HELLO_H
#define HELLO_H

#include <string>
class Hello
{
public:
    Hello();
    Hello(const Hello&);
    Hello& operator=(const Hello&);

    void Display();

private:
    std::string s;
};

#endif //HELLO_H
