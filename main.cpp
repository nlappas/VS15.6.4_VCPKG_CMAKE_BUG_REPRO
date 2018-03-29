#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>


int main() {

    std::string lines("test\ttest2\ttest3");
    std::vector<std::string> strs;
    boost::split(strs,lines,boost::is_any_of("\t"));
    std::cout << "hello world" << std::endl;

    return 0;
}