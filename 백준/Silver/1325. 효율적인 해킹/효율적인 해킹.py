from collections import deque
import sys

def bfs(start_node):
    visited=[0 for _ in range(N+1)]
    visited[start_node]=1
    need_visited=deque()
    need_visited.append(start_node)
    count=1
    while need_visited:
        node=need_visited.popleft()
        for i in graph[node]:
            if not visited[i]:
                need_visited.append(i)
                visited[i]=1
                count+=1
    return count

N, M = map(int, sys.stdin.readline().split())
graph=dict()

for i in range(N):
    graph[i+1]=[]

for _ in range(M):
    a, b=map(int, sys.stdin.readline().split())
    graph[b].append(a)

max=0
max_list=[]

for j in range(1, N+1):
    tmp=bfs(j)
    if tmp>max:
        max=tmp
        max_list=[j]
    elif tmp==max:
        max_list.append(j)

print(*max_list)