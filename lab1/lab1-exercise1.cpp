#include <iostream>
using namespace std;
int main() {
    int time;
    int h;
    int m;
    int s;
    cout << "please input the elapsed time for event in seconds:" << endl;
    cin >> time;
    h = time / (60*60);
    time %= 3600;
    m = time / 60;
    s = time % 60;
    cout << "elapsed time:" << h << ":" << m << ":" << s << endl;

    return 0;
}