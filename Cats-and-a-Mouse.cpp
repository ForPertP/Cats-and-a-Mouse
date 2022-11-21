#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

string catAndMouse(int x, int y, int z)
{
    string result = "Mouse C";
    int x_z = std::abs(x-z);
    int y_z = std::abs(y-z);
    
    if (x_z < y_z)
    {
        result = "Cat A";
    }
    else if (x_z > y_z)
    {
        result = "Cat B";
    }
    
    return result;
}
