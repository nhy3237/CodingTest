#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int nDiv = 10;
    
    while (n / nDiv >= 1)
    {
        answer.push_back(n % nDiv);
        n /= nDiv;
    }
    answer.push_back(n);
    return answer;
}