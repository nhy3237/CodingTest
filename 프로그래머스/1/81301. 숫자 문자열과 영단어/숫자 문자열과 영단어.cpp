#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> num, nResult;
    string strTemp;
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            num.push_back(s[i]- 48);
        }
        else
        {
            strTemp.clear();
            while (!isdigit(s[i]))
            {
                strTemp += s[i];

                if (!strTemp.compare("zero"))
                {
                    num.push_back(0);
                    break;
                }
                else if (!strTemp.compare("one"))
                {
                    num.push_back(1);
                    break;
                }
                else if (!strTemp.compare("two"))
                {
                    num.push_back(2);
                    break;
                }
                else if (!strTemp.compare("three"))
                {
                    num.push_back(3);
                    break;
                }
                else if (!strTemp.compare("four"))
                {
                    num.push_back(4);
                    break;
                }
                else if (!strTemp.compare("five"))
                {
                    num.push_back(5);
                    break;
                }
                else if (!strTemp.compare("six"))
                {
                    num.push_back(6);
                    break;
                }
                else if (!strTemp.compare("seven"))
                {
                    num.push_back(7);
                    break;
                }
                else if (!strTemp.compare("eight"))
                {
                    num.push_back(8);
                    break;
                }
                else if (!strTemp.compare("nine"))
                {
                    num.push_back(9);
                    break;
                }

                i++;
            }
        }
    }

    for (int i = num.size() - 1; i >= 0; i--)
    {
        answer += num[i] * pow(10, cnt);
        cnt++;
    }
    return answer;
}