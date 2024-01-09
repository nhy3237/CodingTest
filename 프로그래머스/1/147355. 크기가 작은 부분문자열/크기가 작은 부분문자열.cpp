#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    vector<long long> num;
    string strTemp;

    for (int i = 0; i < t.size(); i++)
    {
        if (i + p.size() <= t.size())
        {
            for (int j = i; j < i + p.size(); j++)
            {
                strTemp += t[j];
            }
            num.push_back(stol(strTemp));
            strTemp.clear();
        }
    }

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] <= stol(p)) answer++;
    }

    return answer;
}