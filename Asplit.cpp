#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;



void Asplit(char *str, const char *token, vector <string> &sv, int count = 0){
    sv.clear();
    char *copystr = new char[strlen(str)+1];
    strcpy(copystr, str);
    char *p = strtok(copystr, token);
    string tmp;
    if (p == NULL)
        return;
    if (count == 0){
        while (p){
            tmp = p;
            sv.push_back(tmp);
            p = strtok(NULL, token);
        }
    }else{
        int clear = 0;
        count--;
        tmp = p;
        sv.push_back(tmp);
        for(int j = 0; j < count; ++j){
            p = strtok(NULL, token);
            if(p == NULL){
                clear = 1;
                break;
            }
            tmp = p;
            sv.push_back(tmp);   
        }
        if(clear == 0){
            p = strtok(NULL, "");
            tmp = p;
            sv.push_back(tmp);
        }
    }
    return;
}

int main(){
    string a;
    a = "It's the best day ever!";
    char *ca = &a[0];
    // char *p = strtok(msg, ",");
    // cout << p << "\n";
    vector <string> sv;
    Asplit(ca, "s", sv);
    for(int i = 0; i < sv.size(); i++)
    {
        cout << sv[i] << "\n";
    }
    cout << "\n";
    Asplit(ca, " ", sv, 2);
    for(int i = 0; i < sv.size(); i++)
    {
        cout << sv[i] << "\n";
    }
    cout << "\n";
    Asplit(ca, " ", sv, 6);
    for(int i = 0; i < sv.size(); i++)
    {
        cout << sv[i] << "\n";
    }
}
