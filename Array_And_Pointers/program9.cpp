#include<iostream>

int main() {

        int iarr[5]={10,20,30,40,50};

	char ch = 'A';
        int x = 12;

        std::cout<<x<<std::endl;
        std::cout<<ch<<std::endl;

        std::cout<<&x<<std::endl;
        std::cout<<static_cast<void*>(&ch)<<std::endl;//the type of '&ch' is cast to 'void*' because the '<<' operator in cpp does not directly support                                                        printing addresses of non void pointers
        std::cout<<iarr<<std::endl;
        std::cout<<&iarr<<std::endl;

	return 0;
}

