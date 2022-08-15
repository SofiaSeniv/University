// Subsuquence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*int dmax = 0; //the max length
    int imax = -1;

    int d = 0;

    if (arr[0] == 1) //Why we calculate this separately 
    {
        d++;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr [i] == 1)
        {
            d++;
        }

        else
        {
            if (arr[i - 1] == 1)
            {
                if (d > dmax)
                {
                    dmax = d;
                    imax = i - d;
                }
            }

            d = 0;
        }
    }



    if (d > dmax) //why we also use this separately
    {
        dmax = d;
        imax = n - d;
    }*/

    int dmax = 0;
    int imax = -1;

    int db = 0;
    int dm = 0;
    int k = 0;


    for (int i = 1; i < n; i++)
    {
        if (arr[i] > 0)
        {
            db++;
        }

        else
        {
            if (arr[i - 1] > 0)
            {
                k = i - 1;
                dm++;
            }
            else
            {
                dm++;
            }
        }



        if (db > dmax)
        {
            dmax = db;
        }
        else
        {
            dmax = dm;
        }

        dm = 0; 
        db = 0;









    }
























    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;



}

