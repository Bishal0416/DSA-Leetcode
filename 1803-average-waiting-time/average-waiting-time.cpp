class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time = customers[0][0];

        double avg_time = 0;
        for(auto cus : customers){

            if(time >= cus[0]){
                time += cus[1];
                int wait = time - cus[0];
                avg_time += wait;
            }
            else{
                time = cus[0];
                time += cus[1];
                int wait = time - cus[0];
                avg_time += wait;
            }
        }

        return avg_time/customers.size();

    }
};