#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <stack>
#include <vector>

class USBConnection{
    private:
        int _id;
        static std::stack<int> ids;
        USBConnection(int id){
            _id = id;
        };

    public:
        static USBConnection *CreateUsbConnection(){
            if(ids.size() > 0){
                USBConnection *a = new USBConnection(ids.top());
                ids.pop();
                return a;
            }
            else{
                return nullptr;
            }
        };
        int get_id(){
            return _id;
        }
        ~USBConnection(){
            ids.push(this->_id);
        };

};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif