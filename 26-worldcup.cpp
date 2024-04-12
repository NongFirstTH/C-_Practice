#include <iostream>
#include <string>
using namespace std;

int main(){
    int goal[4][4],score[4],goal_total[4],goal_num[4],sum[4];
    string team[4];
    for(int i = 0;i<4;i++){
        score[i] = 0;
        goal_total[i] = 0;
        goal_num[i] = 0;
        sum[i] = 0;
        cin >> team[i];
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cin >> goal[i][j];
        }
    }
    for(int i = 0;i<4;i++){
        for(int j = i;j<4;j++){
           if(i==j) continue;

           if(goal[i][j] == goal[j][i]){
                score[i]++;
                score[j]++;
           }else{
                goal[i][j] > goal[j][i] ? score[i]+=3 : score[j]+=3;
           }

           if(goal[j][i]!=0) sum[i] += abs(goal[j][i] - goal[i][j]);
           else sum[j] += abs(goal[j][i] - goal[i][j]);

            goal_num[i]+=goal[i][j];
            goal_num[j]+=goal[j][i];

        }
            goal_total[i] = goal_num[i] - sum[i];
    }
   
    for(int i = 0;i<4;i++){
        for(int j = i;j<4;j++){
           if(i==j) continue;

            if(score[i] != score[j]){
                if(score[i] < score[j]){
                    swap(score[i],score[j]);
                    swap(goal_total[i],goal_total[j]);
                    swap(goal_num[i],goal_num[j]);
                    swap(team[i],team[j]);
                }
            }else if(goal_total[i] != goal_total[j]){
                if(goal_total[i] < goal_total[j]){
                    swap(score[i],score[j]);
                    swap(goal_total[i],goal_total[j]);
                    swap(goal_num[i],goal_num[j]);
                    swap(team[i],team[j]);
                }
            }else if(goal_num[i] != goal_num[j]){
                if(goal_num[i] < goal_num[j]){
                    swap(score[i],score[j]);
                    swap(goal_total[i],goal_total[j]);
                    swap(goal_num[i],goal_num[j]);
                    swap(team[i],team[j]);
                }
            }
        }
    }

    for(int i = 0;i<4;i++)
    cout << team[i] << ' ' << score[i] << endl;

    return 0;   
}