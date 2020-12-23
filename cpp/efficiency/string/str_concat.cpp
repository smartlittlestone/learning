#include "common_header.h"
#include "watcher.h"

void test_str_plus(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)	
    {
        str = str + "hello, world";
    }
    //cout << str << endl;
}

void test_str_plus_equal(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)	
    {
        str += "hello, world";
    }
    //cout << str << endl;
}

void test_str_append(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)	
    {
        str.append("hello").append(",world");
    }
    //cout << str << endl;
}

void test_str_stream(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    stringstream ss;
    for(long i = 0; i < loop_times; ++i)
    {
        ss << "hello, world";
    }
    //cout << ss.str() << endl;
}

void test_str_move(long loop_times)
{
    Watcher watcher(__FUNCTION__);
    string str = "";
    for(long i = 0; i < loop_times; ++i)
    {
       str = move(string("hello,")) + move(string("world"));
    }
    //cout << ss.str() << endl;
}

int main()
{
    long loop_times = 100000;
    test_str_plus(loop_times);
    cout << endl;

    test_str_move(loop_times);
    cout << endl;

    test_str_stream(loop_times);
    cout << endl;

    test_str_plus_equal(loop_times);
    cout << endl;

    test_str_append(loop_times);
    cout << endl;

    return 0;
}

