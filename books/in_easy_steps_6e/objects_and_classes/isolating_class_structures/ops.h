class Calculator
{
    private:
        double num1, num2 ;
        char oper ;
        bool status ;
    public:
        Calculator() ;
        void launch() ;
        void readInput() ;
        void writeOutput() ;
        bool run() ;
};
