// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <array>
#include <stack>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Point{
public:
    int X;
    int Y;
    Point* Parent;
    bool Type; //0 for block,1for go
    int G;
    int H;
    int F;
    Point(int _X,int _Y,bool _Type):X(_X),Y(_Y),Parent(NULL),Type(_Type),
                            G(0),H(0),F(0){}
    void getF(){ F=G+H;}
    void show(){cout<<"(x,y) : "<<X<<" "<<Y<<"--------"<<G<<" "<<H<<endl<<F<<endl;}
};

inline int findH(int nowX,int nowY,int endX,int endY){return abs(nowX-endX)+abs(nowY-endY);}


vector<Point*> Open;
vector<Point*> Close;

int main()
{
    vector<vector<char>> tab{
        {'S','X',' ',' ',' ',' ',' ',' '},
        {' ','X','X',' ',' ',' ',' ',' '},
        {' ',' ','X',' ','X','X','X',' '},
        {' ',' ','X',' ',' ',' ','X',' '},
        {' ',' ','X',' ','X',' ','X',' '},
        {' ','X','X','X','E',' ','X',' '},
        {' ',' ',' ',' ','X','X','X',' '},
        {' ',' ','X',' ',' ',' ',' ',' '}
    };
    vector<vector<Point*>> map;
    for(int i=0;i<tab.size();i++)
    {
        vector<Point*> temp;
        for(int j=0;j<tab[0].size();j++)
        {
            Point* p=new Point(j,i,tab[i][j]=='X'?false:true);
            temp.push_back(p);
        }
        map.push_back(temp);
    }
    
    int startX=0;
    int startY = 0;
    
    int endX=0;
    int endY=0;
    
    for(int i=0;i<tab.size();i++)
    {
        for(int j=0;j<tab[0].size();j++)
        {
            if(tab[i][j]=='S'){startX=j;startY=i;}
            else if(tab[i][j]=='E'){endX=j;endY=i;}
        }
    }

    Close.push_back(map[startY][startX]);
    map[startY][startX]->Parent=NULL;
    
    int nowX=startX;
    int nowY=startY;
    
    Point* end=NULL;
    int g=0;
    while(1)
    //for(int i=0;i<3;i++)
    {
        g++;
        if(nowX>0&&map[nowY][nowX-1]->Type&&find(Close.begin(),Close.end(),map[nowY][nowX-1])==Close.end())
        {
            if(find(Open.begin(),Open.end(),map[nowY][nowX-1])==Open.end())
            {   Open.push_back(map[nowY][nowX-1]);
                map[nowY][nowX-1]->G=g;
                map[nowY][nowX-1]->H=findH(nowX-1, nowY, endX, endY);
                map[nowY][nowX-1]->getF();map[nowY][nowX-1]->Parent=map[nowY][nowX];
            }else{
                int tempG=g;
                int tempH=findH(nowX-1, nowY, endX, endY);
                int tempF=tempG+tempH;
                if(map[nowY][nowX-1]->F>tempF){
                    map[nowY][nowX-1]->G=tempG;
                    map[nowY][nowX-1]->H=tempH;
                    map[nowY][nowX-1]->F=tempF;
                    map[nowY][nowX-1]->Parent=map[nowY][nowX];
                }
            }
        }
        if(nowX<map[0].size()-1&&map[nowY][nowX+1]->Type&&find(Close.begin(),Close.end(),map[nowY][nowX+1])==Close.end())
        {
            if(find(Open.begin(),Open.end(),map[nowY][nowX+1])==Open.end())
            {   Open.push_back(map[nowY][nowX+1]);
                map[nowY][nowX+1]->G=g;
                map[nowY][nowX+1]->H=findH(nowX+1, nowY, endX, endY);
                map[nowY][nowX+1]->getF();map[nowY][nowX+1]->Parent=map[nowY][nowX];
            }else{
                int tempG=g;
                int tempH=findH(nowX+1, nowY, endX, endY);
                int tempF=tempG+tempH;
                if(map[nowY][nowX+1]->F>tempF){
                    map[nowY][nowX+1]->G=tempG;
                    map[nowY][nowX+1]->H=tempH;
                    map[nowY][nowX+1]->F=tempF;
                    map[nowY][nowX+1]->Parent=map[nowY][nowX];
                }
            }
        }
        if(nowY>0&&map[nowY-1][nowX]->Type&&find(Close.begin(),Close.end(),map[nowY-1][nowX])==Close.end())
        {
            if(find(Open.begin(),Open.end(),map[nowY-1][nowX])==Open.end())
            {   Open.push_back(map[nowY-1][nowX]);
                map[nowY-1][nowX]->G=g;
                map[nowY-1][nowX]->H=findH(nowX, nowY-1, endX, endY);
                map[nowY-1][nowX]->getF();map[nowY-1][nowX]->Parent=map[nowY][nowX];
            }else{
                int tempG=g;
                int tempH=findH(nowX, nowY-1, endX, endY);
                int tempF=tempG+tempH;
                if(map[nowY-1][nowX]->F>tempF){
                    map[nowY-1][nowX]->G=tempG;
                    map[nowY-1][nowX]->H=tempH;
                    map[nowY-1][nowX]->F=tempF;
                    map[nowY-1][nowX]->Parent=map[nowY][nowX];
                }
            }
        }
        if(nowY<map.size()-1&&map[nowY+1][nowX]->Type&&find(Close.begin(),Close.end(),map[nowY+1][nowX])==Close.end())
        {
            if(find(Open.begin(),Open.end(),map[nowY+1][nowX])==Open.end())
            {   Open.push_back(map[nowY+1][nowX]);
                map[nowY+1][nowX]->G=g;
                map[nowY+1][nowX]->H=findH(nowX, nowY+1, endX, endY);
                map[nowY+1][nowX]->getF();map[nowY+1][nowX]->Parent=map[nowY][nowX];
            }else{
                int tempG=g;
                int tempH=findH(nowX, nowY+1, endX, endY);
                int tempF=tempG+tempH;
                if(map[nowY+1][nowX]->F>tempF){
                    map[nowY+1][nowX]->G=tempG;
                    map[nowY+1][nowX]->H=tempH;
                    map[nowY+1][nowX]->F=tempF;
                    map[nowY+1][nowX]->Parent=map[nowY][nowX];
                }
            }
        }
        
        int minF=INT_MAX;
        Point* p=NULL;
        for(vector<Point*>::iterator it=Open.begin();it!=Open.end();it++)
        {
            if((*it)->F<=minF)
            {
                minF=(*it)->F;
                p=*it;
            }
            
        }
        Open.erase(find(Open.begin(),Open.end(),p));
        Close.push_back(p);
        
        if(p->X==endX&&p->Y==endY) {end=p;break;}
        nowX=p->X;
        nowY=p->Y;
    }
    /*for(vector<Point*>::iterator it=Open.begin();it!=Open.end();it++)
    {
        cout<<"(x,y) : "<<(*it)->X<<" "<<(*it)->Y<<"--------"<<(*it)->G<<" "<<(*it)->H<<endl<<(*it)->F<<endl;
    }
    cout<<endl;
    for(vector<Point*>::iterator it=Close.begin();it!=Close.end();it++)
    {
        cout<<"(x,y) : "<<(*it)->X<<" "<<(*it)->Y<<"--------"<<(*it)->G<<" "<<(*it)->H<<endl<<(*it)->F<<endl;
    }*/
    
    while(end)
    {
        //end->show();
        if(tab[end->Y][end->X]!='S'&&tab[end->Y][end->X]!='E')
        tab[end->Y][end->X]='G';
        end=end->Parent;
    }
    
    
    for(int i=0;i<tab.size();i++)
    {for(int j=0;j<tab[0].size();j++)
            cout<<tab[i][j]<<" ";
     cout<<endl;
    }
    for(int i=0;i<map.size();i++)
        for(int j=0;j<map[0].size();j++)
        {
            delete map[i][j];
            map[i][j]=NULL;
        }
    return 0;
}
