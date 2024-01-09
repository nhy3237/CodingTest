#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x = 1, y = 1;

    for (int i = 1; i < (brown - 4) / 2; i++)
    {
        if (x + y != (brown - 4) / 2)
        {
            x++; 
            if (x + y == (brown - 4) / 2) break;
            y++;
        }
    }

    while (x * y > yellow)
    {
        x++;
        y--;
    }

    answer.push_back(x + 2);
    answer.push_back(y + 2);

    return answer;
}