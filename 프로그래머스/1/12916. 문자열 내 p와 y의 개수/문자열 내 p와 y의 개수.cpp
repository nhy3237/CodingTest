#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (tolower(s[i]) == 'p')
        {
            pCount++;
        }
        else if (tolower(s[i]) == 'y')
        {
            yCount++;
        }
    }

    if (pCount != yCount)
    {
        answer = false;
    }

    return answer;
}