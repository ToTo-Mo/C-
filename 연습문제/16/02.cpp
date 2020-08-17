/*
2. 스택(stack)은 나중에 들어온 요소가 먼저 나가는 자료 구조이다. 
정수들이 저장된 Stack 클래스를 가정하자. Stack은 정수들이 저장된 
배열을 멤버 변수로 가진다. Stack은 데이터를 추가하는 push()와 
스택에서 데이터를 삭제하는 pop() 연산을 가진다. 만약 pop()연산이 
호출되었는데 데이터가 없으면 "Stack Underflow"라는 예외를 발생하라. 
반대로 데이터가 가득한 상황에서 push()가 호출되면 "Stack Overflow"
라는 예외를 발생하라. Stack 객체를 main() 안에서 생성하여 테스트
하라. try/catch 블록을 이용하여서 예외를 처리하도록 하라.
*/

#include <iostream>
#include <exception>
using namespace std;

class Stack{
private:
    int* stack;
    int top;
    int size;
public:
    Stack(){
        Stack(10);
    }
    Stack(int size = 10){
        this->size = size;
        stack = new int[this->size];
        top = -1;
    }

    bool isFull(){
        return top >= size - 1;
    }

    bool isEmpty(){
        return top <= -1;
    }

    void push(int value){
        try
        {
            if(isFull())
                throw exception("Stack Overflow");
            
            stack[++top] = value;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            stack[top] = value;
        }
    }

    int pop(){
        try
        {
            if(isEmpty())
                throw exception("Stack Underflow");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        return stack[top--];
    }
};

void main(){
    Stack stack(2);

    stack.push(12);
    stack.push(23);
    cout<<stack.pop()<<endl;
    stack.push(34);
    stack.push(45);
    cout<<stack.pop()<<endl;
}