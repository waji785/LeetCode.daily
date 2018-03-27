#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
int main()
{
    std::string str("Hello world");
    std::copy( std::begin(str),std::end(str),
               std::ostream_iterator<char>(std::cout, ""));
    getchar();
    return 0;
}