# Backtracking-Algo
Backtracking is a general algorithm for finding solutions to some computational problems, notably constraint satisfaction problems, that incrementally builds candidates to the solutions, and abandons a candidate ("backtracks") as soon as it determines that the candidate cannot possibly be completed to a valid solution
# Pseudocode of BFS Algo
Input: s as the source node
 
BFS (G, s)
let Q be queue.
Q.enqueue( s )
 
mark s as visited
while ( Q is not empty)
v = Q.dequeue( )
 
for all neighbors w of v in Graph G
if w is not visited
Q.enqueue( w )
mark w as visited
# Pseudocode of DFS Algo
DFS(G,v)   ( v is the vertex where the search starts )
         Stack S := {};   ( start with an empty stack )
         for each vertex u, set visited[u] := false;
         push S, v;
         while (S is not empty) do
            u := pop S;
            if (not visited[u]) then
               visited[u] := true;
               for each unvisited neighbour w of u
                  push S, w;
            end if
         end while
      END DFS()
