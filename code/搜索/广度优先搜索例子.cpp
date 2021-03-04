#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

const int MAXN = 1e5 + 10;
struct Status{
    int position;
    int time;
    Status(){}
    Status(int p,int t):position(p),time(t){}
};
bool visit[MAXN];

int BFS(int n,int k){
    queue<Status> myQueue;
    myQueue.push(Status(n,0));
    visit[n] = true;
    while(!myQueue.empty()){
        Status current = myQueue.front();
        if(current.position == k)
            return current.time;
        else{
            myQueue.pop();
            for(int i=0;i<3;++i){
                Status next = current;
                if(i==0)
                    next.position -= 1;
                else if(i==1)
                    next.position += 1;
                else
                    next.position *= 2;
                next.time++;
                if(next.position < 0 || next.position > 1e5 || visit[next.position]){
                    continue;
                }
                myQueue.push(next);
                visit[next.position] = true;
            }
        }
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    memset(visit,false,sizeof(visit));
    cout << BFS(n,k) << endl;
    return 0;
}