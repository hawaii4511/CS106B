#include <iostream>
using namespace std;

string CensorString1(string text, string remove) {
    string result = "";
    for (int i=0; i < text.length(); i++) {
        bool found = false;
        for (int k = 0; k < remove.length(); k++){
            if (text[i] == remove[k]){
                found = true;
                break;
            }
        }
        if (!found) {
            result += text[i];
    }
    }
    return result;
}

string CensorString11(string text, string remove)
{
    int pos;
    string result = text;
    for (int i=0; i < remove.length(); i++)
    {
        while (true)
        {
            pos = result.find(remove[i]);
            if (pos == string::npos)
            {
                break;
            }
            else{
                result = result.substr(0,pos) + result.substr(pos+1);
            }
        }
    }
    return result;
}

void CensorString2 (string &text, string remove) {
    for (int i=0; i<remove.length(); i++) {
        int pos = 0;
        while ((pos=text.find(remove[i], pos)) != string::npos) {
            text.replace(pos, 1, "");
        }
    }
}

struct statsT {
    int low;
    int high;
    double average;
};

int main() {
    string x = CensorString1("Happy", "Houses are red and bluey");
    cout << "Problem 1: CensorString " << x;
    return 0;
}