class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dis1 = 0;
        int dis2 = 0;
        if(x>=z && y>=z)
        {
            dis1 = x-z;
            dis2 = y-z;
        }
        else if(x>=z && y<=z)
        {
            dis1 = x-z;
            dis2 = z-y;
        }
        else if(x<=z && y>=z)
        {
            dis1 = z-x;
            dis2 = y-z;
        }
        else if(x<=z && y<=z)
        {
            dis1 = z-x;
            dis2 = z-y;
        }
        if(dis1<dis2) return 1;
        else if(dis2<dis1) return 2;
        else return 0;
    }
};