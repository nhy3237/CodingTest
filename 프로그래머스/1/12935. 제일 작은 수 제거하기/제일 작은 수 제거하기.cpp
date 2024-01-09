#include <string>
#include <vector>

using namespace std;

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int idxDelete = 0;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                idxDelete = j;
                i = j;
            }
            else idxDelete = i;

            if (j == arr.size() - 1)
            {
                i = arr.size() - 1;
                break;
            }
        }
    }

    int temp = arr[idxDelete];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == temp)
        {
            arr.erase(arr.begin() + i);
        }
    }

    if (arr.size() == 0) arr.push_back(-1);

    return arr;
}