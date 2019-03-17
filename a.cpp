using namespace std;

void readData(char* filename, vector <char>& Data)
{
    ifstream fin;
    fin.open(filename);
    
    if (!fin.is_open())
    {
        cout << "Error opening file.";
    }
    else 
    {
        char ch;
        for (int m = 0; fin.get(ch); ++m)
			Data.push_back(ch);
    }
    fin.close();
}

int main()
{
    int A = 0, a = 0, O = 0, o = 0, U = 0, u = 0, E = 0, e = 0, I = 0, i = 0, Y = 0, y = 0;
    char filename[100];
    vector <char> Data;
    vector <int> numberVowels;
    
    cout << "enter the file name ";
	cin.getline(filename, 100);
	
	readData(filename, Data);
	// vector output
	for(int h = 0; h < Data.size(); ++h)
	{
       cout << Data[h];
	}
    cout << endl;
	
    for(int p = 0; p < Data.size(); ++p)
        switch (Data[p])
        {
            case 'A':
                A++;
                continue;
            case 'a':
                a++;
                continue;
            case 'O':
                O++;
                continue;
            case 'o':
                o++;
                continue;
            case 'U':
                U++;
                continue;
            case 'u':
                u++;
                continue;
            default:
                continue;
            case 'E':
                E++;
                continue;
            case 'e':
                e++;
                continue;
            case 'I':
                I++;
                continue;
            case 'i':
                i++;
                continue;
            case 'Y':
                Y++;
                continue;
            case 'y':
                y++;
                continue;
        }

    numberVowels = {A, a, O, o, U, u, E, e, I, i, Y, y};
    // sort vector descending
    sort(numberVowels.rbegin(), numberVowels.rend());
	
    Data.clear();

    for(int t = 0; t < numberVowels.size(); ++t)
    {
        if (numberVowels[t] == A & A > 0 & find(Data.begin(), Data.end(), 'A') == Data.end())
            Data.push_back('A');
        else if(numberVowels[t] == a & a > 0 & find(Data.begin(), Data.end(), 'a') == Data.end())
            Data.push_back('a');
        else if(numberVowels[t] == O & O > 0 & find(Data.begin(), Data.end(), 'O') == Data.end())
            Data.push_back('O');
        else if(numberVowels[t] == o & o > 0 & find(Data.begin(), Data.end(), 'o') == Data.end())
            Data.push_back('o');
        else if(numberVowels[t] == U & U > 0 & find(Data.begin(), Data.end(), 'U') == Data.end())
            Data.push_back('U');
        else if(numberVowels[t] == u & u > 0 & find(Data.begin(), Data.end(), 'u') == Data.end())
            Data.push_back('u');
        else if(numberVowels[t] == E & E > 0 & find(Data.begin(), Data.end(), 'E') == Data.end())
            Data.push_back('E');
        else if(numberVowels[t] == e & e > 0 & find(Data.begin(), Data.end(), 'e') == Data.end())
            Data.push_back('e');
        else if(numberVowels[t] == I & I > 0 & find(Data.begin(), Data.end(), 'I') == Data.end())
            Data.push_back('I');
        else if(numberVowels[t] == i & i > 0 & find(Data.begin(), Data.end(), 'i') == Data.end())
            Data.push_back('i');
        else if(numberVowels[t] == Y & Y > 0 & find(Data.begin(), Data.end(), 'Y') == Data.end())
            Data.push_back('Y');
        else if(numberVowels[t] == y & y > 0 & find(Data.begin(), Data.end(), 'y') == Data.end())
            Data.push_back('y');
    }
    // output
    for(int k = 0; k < Data.size(); ++k)
        cout << Data[k] << " ";
}