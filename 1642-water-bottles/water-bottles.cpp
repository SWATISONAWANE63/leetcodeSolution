class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=0;
        while(numBottles>=numExchange){
          total+=numExchange;
           numBottles-=numExchange;
           numBottles+=1;
        }
        return total+numBottles;
    }
};