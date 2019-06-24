/*Stack
LIFO Last In First Out
PUSH()
POP()
TOP()
*/
#include <iostream>
using namespace std; 

typedef int Type; 

class Node
{
public:
	Node(Type);
	Node *ptrAnt; 
	Type data;	
};
Node::Node(Type _value){
	data = _value;  
	ptrAnt= NULL;
}	

class Stack
{
public:
	Stack();	
	inline void Push(Type);
	Type Pop(); 
	inline bool getTop();  
	
	Node *Top; 
};

Stack::Stack(){
	Top= NULL; 
}

void Stack::Push(Type _value){
	if (Top==NULL) {Top = new Node(_value);cout <<"Push: "<<_value<<endl;}
	else{
		Node *aux= new Node(_value);
		aux->ptrAnt = Top; 
		Top= aux;
		cout <<"Push: "<<_value<<endl; 
	}
}

inline bool Stack::getTop(){
	if (Top==NULL)return true;
	else return false; 
} 

Type Stack::Pop(){
		if(getTop()==true){
		cout <<"PILA VACIA"<<endl;
		return 0; 
		}
		else{
		int data = Top->data; 
		Top=Top->ptrAnt;
		cout<<"Pop:  "<<data<<endl; 
		return data; 
		}

}

int main(int argc, char const *argv[])
{
	Stack num1; //Nueva pila 
	num1.Push(1);
	num1.Push(2);
	num1.Push(3);
	num1.Push(4);
	num1.Push(5);
	num1.Push(6);
	num1.Push(7);
	num1.Pop();
	num1.Pop();

	return 0;
}

