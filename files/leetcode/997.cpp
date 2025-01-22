class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        class graphy{

            unordered_map<int, list<int>> mappy;

            public:
            
                void add_val(int node1, int node2){
                    mappy[node1].push_back(node2);
                }

                bool check_in(int node1, int node2){
                    for (auto i: mappy[node1]){
                        if (i == node2){
                            return true;
                        }
                    }
                    return false;
                }

                bool check_empy(int node1){
                    
                    if (mappy[node1].size() == 0){
                        return true;
                    }

                    return false;
                }

        };

        graphy g;

        bool fini = false;

        int number = n;

        number += 1;

        for (int i = 0; i < trust.size(); i++){
            g.add_val(trust[i][0], trust[i][1]);
        }

        for (int i = 1; i < number; i++){
            fini = false;
            if (g.check_empy(i)){
                for (int j = 1; j < number; j++){
                    if (j == i){
                        continue;
                    }
                    else if (g.check_in(j, i)){
                        continue;
                    }
                    else{
                        fini = true;
                        break;
                    }
                }
                if (fini == false){
                    return i;
                    break;
                }
            }
        }

        return -1;
    }
};