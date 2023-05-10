#include "vector.h"
#include <vector>
#include <iostream>



using namespace std;

int main()
{

    vector<int> size = { 100000000 };
                         

    std::chrono::high_resolution_clock::time_point start_time, end_time;
    std::chrono::duration<double> dur1;
    std::chrono::duration<double> dur2;

    int perskirtymas1=0, perskirtymas2=0;
    for(auto sz : size)
    {
        
        cout<<sz<<endl;
        start_time = std::chrono::high_resolution_clock::now();

        std::vector<int> v1;
        for (int i = 1; i <= sz; ++i)
        {
            if (v1.capacity() == v1.size())
                perskirtymas1++;
            v1.push_back(i);
        }

        end_time = std::chrono::high_resolution_clock::now();
        
        dur1 = end_time - start_time;
        cout<<dur1.count()<<endl;

        start_time = std::chrono::high_resolution_clock::now();

        Vector<int> v2;
        for (int i = 1; i <= sz; ++i)
        {
            if(v2.capacity() == v2.size())
                perskirtymas2++;
            v2.push_back(i);
        }

        end_time = std::chrono::high_resolution_clock::now();
        dur2 = end_time - start_time;
        cout << dur2.count() << endl;
        cout << 100*(dur2.count() - dur1.count()) / dur1.count() <<"%"<< endl;
        cout<<endl;
        v1.clear();
        v1.shrink_to_fit();
        v2.clear();
        v2.shrink_to_fit();

    }
    cout<<perskirtymas1<<endl;
    cout<<perskirtymas2<<endl;

}