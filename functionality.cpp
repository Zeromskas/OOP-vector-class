#include "vector.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    vector<int> original;
    Vector<int> custom;

//reserve

    cout << "***" << endl;

    cout<<".reserve(10)"<<endl;

    original.reserve(10);
    custom.reserve(10);

    cout<<"   original capacity = "<<original.capacity()<<endl;
    cout <<"   custom capacity = " <<custom.capacity() << endl;

    if(original.capacity()==custom.capacity())
        cout<<"[PASSED]"<<endl;
    else
        cout<<"[FAILED]"<<endl;

    cout<<"***"<<endl<<endl;

//push_back

    cout << "***" << endl;

    cout<<".push_back(1, 2, 3)"<<endl;

    original.push_back(1);
    original.push_back(2);
    original.push_back(3);

    custom.push_back(1);
    custom.push_back(2);
    custom.push_back(3);

    cout<<"   original items: ";
    for(int i=0; i<original.size(); i++)
        cout<<original[i]<<" ";
    cout<<endl;
    cout << "   custom   items: ";
    for (int i = 0; i < custom.size(); i++)
        cout << custom[i] << " ";
    cout << endl;

    bool pushback_pass = false;
    if(custom.size()==original.size())
    {
        pushback_pass = true;
        for (int i = 0; i < original.size(); i++)
            if(original[i]!=custom[i])
                pushback_pass = false;
    }
    if(pushback_pass)
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl << endl;

//size

    cout << "***" << endl;

    cout<<".size()"<< endl;

    cout<<"   original size = "<<original.size()<<endl;
    cout<<"   custom   size = "<<custom.size()<<endl;

    if (original.size() == custom.size())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl<<endl;

    // capacity

    cout << "***" << endl;

    cout << ".capacity()" << endl;

    cout << "   original capacity = " << original.capacity() << endl;
    cout << "   custom   capacity = " << custom.capacity() << endl;

    if (original.capacity() == custom.capacity())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    // empty

    cout << "***" << endl;

    cout << ".empty()" << endl;

    cout << "   original is empty = " << original.empty() << endl;
    cout << "   custom   is empty = " << custom.empty() << endl;

    if (original.empty() == custom.empty())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    // front

    cout << "***" << endl;

    cout << ".front()" << endl;

    cout << "   original front = " << original.front() << endl;
    cout << "   custom   front = " << custom.front() << endl;

    if (original.front() == custom.front())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    // back

    cout << "***" << endl;

    cout << ".back()" << endl;

    cout << "   original back = " << original.back() << endl;
    cout << "   custom   back = " << custom.back() << endl;

    if (original.back() == custom.back())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    // at

    cout << "***" << endl;

    cout << ".at(2)" << endl;

    cout << "   original at 2 = " << original.at(2) << endl;
    cout << "   custom   at 2 = " << custom.at(2) << endl;

    if (original.at(2) == custom.at(2))
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    // pop_back

    cout << "***" << endl;

    cout << ".pop_back()" << endl;

    cout << "   original before = ";
    for(auto i: original)
        cout<<i<<" ";
    cout<<endl;
    cout << "   custom   before = ";
    for (auto i : custom)
        cout << i << " ";
    cout << endl;

    original.pop_back();
    custom.pop_back();

    cout << "   original after = ";
    for (auto i : original)
        cout << i << " ";
    cout << endl;
    cout << "   custom   after = ";
    for (auto i : custom)
        cout << i << " ";
    cout << endl;

    bool popback_pass = false;
    if (custom.size() == original.size())
    {
        popback_pass = true;
        for (int i = 0; i < original.size(); i++)
            if (original[i] != custom[i])
                popback_pass = false;
    }
    if (popback_pass)
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;

    //clear

    cout << "***" << endl;

    cout << ".clear()" << endl;

    original.clear();
    custom.clear();

    cout << "   original after = ";
    for (auto i : original)
        cout << i << " ";
    cout << endl;
    cout << "   custom   after = ";
    for (auto i : custom)
        cout << i << " ";
    cout << endl;

    if (original.empty() == custom.empty())
        cout << "[PASSED]" << endl;
    else
        cout << "[FAILED]" << endl;

    cout << "***" << endl
         << endl;
}