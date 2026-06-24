/*Graph - data structure, example without STL*/
#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 
using namespace std;

class Graph {
private:
    int V;
    int E;
    vector<vector<int>> adjMatrix;
    vector<vector<int>> incMatrix;
public:
    Graph(int V, int E) : V(V), E(E),
        adjMatrix(V, vector<int>(V, 0)),
        incMatrix(V, vector<int>(E, 0)) {
    }
    void addEdge(int u, int v, int edgeIndex, int weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;

        incMatrix[u][edgeIndex] = 1;
        incMatrix[v][edgeIndex] = 1;
    }
    void printAdjMatrix(const string cities[]) {
        cout << "\n--- Matrytsya sumizhnosti (z vagamy) ---\n";
        cout << setw(10) << " ";
        for (int i = 0; i < V; ++i) {
            cout << setw(6) << cities[i].substr(0, 4);
        }
        cout << "\n";
        for (int i = 0; i < V; ++i) {
            cout << left << setw(10) << cities[i] << ":";
            for (int j = 0; j < V; ++j) {
                cout << right << setw(6) << adjMatrix[i][j];
            }
            cout << "\n";
        }
    }
    void printIncMatrix(const string cities[]) {
        cout << "\n--- Matrytsya intsydentnosti ---\n";
        cout << setw(10) << " ";
        for (int i = 0; i < E; ++i) {
            cout << setw(4) << "E" + to_string(i + 1); 
        }
        cout << "\n";
        for (int i = 0; i < V; ++i) {
            cout << left << setw(10) << cities[i] << ":";
            for (int j = 0; j < E; ++j) {
                cout << right << setw(4) << incMatrix[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
};
int main() {
    int V = 6;
    int E = 9;
    Graph g(V, E);
    string cities[6] = { "Uzgorod", "Mukacevo", "Hust", "Rahiv", "Beregove", "Tachiv" };

    g.addEdge(0, 1, 0, 38); // E1: Ужгород(0) - Мукачево(1)
    g.addEdge(0, 4, 1, 60); // E2: Ужгород(0) - Берегове(4)
    g.addEdge(1, 4, 2, 26); // E3: Мукачево(1) - Берегове(4)
    g.addEdge(1, 2, 3, 53); // E4: Мукачево(1) - Хуст(2)
    g.addEdge(4, 2, 4, 52); // E5: Берегове(4) - Хуст(2)
    g.addEdge(4, 5, 5, 75); // E6: Берегове(4) - Тячів(5)
    g.addEdge(2, 5, 6, 25); // E7: Хуст(2) - Тячів(5)
    g.addEdge(2, 3, 7, 70); // E8: Хуст(2) - Рахів(3)
    g.addEdge(5, 3, 8, 45); // E9: Тячів(5) - Рахів(3)

    g.printAdjMatrix(cities);
    g.printIncMatrix(cities);

    return 0;
}