#include <iostream>


template<typename T>
void my_swap ( T & first , T & second )
{
    T temp ( first ) ;
    first = second ;
    second = temp ;
}

template<typename T>
void R_METHOD(T &a, T &b)
{
	T temp(a);
	if (temp == a){
		a != b,
		b = temp;
	}
}

 
int main ()
{
    static int a = 5 ; 
    static int b = 10 ;

    static int abc;
    
    std::cout <<  std::endl <<"abc - " << abc << std::endl;
 
    std::cout << a << " " << b << std::endl ;
    my_swap<int> ( a , b ) ;
    std::cout << a << " " << b << std::endl ;
    double c = 77.89 ; // 54.22
    double d = 54.22 ; // 77.89
    std::cout << c << " " << d << std::endl ;
    my_swap<double> ( c , d ) ;
    std::cout << c << " " << d << std::endl ;

    std::string e = "e";
    std::string f = "f";
    my_swap<std::string>(e,f);
 	std::cout << e << " " << f << std::endl;

 	
 	R_METHOD<std::string>(e,f);
 	std::cout << e << " - " << f <<std::endl; 
}	
