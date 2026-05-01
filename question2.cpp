// Remove duplicate letters and store result in lexicographical order

#include "../DSA-headerFiles-using-Cpp/myQueue.h"
#include <string>

int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    myQueue<char> q1(str.length());
    myQueue<char> q2(str.length());

    for (int i = 0; i < str.length(); i++)
    {
        q1.enqueue(str[i]);
    }
    q1.display();

    q2.enqueue(q1.dequeue());

    
}