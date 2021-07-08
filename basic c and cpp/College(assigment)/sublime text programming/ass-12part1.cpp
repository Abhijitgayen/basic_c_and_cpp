//Assigment-12 (DSA)
//by Abhijit Gayen
//Roll No - 202123002

#include <iostream>
#include <climits>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
//Prims is applied to find MST to a graph with property of graph as follows:-
//1) Undirected
//2) Connected
//3) weighted 

int find_min_ver(bool *visiEde, int *weigEde, int nod)
{
    int minVer = -1;
    for(int i=0; i<nod; i++)
    {
        if(!visiEde[i] && (minVer==-1 || weigEde[i] < weigEde[minVer]))
        {
            minVer = i;
        }
    }
    return minVer;
}


void prim_s_algori(vector<vector<int> > adj_mar, int nod)
{
    int *parent = new int[nod];
    bool *visiEde = new bool[nod];
    int *weigEde = new int[nod];
    for(int i=0; i<nod; i++)
    {
        visiEde[i] = false;
        weigEde[i] = INT_MAX;
    }
    parent[0] = -1;
    weigEde[0] = 0;
    for(int i=0;i<nod;i++)
    {
        //find min vertex
        int minVer = find_min_ver(visiEde,weigEde,nod);
        visiEde[minVer] = true;
        //explore the unvisiEde neighbours of min vertex
        for(int j=0; j<nod; j++)
        {
            if(adj_mar[minVer][j]!=0 && !visiEde[j])
            {
                if(adj_mar[minVer][j] < weigEde[j])
                {
                    weigEde[j] = adj_mar[minVer][j];
                    parent[j] = minVer;
                }
            }
        }
    }
    int minDis = 0;
    for(int k=1; k<nod; k++)//here we ignor the weighted value of vertix zreo(sorce vertex)
    {
        if(parent[k] < k)
        {
            minDis += weigEde[k];
            cout <<"\t("<<parent[k]+1 << " , " << k+1 <<")"<< "  --->  " << weigEde[k] << endl;
        }
        else
        {
            minDis += weigEde[k];
            cout <<"\t("<< k+1 << " , " << parent[k]+1 << ")"<<"  --->  " << weigEde[k] << endl;
        }
    }
    cout<<endl;
    cout << "Total Minimum Distance for this weighted conected undirected graph is : " << minDis << endl<<endl;
}
int main() {
	char file[50];
	int u, v, w;
    ifstream abhijit;
    cout<<"\nEnter the file name:";
    cin.getline(file, 50);
    abhijit.open(file);
	int nod, edg;
    abhijit >> nod >> edg;
    vector<vector<int> > adj_mar(nod, vector<int>(nod, 0));
    while(abhijit >> u >> v >> w)
    {
      //every vertex is v is shifted to v-1;   
        adj_mar[u-1][v-1] = w;
        adj_mar[v-1][u-1] = w;
    }
    abhijit.close();
    prim_s_algori(adj_mar,nod);

    return 0;
}
