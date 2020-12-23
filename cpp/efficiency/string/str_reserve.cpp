#include "common_header.h"
#include "watcher.h"

void test_no_reserve(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)
    {
        string str1 = "I am a cpp developer";
        string str2 = "really, me too";
        str += str1;
        str += str2;
    }
}

void test_reserve(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)
    {
        string str1 = "I am a cpp developer";
        string str2 = "really, me too";
        str.reserve(str1.length() + str2.length());
    }
}

int main()
{
    long loop_times = 100000;
    test_no_reserve(loop_times);
    cout << endl;
    test_reserve(loop_times);
    return 0;
}
