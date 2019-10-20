#include <bits/stdc++.h>
using namespace std;

void BFS(int& shortestPath, vector < vector < char > >& grid,
vector < vector < bool > >& used, queue < pair < int, pair < int, int > > >& q) {
if (q.empty())
return;
pair < int, pair < int, int > > v = q.front();
q.pop();
int X = v.second.first;
int Y = v.second.second;
int dis = v.first;
if (X - 1 >= 0) {
if (!used[X - 1][Y]) {
if (grid[X - 1][Y] == 'E') {
shortestPath = dis + 1;
return;
}
if (grid[X - 1][Y] == 'O') {
used[X - 1][Y] = 1;
q.push({dis + 1, {X - 1, Y}});
}
}
}
if (X + 1 < grid.size()) {
if (!used[X + 1][Y]) {
if (grid[X + 1][Y] == 'E') {
shortestPath = dis + 1;
return;
}
if (grid[X + 1][Y] == 'O') {
used[X + 1][Y] = 1;
q.push({dis + 1, {X + 1, Y}});
}
}
}
if (Y - 1 >= 0) {
if (!used[X][Y - 1]) {
if (grid[X][Y - 1] == 'E') {
shortestPath = dis + 1;
return;
}
if (grid[X][Y - 1] == 'O') {
used[X][Y - 1] = 1;
q.push({dis + 1, {X, Y - 1}});
}
}
}
if (Y + 1 < grid[0].size()) {
if (!used[X][Y + 1]) {
if (grid[X][Y + 1] == 'E') {
shortestPath = dis + 1;
return;
}
if (grid[X][Y + 1] == 'O') {
used[X][Y + 1] = 1;
q.push({dis + 1, {X, Y + 1}});
}
}
}
BFS(shortestPath, grid, used, q);
}

int MazeSolver(vector < vector < char > > grid) {
int startX = 0;
int startY = 0;
for (int i = 0; i < grid.size(); i++) {
for (int j = 0; j < grid[i].size(); j++) {
if (grid[i][j] == 'S') {
startX = i;
startY = j;
}
}
}
vector < vector < bool > > used(grid.size());
for (int i = 0; i < used.size(); i++) {
used[i].resize(grid[i].size());
for (int j = 0; j < used[i].size(); j++) {
used[i][j] = 0;
}
}
int shortestPath = -1;
queue < pair < int, pair < int, int > > > q;
q.push({0, {startX, startY}});
used[startX][startY] = 1;
BFS(shortestPath, grid, used, q);
return shortestPath;
}

int main() {

freopen("input.txt", "r", stdin);

int n, m;
cin >> n >> m;
vector < vector < char > > grid(n);
for (int i = 0; i < n; i++) {
grid[i].resize(m);
for (int j = 0; j < m; j++) {
cin >> grid[i][j];
}
}

cout << MazeSolver(grid);

return 0;
}
