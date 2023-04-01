
#include<bits/stdc++.h>
using namespace std;
char board[3][3]={{'1' , '2' , '3'},{'4' , '5' , '6'},{'7' , '8' , '9'} };
int arr[9]={0,0,0,0,0,0,0,0,0};
vector<int>pl1;
vector<int>pl2;
vector<vector<int>>ans1={{1,5,9},{3,5,7},{4,5,6},{2,5,8}};
vector<vector<int>>ans2={{1,4,7},{2,5,8},{3,6,9},{1,2,3},{4,5,6} ,{7,8,9} };

void drawBoard()
{
    cout<<endl<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl;
    cout<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  |  "<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl;
    cout<<"----------------"<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl;
    cout<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  |  "<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl;
    cout<<"----------------"<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl;
    cout<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  |  "<<endl;
    cout<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |  "<<endl<<endl;

}
void note()
{

    cout<<"Player 1 -->  X"<<endl;
    cout<<"Player 2 -->  O"<<endl;
}
int enterSlot(int x)
{
    if(arr[x-1]==0 && x<=9 &&x>0)
    {
            if(x==1)
            {
                board[0][0]='X';
            }else if(x==2)
            {
                board[0][1]='X';
            }else if(x==3)
            {
                board[0][2]='X';
            }else if(x==4)
            {
                board[1][0]='X';
            }else if(x==5)
            {
                board[1][1]='X';
            }else if(x==6)
            {
                board[1][2]='X';
            }else if(x==7)
            {
                board[2][0]='X';
            }else if(x==8)
            {
                board[2][1]='X';
            }else
            {
                board[2][2]='X';
            }
            pl1.push_back(x);
            arr[x-1]=1;
    }else if(x>9 || x<=0)
    {
        cout<<"Enter Right Position"<<endl;
        return 1;
    }else
    {

        cout<<"This Position Is Occupied !\nTry another position"<<endl;
        return 1;
    }

return 0;

}

int  enterSlot1(int x)
{

 if(arr[x-1]==0 && x<=9 &&x>0)
 {
     if(x==1)
    {
        board[0][0]='O';
    }else if(x==2)
    {
        board[0][1]='O';
    }else if(x==3)
    {
        board[0][2]='O';
    }else if(x==4)
    {
        board[1][0]='O';
    }else if(x==5)
    {
        board[1][1]='O';
    }else if(x==6)
    {
        board[1][2]='O';
    }else if(x==7)
    {
        board[2][0]='O';
    }else if(x==8)
    {
        board[2][1]='O';
    }else
    {
        board[2][2]='O';
    }
    pl2.push_back(x);
    arr[x-1]=1;

 }else if(x>9 || x<=0)
    {
        cout<<"Enter Right Position"<<endl;
        return 1;
    }
else
 {

    cout<<"This Position Is Occupied !\nTry another position"<<endl;
    return 1;
 }

 return 0;

}

int result()
{

    if(pl1.size()>=3)
    {
        sort(pl1.begin() , pl1.end());
            for(int i=0;i<ans1.size();i++)
        {

            int cnt=0;
            int index=0;
            for(int j=0;j<pl1.size();j++)
            {
                if(pl1[j]==ans1[i][index])
                {
                    index+=1;
                    cnt++;
                }
            }
            if(cnt==3)
            {

                    system("CLS");
                    note();
                    drawBoard();
                    cout<<"**********************"<<endl;
                    cout<<"* Player 1 Is WINNER *"<<endl;
                    cout<<"**********************"<<endl;
                return 1;
            }
        }
            for(int i=0;i<ans2.size() ;i++)
            {

                int cnt=0;
                int index=0;
                for(int j=0;j<pl1.size() ;j++)
                {
                    if(pl1[j]==ans2[i][index])
                    {
                        index+=1;
                        cnt++;
                    }
                }
                if(cnt==3)
                {
                    system("CLS");
                    note();
                    drawBoard();
                    cout<<"**********************"<<endl;
                    cout<<"* Player 1 Is WINNER *"<<endl;
                    cout<<"**********************"<<endl;
                    return 1;
                }
            }
    }

     return 0;

}
int result1()
{


   if(pl2.size()>=3)
    {
        sort(pl2.begin() , pl2.end());
        for(int i=0;i<ans1.size();i++)
        {

            int cnt=0;
            int index=0;
            for(int j=0;j<pl2.size();j++)
            {
                if(pl2[j]==ans1[i][index])
                {
                    index++;
                    cnt++;
                }
            }
            if(cnt==3)
            {
                    system("CLS");
                    note();
                    drawBoard();
                    cout<<"**********************"<<endl;
                    cout<<"* Player 2 Is WINNER *"<<endl;
                    cout<<"**********************"<<endl;
                    return 1;
            }
        }
            for(int i=0;i<ans2.size() ;i++)
            {

                int cnt=0;
                int index=0;
                for(int j=0;j<pl2.size() ;j++)
                {
                    if(pl2[j]==ans2[i][index])
                    {
                        index+=1;
                        cnt++;
                    }
                }
                if(cnt==3)
                {
                    system("CLS");
                    note();
                    drawBoard();
                    cout<<"**********************"<<endl;
                    cout<<"* Player 2 Is WINNER *"<<endl;
                    cout<<"**********************"<<endl;
                    return 1;
                }
            }
    }

     return 0;
}

int tie()
{

   if(pl1.size()==5 && pl2.size()==4 ||pl1.size()==4 && pl2.size()==5 &&result()==0 && result1()==0)
   {
       system("CLS");
        drawBoard();
        cout<<"*******"<<endl;
       cout<<"* TIE *"<<endl;
       cout<<"*******"<<endl;
       return 1;
   }
   return 0;
}


int main()
{





    int in1=0;
    int in2=0;





    while(1)
    {
        system("CLS");
        note();
        drawBoard();


        step1:
        cout<<"Enter The position [Player 1]"<<endl;
        cin>>in1;

        if(enterSlot(in1))
        {
           goto step1;
        }else
        {

            system("CLS");
            note();
            drawBoard();
        }


         if(result()==1 || result1()==1||tie()==1)
        {


            break;
        }


        step2:


        cout<<"Enter The position [Player 2]"<<endl;
        cin>>in2;
        if(enterSlot1(in2))
        {

           goto step2;

        }else{

            system("CLS");
            note();
            drawBoard();

        }


        if(result()==1|| result1()==1||tie()==1)
        {
            break;
        }




    }



    return 0;
}

