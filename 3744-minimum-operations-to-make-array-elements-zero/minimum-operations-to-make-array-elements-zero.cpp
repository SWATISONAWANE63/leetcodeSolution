class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long ans=0;
        for(auto &x:queries){
            long long sum=0;
            int st=x[0];
            int end=x[1];

            int base=0;
            if (st > 1) 
            base = log2(st - 1) / 2;
            // cout<<base<<endl;
            long long mul=base+1;

            long long beg=pow(4,base+1);
            if(beg>end){
                ans+=(ceil(((end-st+1)*mul)/2.0));
                continue;
            }
            sum+=((beg-st)*mul);
            // cout<<sum<<endl;
            while(true){
                long long next=beg*4;
                mul++;
                if(next-1>=end){
                    sum+=((end-beg+1)*mul);
                    // cout<<"here "<<sum<<endl;
                    break;
                }
                else{
                    sum+=((next-beg)*mul);
                }
                beg*=4;
                // cout<<"current loop sum "<<sum<<endl;
            }
            // cout<<sum<<"final";
            ans+=(ceil(sum/2.0));
        }
        return ans;
    }
};