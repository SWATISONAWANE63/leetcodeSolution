class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int i: nums){
            count[i]++;
        }
        int maxFre=0;
       for (auto &p : count) {
    maxFre = max(maxFre, p.second);
}
      
        int total = 0;
        for(auto &p : count){
            if(p.second == maxFre){
                total += p.second;
            }
        }

        return total;
    }
};