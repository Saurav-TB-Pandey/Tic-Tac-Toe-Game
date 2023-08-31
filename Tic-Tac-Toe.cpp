#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

char game[10];

int checkwin()
{
	if(game[1]==game[2] && game[2]==game[3])
	{
		return 1;
	}
	else
	if(game[4]==game[5] && game[5]==game[6])
	{
		return 1;
	}
	else
	if(game[7]==game[8] && game[8]==game[9])
	{
		return 1;
	}
	else
	if(game[1]==game[4] && game[4]==game[7])
	{
		return 1;
	}
	else
	if(game[2]==game[5] && game[5]==game[8])
	{
		return 1;
	}
	else
	if(game[3]==game[6] && game[6]==game[9])
	{
		return 1;
	}
	else
	if(game[1]==game[5] && game[5]==game[9])
	{
		return 1;
	}
	else
	if(game[3]==game[5] && game[5]==game[7])
	{
		return 1;
	}
	else
	if(game[1]!='1' && game[2]!='2' && game[3]!='3' && game[4]!='4' && game[5]!='5' && game[6]!='6' && game[7]!='7' && game[8]!='8' && game[9]!='9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void board()
{
	system("cls");
	
	cout<<endl<<"\tThis Program Is Written By Saurav Kumar";
	cout<<endl<<endl<<"\t< Tic Tac Toe >\n\n";
	
	cout<<"\t\tPlayer 1 (X) - Player 2 (O)"<<endl<<endl<<endl;
	
	cout<<"\t\t\t   |   |  "<<endl;
	cout<<"\t\t\t "<<game[1]<<" | "<<game[2]<<" | "<<game[3]<<endl;
	
	cout<<"\t\t\t___|___|___"<<endl;
	cout<<"\t\t\t   |   |   "<<endl;
	
	cout<<"\t\t\t "<<game[4]<<" | "<<game[5]<<" | "<<game[6]<<endl;
	
	cout<<"\t\t\t___|___|___"<<endl;
	cout<<"\t\t\t   |   |   "<<endl;
	
	cout<<"\t\t\t "<<game[7]<<" | "<<game[8]<<" | "<<game[9]<<endl;
	
	cout<<"\t\t\t   |   |   "<<endl<<endl;
}

int rain()
{
	
	int player = 1,i,choice;
	char squar[10]={'0','1','2','3','4','5','6','7','8','9'};
	for(int m=0;m<10;m++)
	{
		game[m]=squar[m];
	}
	char mark;
	system("color f4");
	do
	{
		board();
		player=(player%2)?1:2;
		
		cout<<"\n\t\tPlayer "<<player<<", Enter A Number : ";
		cin>>choice;
		mark=(player==1)? 'X': 'O';
		
		if(choice==1 && game[1]=='1')
		{
			game[1]=mark;
		}
		else
		if(choice==2 && game[2]=='2')
		{
			game[2]=mark;
		}
		else
		if(choice==3 && game[3]=='3')
		{
			game[3]=mark;
		}
		else
		if(choice==4 && game[4]=='4')
		{
			game[4]=mark;
		}
		else
		if(choice==5 && game[5]=='5')
		{
			game[5]=mark;
		}
		else
		if(choice==6 && game[6]=='6')
		{
			game[6]=mark;
		}
		else
		if(choice==7 && game[7]=='7')
		{
			game[7]=mark;
		}
		else
		if(choice==8 && game[8]=='8')
		{
			game[8]=mark;
		}
		else
		if(choice==9 && game[9]=='9')
		{
			game[9]=mark;
		}
		else
		{
			cout<<"\n\t\tInvalid Move";
			
			player--;
			cin.ignore();
			cin.get();
		}
		
		i=checkwin();
		player++;
		
	}while(i==-1);
	board();
	
	if(i==1)
	{
		cout<<"\t\t==> Player "<<--player<<" Win ";
	}
	else
	{
		cout<<"\t\t==> Game Draw";
	}
	
	cin.ignore();
	cin.get();
	return 0;
}

int main()
{
	int input;
	system("color e0");
	cout<<endl;
	do{
		cout<<"1)-Continue"<<endl;
		cout<<"2)-Exit"<<endl;
		cout<<"\nInput Here : ";
		cin>>input;
		Sleep(300);
		switch(input)
		{
			case 1:
				rain();
				break;
			case 2:
				system("color f1");
				cout<<"\nThanks For Visit"<<endl;
				break;
			default:
				cout<<"Wrong Input"<<endl;
				break;
		}
	}
	while(input != 2);
}
