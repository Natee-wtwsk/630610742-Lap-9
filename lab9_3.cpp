#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int i = 0;
    string textline;
    double Mean = 0;
    double Standard_deviation = 0;
    ifstream source;
    source.open("score.txt");

    while (getline(source,textline))
    {
        Standard_deviation += pow(atof(textline.c_str()),2);
        Mean += atof(textline.c_str());
        cin.ignore();
        i++;
    }

    Mean = Mean/i;
    Standard_deviation = pow((Standard_deviation/i)-pow(Mean,2),0.5);

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = "<< Mean << endl;
    cout << "Standard deviation = " << Standard_deviation;

    return 0;
}
