#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 1;
    stack<char> sStr;

    for (char c : s)
    {
        if (!sStr.empty() && c == sStr.top())
        {
            sStr.pop();
        }
        else
        {
            sStr.push(c);
        }
    }

    if (!sStr.empty())
    {
        answer = 0;
    }

    return answer;
}