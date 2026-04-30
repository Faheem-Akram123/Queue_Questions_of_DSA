// Queue using two stack
#include "../DSA-headerFiles-using-Cpp/myStack.h"

template <typename T>
void edqueue(myStack<T> *s, const int &v)
{
    s->push(v);
}

template <typename T>
int dequeue(myStack<T> *s1)
{
    myStack<int> s2(100);
    while (!s1->isEmpty())
    {
        s2.push(s1->pop());
    }
    int value = s2.pop();
    while (!s2.isEmpty())
    {
        s1->push(s2.pop());
    }
    return value;
}

template <typename T>
int peek(myStack<T> *s1)
{
    myStack<int> s2(100);
    while (!s1->isEmpty())
    {
        s2.push(s1->pop());
    }
    int value = s2.top();
    while (!s2.isEmpty())
    {
        s1->push(s2.pop());
    }
    return value;
}

int main()
{
    myStack<int> s1(100);

    edqueue(&s1, 1);
    edqueue(&s1, 2);
    edqueue(&s1, 3);
    edqueue(&s1, 4);
    edqueue(&s1, 5);

    s1.display();
    cout << endl;

    cout << dequeue(&s1) << endl;
    s1.display();
    cout<<endl;
    cout << peek(&s1) << endl;

    cout<<endl;
    s1.display();
}