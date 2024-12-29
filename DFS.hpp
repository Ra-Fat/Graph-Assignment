#include <iostream>
#include <vector>
#include <unordered_set>
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
        void DfsHelper(int node, unordered_set<int> &visited){
            visited.insert(node);
            cout << node << " ";

            for (auto edge : edges) {
                if (edge.first == node && visited.find(edge.second) == visited.end()) {
                    DfsHelper(edge.second, visited);
                } else if (edge.second == node && visited.find(edge.first) == visited.end()) {
                    DfsHelper(edge.first, visited);
                }
            }
        }
        void DFS(int startVertex){
            unordered_set<int> visited;
            cout<<"DFS starting from vertex  "<< startVertex<<endl;
            DfsHelper(startVertex, visited);
            cout<<endl;
        }
};