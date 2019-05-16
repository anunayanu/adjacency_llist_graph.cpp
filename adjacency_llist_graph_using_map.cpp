#include<iostream>
#include<cstring>
#include<list>
#include<map>
using namespace std;

template<typename T>
class Graph
{

    map<T, list<T>> adjlist;

public:

    void add_edge(T s, T d, bool isdirec=true)
    {
        adjlist[s].push_back(d);

        if(isdirec)
            adjlist[d].push_back(s);

    }

    void printelements()
    {
        for(auto row : adjlist)
        {

            T key = row.first;

            cout<<"cities connected to\t"<<key<<"\t>-\t";

            for(T element : row.second)

                cout<<element<<", ";
            cout<<endl;

        }

    }
};

int main()
{
    Graph<string> g;

    g.add_edge("patna", "delhi");
    g.add_edge("patna","kota");
    g.add_edge("patna", "lucknow");
    g.add_edge("delhi", "kota");
    g.add_edge("kota", "lucknow");

    g.printelements();

    return 0;
}
