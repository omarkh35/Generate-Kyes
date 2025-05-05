#include <bits/stdc++.h>
using namespace std;

int readNum()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    return a;
}

int randgenerator(int from,int to)
{
    int ranNum=rand()%(to -from + 1)+from;
    return ranNum;

}

string cardGenerator()
{
    string word="";
    char litter='a';
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++)
        {
        litter=char(randgenerator(65,90));
        word =word+litter;
        }
        if(j<3)
            word=word+"-";
    }
    return word;
}

void print(string word,int key)
{
    cout<<"Key["<<key<<"]: "<<word<<endl;
}

void keysFollower()
{
    int num=readNum();
    string word;
    for(int i=1;i<=num;i++)
    {
        word=cardGenerator();
        print(word,i);
    }

}

int main()
{
    srand((unsigned)time(NULL));

    keysFollower();

    return 0;
}
