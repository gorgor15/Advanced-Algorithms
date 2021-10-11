#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool visited[9];
int graph[9][3] = {{0,}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
int queue[MAX] ;

    void bfs(int v) {
        int f,r=0;
        queue[r]=v;
        r++;
        visited[v] = true;
        printf("%d ",v);
    while(f<r){
        int pop = queue[f];
        f++;
            for (int node=0;node<=2;node++) {
            if(graph[pop][node]){
            // 인접한 노드가 방문한 적이 없다면 DFS 수행
            int j= graph[pop][node];
                if(!visited[j]) {
                     visited[j] = true;
                     queue[r]=j;
                     r++;
                     printf("%d ",j);
                }
            }
            }
        }
    }
int main(void) {
    bfs(1); 
}