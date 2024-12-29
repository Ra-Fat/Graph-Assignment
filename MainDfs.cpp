#include<iostream>
#include "DFS.hpp"
using namespace std;
int main(){
    Edge g(5); 
    g.AddEdge(0, 1);     
    g.AddEdge(0, 4);     
    g.AddEdge(1, 2);     
    g.AddEdge(1, 3);     
    g.AddEdge(3,4);
    g.DFS(0);
    return 0;
}