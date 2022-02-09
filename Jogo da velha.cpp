#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	
//	setlocale(LC_ALL, "portuguese");
	
	int i, start, aux;
	char vet[9];
	
	cout<<"Let's play tic-tac-toe!"<<endl<<endl;
	
	cout<<setw(4)<<" 1 |"<<setw(4)<<" 2 |"<<" 3 "<<endl;
	cout<<setw(11)<<"---+---+---"<<endl;
	cout<<setw(4)<<" 4 |"<<setw(4)<<" 5 |"<<" 6 "<<endl;
	cout<<setw(11)<<"---+---+---"<<endl;
	cout<<setw(4)<<" 7 |"<<setw(4)<<" 8 |"<<" 9 "<<endl;
	
	cout<<"Press '1' to start!"<<endl;
	cin>>start;
	
	for(i=0;i<=8;i++){
		vet[i]=' ';
	}
	
	if(start==1){
		
		cout<<"X's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='x';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		cout<<"O's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='o';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		
		
		cout<<"X's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='x';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		cout<<"O's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='o';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		cout<<"X's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='x';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		if( (vet[0]==vet[1] && vet[1]==vet[2] && vet[1]!=' ') || (vet[3]==vet[4] && vet[4]==vet[5] && vet[4]!=' ') || (vet[6]==vet[7] && vet[7]==vet[8] && vet[7]!=' ') || (vet[0]==vet[3] && vet[3]==vet[6] && vet[3]!=' ') || (vet[1]==vet[4] && vet[4]==vet[7] && vet[4]!=' ') || (vet[2]==vet[5] && vet[5]==vet[8] && vet[5]!=' ') || (vet[0]==vet[4] && vet[4]==vet[8] && vet[4]!=' ') || (vet[2]==vet[4] && vet[4]==vet[6] && vet[4]!=' ') ){
			cout<<"X won!";
			return(0);
		}
		
		cout<<"O's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='o';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
			if( (vet[0]==vet[1] && vet[1]==vet[2] && vet[1]!=' ') || (vet[3]==vet[4] && vet[4]==vet[5] && vet[4]!=' ') || (vet[6]==vet[7] && vet[7]==vet[8] && vet[7]!=' ') || (vet[0]==vet[3] && vet[3]==vet[6] && vet[3]!=' ') || (vet[1]==vet[4] && vet[4]==vet[7] && vet[4]!=' ') || (vet[2]==vet[5] && vet[5]==vet[8] && vet[5]!=' ') || (vet[0]==vet[4] && vet[4]==vet[8] && vet[4]!=' ') || (vet[2]==vet[4] && vet[4]==vet[6] && vet[4]!=' ') ){
			cout<<"O won!";
			return(0);
		}
		
		cout<<"X's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='x';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		if( (vet[0]==vet[1] && vet[1]==vet[2] && vet[1]!=' ') || (vet[3]==vet[4] && vet[4]==vet[5] && vet[4]!=' ') || (vet[6]==vet[7] && vet[7]==vet[8] && vet[7]!=' ') || (vet[0]==vet[3] && vet[3]==vet[6] && vet[3]!=' ') || (vet[1]==vet[4] && vet[4]==vet[7] && vet[4]!=' ') || (vet[2]==vet[5] && vet[5]==vet[8] && vet[5]!=' ') || (vet[0]==vet[4] && vet[4]==vet[8] && vet[4]!=' ') || (vet[2]==vet[4] && vet[4]==vet[6] && vet[4]!=' ') ){
			cout<<"X won!";
			return(0);
		}
		
		cout<<"O's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='o';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		if( (vet[0]==vet[1] && vet[1]==vet[2] && vet[1]!=' ') || (vet[3]==vet[4] && vet[4]==vet[5] && vet[4]!=' ') || (vet[6]==vet[7] && vet[7]==vet[8] && vet[7]!=' ') || (vet[0]==vet[3] && vet[3]==vet[6] && vet[3]!=' ') || (vet[1]==vet[4] && vet[4]==vet[7] && vet[4]!=' ') || (vet[2]==vet[5] && vet[5]==vet[8] && vet[5]!=' ') || (vet[0]==vet[4] && vet[4]==vet[8] && vet[4]!=' ') || (vet[2]==vet[4] && vet[4]==vet[6] && vet[4]!=' ') ){
			cout<<"O won!";
			return(0);
		}
		
		cout<<"X's turn. Insert the number that represents the place you want to play at"<<endl<<endl;
		cin>>i;
		i=i-1;
		vet[i]='x';
		
		cout<<" "<<vet[0]<<" |"<<" "<<vet[1]<<" |"<<" "<<vet[2]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[3]<<" |"<<" "<<vet[4]<<" |"<<" "<<vet[5]<<" "<<endl;
		cout<<setw(11)<<"---+---+---"<<endl;
		cout<<" "<<vet[6]<<" |"<<" "<<vet[7]<<" |"<<" "<<vet[8]<<" "<<endl<<endl;
		
		if( (vet[0]==vet[1] && vet[1]==vet[2] && vet[1]!=' ') || (vet[3]==vet[4] && vet[4]==vet[5] && vet[4]!=' ') || (vet[6]==vet[7] && vet[7]==vet[8] && vet[7]!=' ') || (vet[0]==vet[3] && vet[3]==vet[6] && vet[3]!=' ') || (vet[1]==vet[4] && vet[4]==vet[7] && vet[4]!=' ') || (vet[2]==vet[5] && vet[5]==vet[8] && vet[5]!=' ') || (vet[0]==vet[4] && vet[4]==vet[8] && vet[4]!=' ') || (vet[2]==vet[4] && vet[4]==vet[6] && vet[4]!=' ') ){
			cout<<"X won!";
			return(0);
		}
		
		cout<<"Wow! U two r so good at this game that none of u were capable of winning";
		return(0);
		
	}
	if(start!=1){
		cout<<"Ok, Bye!";
	}
}
