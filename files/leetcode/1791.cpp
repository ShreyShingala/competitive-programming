class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
            class Graphy{

            unordered_map<int, vector<int>> mappy;
            vector<int> visited;
        
            int largest;

            public:
            int starval = 0;
            vector<int> stacky;

            void create_visits(int number){
                visited = vector<int>(number+1, 0);
                largest = number;
                stacky.push_back(number);
            }

            void create_node(int node1, int node2){
                mappy[node1].push_back(node2);
                mappy[node2].push_back(node1);
            }

            int find_size(int node1){
                return mappy[node1].size();
            }

            void find_star(){
                while (starval == 0 && stacky.size() != 0){
                    int node1 = stacky[0];
                    //cout << "Currently looking at" << node1 << endl;

                    stacky.erase(stacky.begin());
                    visited[node1] = 1;
                    int numbery = find_size(node1);

                    //cout << "Number of connections" << numbery << endl;

                    if (numbery == largest-1){
                        //cout << "FOUND IT" << node1 << endl;
                        starval = node1;
                    }
                    else{
                        for (int i = 0; i < numbery; i++){
                            int val = mappy[node1][i];

                            if (visited[val] != 1){
                                stacky.push_back(val);
                                //cout << "Will Visit" << val << endl;
                            }
                        }
                    }
                }
            }
        };
 
        Graphy g;
        int currmax = 0;

        for (int i = 0; i < edges.size(); i++){
            int firstval = edges[i][0];
            int secondval = edges[i][1];

            if (currmax < firstval){
                currmax = firstval;
            }
            if (currmax < secondval){
                currmax = secondval;
            }

            g.create_node(firstval, secondval);
        }

        //cout << "Current Largest" << currmax << endl;

        g.create_visits(currmax);

        g.find_star();

        return g.starval;
    }
};