#include<iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <list>
using namespace std;
class Edge{
    private:
        int V;
        vector<pair< int, int>> edges;
    public:
        Edge(int V){
            this->V= V;
        }
        void AddEdge(int x, int y){
            edges.push_back({x, y});
        }
        void RemoveEdge(int x, int y){
            for(auto i = edges.begin(); i != edges.end(); ++i){
                if((i->first == x && i->second == y) || (i->first == y && i->second == x)){
                    edges.erase(i);
                    return;
                }
            }
            cout<<"Edge not found !"<<endl;
        }
        void display(){
            cout<<"Edge list :  \n";
            for(auto i: edges){
                cout<< i.first << " - " << i.second <<endl;
            }
        }
        void BFS(int startVertex){
            queue<int>q;
            unordered_set<int> visited;
            q.push(startVertex);
            visited.insert(startVertex);
            cout<<"BFS starting from vertex: "<<startVertex<<endl;

            while(!q.empty()){
                int node = q.front();
                q.pop();
                cout<<node<<" ";
                for(auto edge : edges){
                if(edge.first == node && visited.find(edge.second) == visited.end()){
                    q.push(edge.second);
                    visited.insert(edge.second);
                } else if(edge.second == node && visited.find(edge.first) == visited.end()){
                    q.push(edge.first);
                    visited.insert(edge.first);
                }
            }
            }
            cout<<endl;
        }
};
