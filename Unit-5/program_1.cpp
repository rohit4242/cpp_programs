
#include <iostream>
#include <fstream>
using namespace std;
  
// Driver Code
int main()
{
    // Creation of ofstream class object
    ofstream fout;
 
    string line;
 
    fout.open("sample.txt");
 
    while (fout) {
 
        getline(cin, line);
        if (line == "-1")
            break;
 
        fout << line << endl;
    }
 
    fout.close();
    
    cout<<"File created successfully"<<endl;

    ifstream fin;
 
    fin.open("sample.txt");
 
    while (fin) {
         getline(fin, line);
 
        cout << line << endl;
    }
 
    fin.close();
 
    return 0;
}