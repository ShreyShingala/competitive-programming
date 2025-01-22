class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            class Graphy{

            unordered_map<int, vector<int>> mappy;
            vector<int> visits;

            public:
            bool donezo = false;

            void make_vector(int number){
                visits = vector<int> (number, 0);
            }

            void add_node(int node1, int node2){
                mappy[node1].push_back(node2);
                mappy[node2].push_back(node1);
            }

            void find_from(int node1, int node2){

                if (node1 == node2){
                    donezo = true;
                }
                visits[node1] = 1;

                //cout << "Looking for " << node1 << " going to " << node2 << endl;

                if (donezo == false){
                    for (int i: mappy[node1]){
                        if (i == node2){
                            donezo = true;
                            break;
                        }
                        else{
                            if (donezo == false && visits[i] != 1){find_from(i, node2);}
                        }
                    }
                }
            }


        };
       
        Graphy g;

        g.make_vector(n);

        for (int i = 0; i < edges.size(); i++){
            g.add_node(edges[i][0], edges[i][1]);
        }

        g.find_from(source, destination);

        if (g.donezo == false){
            return false;
        }
        else{
            return true;
        }

        return false;
    }
};