#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int a[100][100];
void read()
{
    ifstream in("test.txt");
    if(! in.is_open())
        {
            cout << "Error opening file";
            exit (1);
        }
    for(int i = 1; i <= 14; i++)
        {
            string temp;
            in>>temp;
            if(temp == "Sunny")
                a[i][1] = 0;
            else if(temp == "Overcast")
                a[i][1] = 1;
            else
                a[i][1] = 2;
            in>>temp;
            if(temp == "Hot")
                a[i][2] = 0;
            else if(temp == "Mild")
                a[i][2] = 1;
            else
                a[i][2] = 2;
            in>>temp;
            if(temp == "High")
                a[i][3] = 0;
            else
                a[i][3] = 1;
            in>>temp;
            if(temp == "True")
                a[i][4] = 0;
            else
                a[i][4] = 1;
            in>>temp;
            if(temp == "Yes")
                a[i][0] = 1;
            else
                a[i][0] = 0;
        }
}
int main()
{
    read();
    for(int i = 1; i <= 14; i++)
    {
        for(int j = 0; j <= 4; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
