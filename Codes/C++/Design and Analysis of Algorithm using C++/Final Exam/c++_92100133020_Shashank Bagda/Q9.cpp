// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 9

#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int weight, value;
};

bool comparison(Item a, Item b)
{
    return(a.value > b.value);
}

int knapsack(Item items[], int n, int capacity)
{
    sort(items, items + n, comparison);
    int totalValue = 0, currentWeight = 0;

    for(int i=0; i<n; i++)
    {
        if(currentWeight + items[i].weight <= capacity)
        {
            currentWeight += items[i].weight;
            totalValue += items[i].weight;
        }
    }
    return totalValue;
}
int main ()
{
    Item items[] = {{1,1}, {2,5}, {3,11}, {4,9}, {5,10}, {6,17}, {7,17}, {8,20}};
    int capacity = 8;
    int n = sizeof(items) / sizeof(items[0]);
    cout<<"The maximum profit can be earned is : "<<knapsack(items, n, capacity);
    
    return 0;
}