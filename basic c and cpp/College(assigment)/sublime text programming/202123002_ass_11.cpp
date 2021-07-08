//assigment_11
//Name - Abhijit Gayen 
//Roll NO-202123002

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <list>
using namespace std;
#define total_list 100000
#define no_of_actors 15000
#define no_of_movies 15000
#define inf -2

struct node
{
    string data;
    struct node *link;
};
int movCount, actCount;
int no_of_line;
pair<string, string> pairOfMoviesActor[total_list]; //make a pair of movies and actor
string movies[no_of_movies], actors[no_of_actors];  // collect all actors and movies
// to cheack the existance of movie's name and cator's name
int isthere(int movieOrActor, string AM, int i)
{
    if (movieOrActor == 1)
    {
        while ((movies[i] != AM) && i > 0)
        {
            i--;
        }
        if (movies[i] == AM)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        while ((actors[i] != AM) && i > 0)
        {
            i--;
        }
        if ((actors[i] == AM))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
// cheack is there any relatiuon between two actor by edge 
int cheackRelation(string actor1, string actor2)
{
    string mov1[no_of_movies], mov2[no_of_movies];
    int i, j = 0, k = 0;
    for (i = 0; i < no_of_line; i++)
    {
        if (pairOfMoviesActor[i].first == actor1)
        {
            mov1[k] = pairOfMoviesActor[i].second;
            k++;
			}
        if (pairOfMoviesActor[i].first == actor2)
        {
            mov2[j] = pairOfMoviesActor[i].second;
            j++;
        }
    }
    int m, n, l = 0;
    for (m = 0; m < k; m++)
    {
        for (n = 0; n < j; n++)
        {
            if (mov1[n] == mov2[m])
            {
                l++;
                //cout<<actor1<<" and "<<actor2<< mov1[n]<<endl;
                break;
            }
        }
    }
    return l;
}
//creat graph form this data
void createGraph(struct node *adj_list[no_of_actors], int noActors)
{
    int i, j;
    struct node *p, *c;
    for (i = 0; i < noActors; i++)
    {
        for (j = 0; j < noActors; j++)
        {
            if (i == j)
                continue;
            if (cheackRelation(actors[i], actors[j]))
            {
                c = new struct node;
                c->data = actors[j];
                c->link = NULL;
                // cout<<"hello  "<<actors[i]<<" and "<<actors[j]<<endl;
                if (adj_list[i] == NULL)
                    adj_list[i] = c;
                else
                {
                    p = adj_list[i];
                    while (p->link != NULL)
                    {
                        p = p->link;
                    }
                    p->link = c;
                }
            }
        }
    }
}
// print the graph using adj_ list
void printgraph(struct node *adj_list[], int actCount)
{
    int i, j, k;
    struct node *p;
    for (i = 0; i < actCount; i++)
    {
        p = adj_list[i];
        cout << actors[i] << "is conncted with :" << endl;
        while (p != NULL)
        {
            cout << "\t" << p->data << endl;
            p = p->link;
        }
    }
}
int index(string nameActor, int noactors)
{
    int i;
    for (i = 0; i < noactors; i++)
    {
        if (actors[i] == nameActor)
        {
            return i;
            break;
        }
    }
    return -1;
}
void BFS(struct node *adj_list[], int n, int visited[], int dist[])
{
    string a = "Kevin Bacon (I)";
    int h, r;
    int k = index(a, n);
    list<string> Queue;
    visited[k] = 1;
    dist[k] = 0;
    Queue.push_back(a);
    while (!Queue.empty())
    {
        string currVer = Queue.front();
        cout << "\n visited " << currVer << " ";
        Queue.pop_front();
        struct node *p;
        r = index(currVer, n);
        p = adj_list[r];
        while (p != NULL)
        {
            h = index(p->data, n);
            if (!visited[h])
            {
                visited[h] = 1;
                dist[h] = 1 + dist[r];
                Queue.push_back(p->data);
            }
            p = p->link;
        }
    }
}
int main()
{
    char file[50];
    ifstream abhijit;
    cout<<"Enter the file name:";
    cin.getline(file, 50);
    abhijit.open(file);
    movCount = 0;
    no_of_line = 0;
    actCount = 0;
    if (!abhijit.is_open())
    {
        cout << "error to open this file -:" << file << endl;
        exit(EXIT_FAILURE);
    }
    string actor, movie;
    int i = 0;
    getline(abhijit, actor, '|');
    actors[actCount] = actor;
    actCount++;
    while (abhijit.good())
    {
        no_of_line++;
        getline(abhijit, movie, '\n');
        //cout<<actor<<"\t"<<movie<<"\n" ;
        pairOfMoviesActor[i].first = actor;
        pairOfMoviesActor[i].second = movie;
        i++;
        if (!isthere(0, actor, actCount))
        {
            actors[actCount] = actor;
            actCount++;
        }
        if (!isthere(1, movie, movCount))
        {
            movies[movCount] = movie;
            movCount++;
        }
        getline(abhijit, actor, '|');
    }
    abhijit.close();
    // list of all actors and movies
    /* int j;
        for(j=0;j<i;j++){
        	cout<<pairOfMoviesActor[j].first<<"\t"<<pairOfMoviesActor[j].second<<endl;
		}*/
    /*  for(i=0;i<movCount;i++){
        	cout<<movies[i]<<"\n";
		}
		for(i=0;i<actCount;i++){
			cout<<actors[i]<<"\n";
		}*/
    struct node *adj_list[actCount], *p;
    int visited[actCount], dist[actCount];
    for (i = 0; i < actCount; i++)
    {
        adj_list[i] = NULL;
        visited[i] = 0;
        dist[i] = inf;
    }
    createGraph(adj_list, actCount);
    //printgraph(adj_list, actCount);
    cout << "Total no of actor is " << actCount << endl;
    cout << "Total no of movies is " << movCount << endl;
    BFS(adj_list, actCount, visited, dist);
    cout << endl;
    for (i = 0; i < actCount; i++)
    {
        if (dist[i] == inf)
            cout << "bacon number of " << actors[i] << " is:\t"<< "infinite" << endl;

        else
            cout << "bacon number of " << actors[i] << " is: \t" << dist[i] << endl;
    }
    cout << endl;
    int k, j, l;
    for (i = 0; i < 10; i++)
    {
        k = 0;
        l = 0;
        for (j = 0; j < actCount; j++)
        {
            if (dist[j] == i)
            {
                k++;
            }
            if (dist[j] == inf)
                l++;
        }
        if (k != 0)
            cout << "no of actor with bacon number " << i << " is :\t" << k << endl;
    }
    cout << "no of actor with bacon number inf is :\t" << l << endl;
    cout << endl;
    return 0;
}
