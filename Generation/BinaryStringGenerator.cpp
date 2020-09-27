    // Using vector
    vector<int> s(MAX);
    int n;
    cin >> n;
    int counter;
    do {
        for(int i=0;i<n;i++) cout << s[i];
        cout << endl;
        counter = n-1;
        while(counter>=0 && (s[counter]==1)) counter--;
        if(counter>-1) {
            s[counter] = 1;
            fill(s.begin()+(counter+1),s.end(),0);
        }
    }while(counter!=-1);
    // Using array
    int s[MAX];
    memset(s,0, sizeof(s));
    int n;
    cin >> n;
    int counter;
    do {
        for(int i=0;i<n;i++) cout << s[i];
        cout << endl;
        counter=n-1;
        while(counter>=0 && s[counter] == 1) counter--;
        if(counter>-1) {
            s[counter] = 1;
            memset(s+counter+1,0,sizeof(s));
        }
    }while(counter!=-1);
