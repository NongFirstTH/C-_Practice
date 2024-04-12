nt i = 0;i<4;i++){
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