class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
       unordered_set<string> st(begin(folder),end(folder));
       vector<string>re;
       for(string& currfolder: folder){
        bool isSubfolder=false;
        string tempfolder=currfolder;
        while(!currfolder.empty()){
         size_t  position=currfolder.find_last_of('/');
         currfolder=currfolder.substr(0,position);
         if(st.find(currfolder)!=st.end()){
            isSubfolder=true;
            break;
         }
        }
        if(!isSubfolder){
            re.push_back(tempfolder);
        }
       }
       return re;
        
    }
};