#include <iostream>



class CoffeGrinder
{
    private:
        bool CheckVoltage()
        {
            return true;
        }

    public:
        void Start()
        {

            if (CheckVoltage() == true)
            {
                std::cout << "vjuHHH";
            }
            else if (CheckVoltage() == false)
            {
                std::cout << "Beep Beep! Please, Check Voltage!";
            }

            std::cout << " vjuHHH   !!! " << std::endl;
        }

};

int main()
{
    CoffeGrinder cg;
    cg.Start();

    return 0;
}
