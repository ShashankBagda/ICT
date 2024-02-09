#include <iostream>

using namespace std;

int main()
{
    int weight[5] = {1, 3, 5, 7, 9};
    int profit[5] = {10,20,30,40,50};
    int capacity = 100;
    
    for(int i = 0; i < 4; i++)
    {
        cout << weight[i] << " " << profit[i] << endl;
    }
    
    return 0;
}
