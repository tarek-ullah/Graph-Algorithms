/***
  This will work only for unweighted and undirected graph
  Author : H. M. Tarek Ullah
  Email : tarekullah.py@gmail.com
  Date : 29/01/17
***/

#include<bits/stdc++.h>
using namespace std ;

void addEdge(vector<int> adj[], int u, int m)
    {

        adj[u].push_back(m);
        adj[m].push_back(u);
    }

void printGraph(vector<int> adj[], int V)
{
    for(int n =0;n <V ;n++)
    {
        for(vector<int>::iterator it=adj[n].begin() ;it !=adj[n].end();it++)  //it is the iterator
        {
            cout << "Node" << n << "is connected via edge with " ;
             cout << *it << "\n" ;
        }
        cout <<"\n" ;

    }
}

int main()
  {
      ios_base ::sync_with_stdio(false) ;
      cin.tie(NULL) ;


      cout <<"Enter total number of vertices :" << endl ;
      int V= 0 ; // total number of nodes
      cin >>V ;

      vector<int> adj[V] ;

      addEdge(adj, 0, 1);
      addEdge(adj, 0, 4);
      addEdge(adj, 1, 2);
      addEdge(adj, 1, 3);
      addEdge(adj, 1, 4);
      addEdge(adj, 2, 3);
      addEdge(adj, 3, 4);

      printGraph(adj, V) ;



return 0 ;
}
