#include <iostream>

using namespace std;

int main()
{
    int h,v;
    double g;
    cout << "Inaltimea mm : ";
    cin >> h;
    cout << "varsta ani: ";
    cin >> v;
    g = 50 + 0.75 * (h - 150) + 0.25 * (v - 20);
    cout << "Greutatea ideala la barbati este: " << g << "kg" << endl;
    cout << "Greutatea ideala la femei este: " << 0.9*g << "kg" <<endl;
    return 0;
}
