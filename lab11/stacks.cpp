//leixx080 Rong Lei
// nguy1952 Danh Nguyen

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cctype>

class Token
{
	public:
		Token():next(NULL){}
		Token(char tchar):tchar(tchar), next(NULL){}
		Token(double x): tval(x), next(NULL){}
		char getToken();
	    double getValue ();
		friend void addFront(Token* &head, Token* tok); 
		friend Token* getFront(Token* &head);
		friend void printQ(Token *head);
		
	private:
		char tchar;
		Token* next;
		double tval;
	
};

using namespace std;
void convert(Token* &head, char buffer[100]);

int main()
{
	Token* head = NULL;
	Token *tptr;
	char buffer[100];
	string output ;
	
	
	//Part A
	/*cout << "Enter some text: " << endl;
	cin.getline(buffer, 100);
	int i = 0;
	while(buffer[i] != '\0')
	{
		addFront(head, new Token(buffer[i]));
		i++;
	}
	

	printQ(head);
	cout << endl;
	
	string word;
	while(head != NULL)
	{
		
		tptr = getFront(head);
		word += tptr->getToken();
	}
	
	cout << "string: " << word << endl;*/
	
	//Part C
	cout << " Hey enter some math equations yo " << endl;
	cin.getline(buffer, 100);

	for  (int i = 0 ; buffer[i] != '\0' ; i++ )
		
		{
			if (isdigit(buffer[i]) || buffer[i] == '.')
			{
				output = output + buffer[i];
				if(buffer[i + 1] == ' ' || buffer[i + 1] == '\0')
				{
					output += ' ';
				}
			}	
			
			if (buffer[i] == '(')
			{
				addFront(head, new Token(buffer[i]));
			}
			
			if (buffer[i] == ')')
			{
				while(head->getToken() != '(')
				{
					
					output = output + getFront(head)->getToken() + ' ';
					
				}
				getFront(head);
			}
			
			
			if (buffer[i] == '*' || buffer[i] == '/')
			{
				addFront(head, new Token(buffer[i]));
				
			}
			
			if (buffer[i] == '+' || buffer[i] == '-')
			{
			
				
				if(head != NULL)
				{
					while((head->getToken() == '*') || (head->getToken() == '/'))
					{
						
						output = output + getFront(head)->getToken() + ' ';
						if(head == NULL)
						{
							break;
						}
					}
					
					
				}
				
				addFront(head, new Token(buffer[i]));
				
			}
				
		}
	//Part D		
			for(int i = 0; head != NULL; i++)
			{
				output = output + getFront(head)->getToken() + ' ';
			}
			
			for(int i = 0; i < output.length() - 1; i++)
			{
				buffer[i] = output[i];
			}
			
	cout << "The RPN form of the equation: " << output << endl;
	cout << "The solution to the equation: ";
	convert(head, buffer);
	
	
	return 0;
}
char Token::getToken()
{
	return tchar;
}

double Token::getValue()
{
	return tval;
}

void addFront(Token* &head, Token* tok)
{
	tok->next = head;
	head = tok;
}

Token* getFront(Token* &head)
{
	Token* first;
	first = head;
	if(head != NULL)
		head = head->next;
	
	return first;
}

void printQ(Token *head)
{
	while(head != NULL)
	{
		cout << head->tchar << endl;
		head = head->next;

	}
}

//Part B
void convert(Token* &head, char buffer[100])
{
	int i = 0;
	double a, b, x, y, z;
	string number;
	
	while(buffer[i] != '\0')
	{
		
		switch (buffer[i])
		{
			case '*':
				a = getFront(head)->getValue();
				b = getFront(head)->getValue();
				addFront(head, new Token(a * b));
				i++;
				break;
			case '+':
				a = getFront(head)->getValue();
				b = getFront(head)->getValue();
				addFront(head, new Token(a + b));
				i++;
				break;
			case '-':
				a = getFront(head)->getValue();
				b = getFront(head)->getValue();
				addFront(head, new Token(b - a));
				i++;
				break;
			case '/':
				a = getFront(head)->getValue();
				b = getFront(head)->getValue();
				addFront(head, new Token(a / b));
				i++;
				break;
			case ' ':
				if(isdigit(buffer[i - 1]))
				{
					double x = atof(number.c_str());
					addFront(head, new Token(x));
				}
				number = " ";
				i++;
				break;
			default:
				number += buffer[i];
				i++;
				break;
			
		}
	
	}
	
	cout << head->getValue() << endl;
	
}
