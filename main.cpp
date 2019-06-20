//
//  main.cpp
//  xianjia
//
//  Created by s20181105305 on 2019/6/20.
//  Copyright © 2019 s20181105305. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,b;
    ifstream shuru("/Users/s20181105305/Desktop/shuru.txt");
    ofstream shuchu("/Users/s20181105305/Desktop/shuchu.txt ");
    if (shuru. is_open())
    {
        cout<<"ok"<<endl;
        shuru>>a>>b;
        cout<<a<<"   "<<b<<endl;
        shuru.close();
    }
    if(shuchu.is_open())
    {
        shuchu<<"c="<<a+b<<endl;
        cout<<"c="<<a+b<<endl;
        shuchu.close();
    }
    return 0;
}
