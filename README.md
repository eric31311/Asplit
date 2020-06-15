# Asplit
split in c++ like python
it will clear your input vector first, and split the string to vector.

example:
```
int main(){
    string a;
    a = "It's the best day ever!";
    char *ca = &a[0];
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
```

Output should be:  
It's  
the  
best  
day  
ever!  
  
It's  
the  
best day ever!  
  
It's  
the  
best  
day  
ever!
