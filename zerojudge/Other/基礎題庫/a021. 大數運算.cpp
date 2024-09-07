#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#define vint vector<int>
using namespace std;
const int mod = 1000000000;
bool bigger (vint v1, vint v2) {
    if (v1.size() > v2.size() || v1 == v2)
        return 1;
    if (v1.size() < v2.size())
        return 0;
    for (int i = v1.size() - 1; i >= 0; i--) {
        if (v1[i] > v2[i])
            return 1;
        if (v1[i] < v2[i])
            return 0;
    }
}
vint ItoV (int n) {
    vint re;
    re.push_back (n);
    return re;
}
vint StoV (string str) {
    vint re;
    int num = 0, now = 0, ten = 1;
    for (int i = str.length() - 1; i >= 0; i--) {
        num += (str[i] - '0') * ten;
        now++;
        if (now == 9)
            now = 0, ten = 1, re.push_back (num), num = 0;
        else
            ten *= 10;
    }
    if (num)
        re.push_back (num);
    return re;
}
void out (vint vec) {
    cout << vec[vec.size() - 1];
    for (int i = vec.size() - 2; i >= 0; i--) {
        int len = 0, num = vec[i];
        do {
            len++;
            num /= 10;
        } while (num);
        len = 9 - len;
        while (len--)
            cout << '0';
        cout << vec[i];
    }
    cout << '\n';
}
vint add (vint v1, vint v2, bool is) {
    vint re;
    long long num = 0;
    for (int i = 0;; i++) {
        if (i >= v1.size() && i >= v2.size() && num == 0)
            break;
        if (i < v1.size())
            num += v1[i];
        if (i < v2.size())
            num += v2[i];
        re.push_back (num % mod);
        num /= mod;
    }
    if (is == 1)
        out (re);
    else
        return re;
}
vint sub (vint v1, vint v2, bool is) {
    if (is == 1 && bigger (v1, v2) == 0) {
        cout << '-';
        vint temp = v2;
        v2 = v1, v1 = temp;
    }
    vint re;
    long long num = 0;
    for (int i = 0; i < v1.size(); i++) {
        num = v1[i] - num;
        if (i < v2.size())
            num -= v2[i];
        if (num >= 0)
            re.push_back (num), num = 0;
        else
            re.push_back (mod + num), num = 1;
    }
    int sum = 0;
    for (int i = re.size() - 1; i >= 0; i--) {
        if (re[i] == 0)
            sum++;
        else
            break;
    }
    re.resize (re.size() - sum);
    if (re.size() == 0)
        re.push_back (0);
    if (is == 1)
        out (re);
    else
        return re;
}
vint mult (vint v1, vint v2, bool is) {
    if ( ( (v1.size() == 1 && v1[0] == 0) || (v2.size() == 1 && v2[0] == 0))) {
        if (is == 1) {
            cout << "0\n";
            return ItoV (0);
        } else
            return ItoV (0);
    }
    long long num = 0;
    vint re;
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++) {
            num += (long long) v1[i] * v2[j];
            if (i + j >= re.size())
                re.push_back (0);
            num += re[i + j];
            re[i + j] = num % mod;
            num /= mod;
        }
        int now = i + v2.size();
        while (num) {
            if (now >= re.size())
                re.push_back (0);
            num += re[now];
            re[now] = num % mod;
            num /= mod;
            now++;
        }
    }
    int now = v1.size() + v2.size() - 1;
    while (num) {
        if (now >= re.size())
            re.push_back (0);
        num += re[now];
        re[now] = num % mod;
        num /= mod;
        now++;
    }
    if (is == 1)
        out (re);
    else
        return re;
}
void divi (string str, vint v) {
    if (bigger (StoV (str), v) == 0) {
        cout << "0\n";
        return;
    }
    vint vec = ItoV (0);
    vint vv[10];
    for (int i = 0; i < 10; i++)
        vv[i] = mult (v, ItoV (i), 0);
    bool is = 0;
    for (int k = 0; k < str.length(); k++) {
        vec = add (mult (vec, ItoV (10), 0), ItoV (str[k] - '0'), 0);
        if (is == 0) {
            if (bigger (vec, v) == 1) {
                for (int i = 9; i >= 0; i--)
                    if (bigger (vec, vv[i]) == 1) {
                        cout << i;
                        vec = sub (vec, vv[i], 0);
                        break;
                    }
                is = 1;
            }
        } else {
            for (int i = 9; i >= 0; i--)
                if (bigger (vec, vv[i]) == 1) {
                    cout << i;
                    vec = sub (vec, vv[i], 0);
                    break;
                }
        }
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio (false), cin.tie (0);
    string str1, str2, c;
    cin >> str1 >> c >> str2;
    if (c == "+")
        add (StoV (str1), StoV (str2), 1);
    if (c == "-")
        sub (StoV (str1), StoV (str2), 1);
    if (c == "*")
        mult (StoV (str1), StoV (str2), 1);
    if (c == "/")
        divi (str1, StoV (str2));
}
