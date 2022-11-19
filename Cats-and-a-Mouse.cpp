#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

string catAndMouse(int x, int y, int z)
{
    string result = "Cat A";
    int x_z = std::abs(x-z);
    int y_z = std::abs(y-z);
    
    if (x_z > y_z)
    {
        result = "Cat B";
    }
    else if (x_z == y_z)
    {
        result = "Mouse C";
    }
    
    return result;
}
