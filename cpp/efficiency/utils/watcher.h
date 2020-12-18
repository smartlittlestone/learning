#include <sys/time.h>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Watcher
{
    public:
        Watcher(const string& where)
        {
            gettimeofday(&start, NULL);
            cout << "enter " << where <<", time: " << start.tv_sec << "." << start.tv_usec << endl;
        }

        ~Watcher()
        {
            gettimeofday(&end, NULL);
            double used = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
            cout << "leave..." <<", time: " << end.tv_sec << "." << end.tv_usec 
                << ", used: " << used * 1.0 / 100000 << "s" << endl;
        }


    private:
        struct timeval start;
        struct timeval end;
};
