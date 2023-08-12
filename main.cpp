#include <iostream>

int chooseOperant(){
    std::cout<<"choose an Operant:+,-,/,*:";
    char z={0};
    std::cin>>z;
    return z;

}

int readNumber()
{
    std::cout << "Enter a number: ";
    int x={0};
    std::cin>>x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is " << x << '\n';
}

int main()
{
    
    int x={ readNumber() };
    int y={ readNumber() };
    int op={chooseOperant()};
    if(op=='+'){
    writeAnswer(x+y);
    }
    else if(op=='-'){
    writeAnswer(x-y);
    }
    else if(op=='*'){
    writeAnswer(x*y);
    }
    else if(op=='/'){
    writeAnswer(x/y);
    }
    return 0;
}








