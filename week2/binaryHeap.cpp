// binary heap

#include <iostream>

struct node
{
    int value;
    int leftPoint;
    int rightPoint;

    // Accessors
    int getValue()
    {
        return value;
    }
    int getRight()
    {
        return rightPoint;
    }
    int getLeft()
    {
        return leftPoint;
    }

    // Modifiers
    void setValue(int newValue)
    {
        value = newValue;
    }
    void setLeft(int newKey)
    {
        leftPoint = newKey;
    }
    void setRight(int newKey)
    {
        rightPoint = newKey;
    }
};

struct heap
{
    node Nodes[10] = {};
    bool full = false;
    int start = -1;

    for (int i = 0; i < 10; i++)
    {
        Nodes[i].setLeft(i + 1);
    }
    Nodes[i].setLeft(-1);

    void setStart(int newStart)
    {
        start = newStart;
    }

    int getStart()
    {
        return start;
    }

    bool isFull()
    {

    }
}


int main()
{
    using namespace std;
    int array[10] = {5, 16, 14, 10, 8, 7, 8, 3, 2, 4};
    node Nodes[10] = {};

    // Generate array of nodes

    for (int i = 0; i < 10; i++)
    {
        int next = Nodes[0].getLeft();
        if (Nodes[next])
    }
    // Generator tested and works, but not in order


    cout << endl << " ";

    return 0;
}