#include<iostream>
using namespace std;
class book_data{
	char books_num[50];
	char book_name[50];
	char author_name[50];
	int num_copies;
public:
	void Get_BookDetails(){
		cout<<"\n Enter Book name: ";
		cin.ignore();
		cin.getline(book_name,50);
		count<<"\n Enter Book number: ";
		cin>>books_num;
		cout<<"\n Enter Authors Name: ";
		cin.ignore();
		cin.getliine(author_name,50);
		fflush(stdin);
		cout<<"\n Enter No. of copies of the desired book: ";
		cin>>num_copies;
	}
	
	void Show_BookData(){
	cout<<"\n Book Number: "<<books_number;
	cout<<"\n Book Name: "<<book_num;
	cout<<"\n Author Name: "<<author_name;
	cout<<"\n Copies: "<<num_copies;
	}
	void Modify_BookData(){
		cout<<"\n Book number: "<<books_num;
		cout<<"\n Modify Book Name: ";
		cin.ignore();
		cin.getline(book_name,50);
		cout<<"\n Modify Author's Name: ";
		cin.ignore();
		cin.getline(authore_name,50);
		cout<<"\n Enter No. of Copies: ";
		cin>>num_copies;
	}
	char* get_book_number(){
		return books_num;
	}
	void Report(){
		cout<<books_num<<setw(30)<<book_name<<setw(30)<<author_name<<set(30)<<num_copies<<endl;
	}
};

