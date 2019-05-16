#include<iostream>
#include<list>
using namespace std;

class Graph
{
    int v;
    list<int> *listarr ;

    public:

    Graph(int ver)
    {
        v=ver;
        listarr = new list<int>[v];

    }

    void add_edge(int s, int d, bool bidirec=true)
    {
        //listarr[s]=listarr.push_back(d);
        listarr[s].push_back(d);

        if(bidirec)
            listarr[d].push_back(s);

    }

    void print_graph()
    {
        for(int i=0; i<v; i++)
        {
            cout<<"vertices joined to vertex "<<i<<" are >- ";

            for(int data : listarr[i])
            {
                cout<<data<<" ";
            }
            cout<<endl;
        }

    }

};
int main()
{
    Graph g(4);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(0,3);
    g.add_edge(1,2);
    g.add_edge(2,3);

    g.print_graph();
    return 0;
}
