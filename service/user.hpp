struct user
{
    int id;
    string name;
    string email;
    string password;

    int setID(int id)
    {
       this-> id = id;
    }
    int getId(int id){
       return this->id;
    }
    void setName(string name){
        this->name=name;
    }
    string getName(string name)
    {
        return this->name;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    string getEmail(string email){
        return this->email=email;
    }

    void setPassword(string password){
        this->password=password;
    }

    string getPassword(string password)
    {
        return this->email;
    }
};