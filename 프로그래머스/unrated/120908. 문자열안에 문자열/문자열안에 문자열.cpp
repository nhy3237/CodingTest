#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
    int temp = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[0])
        {
            if(str2.length() == 1 && i == str2.length() - 1) return 1;
            if (i + str2.length() > str1.length()) return 2;
            temp = i + 1;
            for (int j = 1; j < str2.length(); j++)
            {
                if (str1[temp] != str2[j]) continue;
                if (j == str2.length() - 1) return 1;
                temp++;
            }
        }
    }
    return 2;
}