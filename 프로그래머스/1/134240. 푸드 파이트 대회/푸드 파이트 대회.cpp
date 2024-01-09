#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";

    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] - food[i] % 2; j++)
        {     
                answer.insert(answer.size() / 2, to_string(i));
            
        }
    }

    answer.insert(answer.size() / 2, "0");
    
    return answer;
}