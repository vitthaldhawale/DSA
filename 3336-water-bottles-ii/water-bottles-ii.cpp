class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full = 0;
        int empty = numBottles;
        int drunk = numBottles;
        while(full>=empty || empty>=numExchange)
        {
            while(empty>=numExchange)
            {
                full++;
                empty-=numExchange;
                numExchange++;
            }
            drunk+=full;
            empty += full; 
            full = 0;
        }
        return drunk;
    }
};