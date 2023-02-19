#ifndef CLIENT_H
#define CLIENT_H

class Client{
    public:
        Client();
        void menu();
        void action(int);
        void checkBalance();
        void depositCash();
        void withdraw();

    private:
        double cash;
};
#endif //CLIENT_H