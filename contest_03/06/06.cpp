#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> balances;
    
    for (int i = 0; i < n; i++) {
        string login;
        int balance;
        cin.ignore(); 
        getline(cin, login, ';');
        cin >> balance;
        balances[login] = balance;
    }
    
    int m;
    cin >> m;
    cin.ignore(); 
    string logins;
    getline(cin, logins);
    
    istringstream iss(logins);
    string login;
    
    while (iss >> login) {
        cout << balances[login] << " ";
    }
    
    cout << endl;
    
    return 0;
}