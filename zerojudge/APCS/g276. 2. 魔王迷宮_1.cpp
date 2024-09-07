#include <bits/stdc++.h>
using namespace std;

struct TheBoss {
    int r, c, s, t;
    int now_x, now_y;
    int is_exist = 1; // 1表示存在, 0表示消失
};

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> bomb(n, vector<int>(m, 0));
    vector<TheBoss> boss(k);
    for (int i = 0; i < k; i++) {
        cin >> boss[i].r >> boss[i].c >> boss[i].s >> boss[i].t;
        boss[i].now_x = boss[i].r;
        boss[i].now_y = boss[i].c;
    }

    while (true) {
        bool has_boss = false;
        for (int i = 0; i < k; i++) {
            if (boss[i].is_exist == 1) {
                has_boss = true;
                // 在當前位置放炸彈
                bomb[boss[i].now_x][boss[i].now_y]++;
            }
        }

        if (!has_boss) break;

        for (int i = 0; i < k; i++) {
            if (boss[i].is_exist == 1) {
                // 移動魔王
                boss[i].now_x += boss[i].s;
                boss[i].now_y += boss[i].t;

                // 檢查是否超出邊界
                if (boss[i].now_x < 0 || boss[i].now_x >= n || boss[i].now_y < 0 || boss[i].now_y >= m) {
                    boss[i].is_exist = 0;
                }
            }
        }

        for (int i = 0; i < k; i++) {
            if (boss[i].is_exist == 1) {
                // 檢查是否踩到炸彈
                if (bomb[boss[i].now_x][boss[i].now_y] > 0) {
                    // 引爆炸彈，移除炸彈
                    bomb[boss[i].now_x][boss[i].now_y] = 0;
                    boss[i].is_exist = 0;

                    // 檢查是否有其他魔王在同一位置
                    for (int j = 0; j < k; j++) {
                        if (i != j && boss[j].now_x == boss[i].now_x && boss[j].now_y == boss[i].now_y && boss[j].is_exist == 1) {
                            boss[j].is_exist = 0;
                        }
                    }
                }
            }
        }
    }

    int remaining_bombs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (bomb[i][j] > 0) remaining_bombs++;
        }
    }

    cout << remaining_bombs << endl;
    return 0;
}
