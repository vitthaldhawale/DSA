class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i=0;
        int j=0;
        int n=gas.size();
        int m=cost.size();
        int total_gas=0;
        int current_gas=0;
        int starting=i;
        while(i<n && j<m)
        {
            int rem_gas=gas[i]-cost[j];
            total_gas+=rem_gas;
            current_gas+=rem_gas;
            if(current_gas<0)
            {
                starting=i+1;
                current_gas=0;
            }            
            i++;
            j++;
        }
        if(total_gas>=0 && current_gas>=0) return starting;
        return -1;
    }
};