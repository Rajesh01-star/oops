#include <iostream>
using namespace std;

class Message{
    private:
        static int count;
    public:
        Message(){
            count++;
        }
        static int totalObjects(void)
		{
			cout << count;
            return 0;
		}
};
int Message::count =0;


int main(){
    Message obj1;
    Message obj2;
    Message obj3;
    //printing object count 
	Message::totalObjects();
	
	return 0;
}