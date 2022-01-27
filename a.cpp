#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using ui = unsigned int;


void TreeSpoons(ui n) 
{
    ui temp = 2;
    ui depth = 0;
    while (n >= temp) {
        n -= temp;
        temp *= 2;
        depth++;
    }
    cout << depth << ' ' << (n != 0 ? temp - n : 0) << endl;
}

int main()
{
    ui n;
    cin >> n;
    TreeSpoons(n);
    return 0;
}