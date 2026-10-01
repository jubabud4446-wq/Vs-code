#include <bits/stdc++.h>
using namespace std;

class Worker
{
    protected:
    int id_number;

};

class Manager : public Worker
{
    private:
    int team_size;
    public:
    void set_info(int id, int t)
    {
        id_number = id;
        team_size = t;
    }
    void show_info()
    {
        cout << "Id: " << id_number << endl;
        cout << "Team Size: " << team_size << endl;
    }
};

int main()
{
    Manager o1;
    
    o1.set_info(101006, 10);
    o1.show_info();

    return 0;
}