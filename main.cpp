#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

string buildProgressBar(const int percent)
{
    stringstream ss;

    ss << "Progress: " << setw(3) << percent << "% [";
    for(int i=0; i<100; i+=2)
    {
        if(i<=percent)
            ss << '#';
        else
            ss << '-';
    }
    ss<<']';

    return ss.str();
}

void showProgressBar(const int percent)
{
    const string bar = buildProgressBar(percent);
    const string backspace(bar.size(),'\b');

    cout << backspace << bar << flush;
}

int main()
{
    constexpr int COUNT = 200;
    for(int i=0; i<COUNT; i++)
    {
        showProgressBar(100 * i /COUNT);
        // Job emulating:
        this_thread::sleep_for(chrono::milliseconds(3000/COUNT));
    }
    showProgressBar(100);


    cout<<"\n\nPress [Enter] to continue..."<<endl;
    cin.ignore(1);
    return 0;
}

