# Graph-Assignment

1. BFS Traversal
Breadth-First Search (BFS) starts from a vertex, explores its grand-child or we call it neighbors and go through one by one. BFS was handle by queue

BFS Steps:
_ Initialize the queue the startVertex and mark it as visited
_ Process each vertex its unvisited neigbors and add them to queue
_go through until empty queue

Output:
For eadges:
[0,4],[1,2],[1,3],[3,4]
BFS starting from vertex 0 outputs: 0,1,4,2,3
It shows that BFS explores all neighbors before moving deeper.

Observations:
_BFS is effective for shortest-path discovery in unweighted graphs.
_edge list representation is simple but can be optimized for large graphs with adjacency lists or matrices.
_BFS reveals connectivity; unreachable vertices indicate disconnected components.


2. DFS Traversal
Depth-First Search (DFS) starts from a vertex, explores as far as possible along each branch, and backtracks when necessary.DFS was handle by stack and an unordered set tracks visited vertices.

DFS Steps:
_Start with the startVertex, mark it as visited, and push it onto the stack.
_Process the top vertex, visiting an unvisited neighbor and pushing it onto the stack.
_If no unvisited neighbors remain, backtrack by popping the stack.
_go through until empty stack

Output:
For eadges:
[0,4],[1,2],[1,3],[3,4]
BFS starting from vertex 0 outputs: 0,1,2,3,4
It shows that DFS explores as deep as possible before backtracking.

Observations:
_DFS effectively explores connectivity and detects cycles in a graph.
_The traversal order depends on the sequence of edges, making it useful
_The edge list representation works but can be optimized with adjacency lists for faster neighbor lookups in large graphs.
