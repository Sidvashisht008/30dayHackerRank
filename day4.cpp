
class Person
{
    int age;
    public:
        Person(int initialAge)
        {
            if(initialAge<0)
            {
                cout<<"Age is not valid, setting age to 0."<<endl;
            }
            else
            {
                age=initialAge;
            }
        }
        void yearPasses()
        {
            age++;
        }
        void amIOld()
        {
            if(age<13)
            {
                cout<<"You are young."<<endl;
            }
            else if((age>=13)&(age<18))
            {
                cout<<"You are a teenager."<<endl;
            }
            else
            {
                cout<<"You are old."<<endl;
            }
        }
};



