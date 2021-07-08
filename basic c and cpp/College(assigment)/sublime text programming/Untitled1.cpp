#include <iostream>
#include <climits>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
//Prims is applied to find MST to a graph with property of graph as follows:-
//1) Undirected
//2) Connected
//3) Weighted 

void printMatrix(vector<vector<int> > adjMatrix)
{
    int n = adjMatrix.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int findMinVertex(bool *visited, int *weight, int nodes)
{
    int minVertex = -1;
    for(int i=0; i<nodes; i++)
    {
        if(!visited[i] && (minVertex==-1 || weight[i] < weight[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}


void primsAlgo(vector<vector<int> > adjMatrix, int nodes)
{
    int *parent = new int[nodes];
    bool *visited = new bool[nodes];
    int *weight = new int[nodes];
    for(int i=0; i<nodes; i++)
    {
        visited[i] = false;
        weight[i] = INT_MAX;
    }
    parent[0] = -1;
    weight[0] = 0;
    for(int i=0;i<nodes;i++)
    {
        //find min vertex
        int minVertex = findMinVertex(visited,weight,nodes);
        visited[minVertex] = true;
        //explore the unvisited neighbours of min vertex
        for(int j=0; j<nodes; j++)
        {
            if(adjMatrix[minVertex][j]!=0 && !visited[j])
            {
                if(adjMatrix[minVertex][j] < weight[j])
                {
                    weight[j] = adjMatrix[minVertex][j];
                    parent[j] = minVertex;
                }
            }
        }
    }
    int total_min_distance = 0;
    for(int i=1; i<nodes; i++)
    {
        if(parent[i] < i)
        {
            total_min_distance += weight[i];
            cout << ++parent[i] << " " << ++i << " " << weight[i] << endl;
        }
        else
        {
            total_min_distance += weight[i];
            cout << ++i << " " << ++parent[i] << " " << weight[i] << endl;
        }
    }
    cout << "Total Minimum Distance taken is " << total_min_distance << endl;
}



int main() {
	char file[50];
	int u, v, w;
    ifstream abhijit;
    cout<<"Enter the file name:";
    cin.getline(file, 50);
    abhijit.open(file);
	int nodes, edges;
    abhijit >> nodes >> edges;
    vector<vector<int> > adjMatrix(nodes, vector<int>(nodes, 0));
    while(abhijit >> u >> v >> w)
    {
        
        adjMatrix[u-1][v-1] = w;
        adjMatrix[v-1][u-1] = w;
    }
    abhijit.close();
    //printMatrix(adjMatrix);
    primsAlgo(adjMatrix,nodes);

    return 0;
}
