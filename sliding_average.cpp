#include <deque>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;
// Type your code here, or load an example.
int main(void)
{
    vector<vector<int>> input_blocks = 
    {
        {1, 2, 3, 4},
        {1, 4, 5, 6, 7}
    };
    deque<int> window(3, 0);
    for (auto input: input_blocks)
    {
       for(const auto a : input)
       {
           window.push_back(a);
           window.pop_front();
           auto s = std::accumulate(window.begin(), window.end(), 0);
           auto avg = static_cast<double>(s) / window.size();
           cout.precision(3);
           cout << avg << "\t\t";
       }
       cout <<"\n";
    }

    return 0;
}