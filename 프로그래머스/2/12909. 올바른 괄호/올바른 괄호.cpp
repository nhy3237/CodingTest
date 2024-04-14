#include <string>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    queue<char> qChar;
    int strSize = 0;
    
    for (char c : s)
    {
        qChar.push(c);
    }
    
    while (!qChar.empty() && strSize >= 0)
    {
        if (qChar.front() == '(')
        {
            strSize++;
        }
        else
        {
            strSize--;
        }

        qChar.pop();
    }

    if (strSize != 0) answer = false;
    
    return answer;
}