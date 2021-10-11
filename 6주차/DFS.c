#include <stdio.h>
#include <stdbool.h>

bool visited[9];
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

    void dfs(int x) {
    visited[x] = true;
    printf("%d",x);
        for (int node=0;node<=2;node++) {
        if(graph[x][node]){
        // 인접한 노드가 방문한 적이 없다면 DFS 수행
        int j= graph[x][node];
            if(!visited[j]) {
                 dfs(j);
            }
        }
        }
    }
int main(void) {
    dfs(1); 
}