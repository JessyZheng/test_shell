#include <iostream>
#include <string>
#include <vector>
#include <readline/readline.h>
#include <readline/history.h>
#include <boost/algorithm/string.hpp>

int main()
{
    std::string inputline;
    while(1)
    {
        inputline = readline("jessy > ");
        if(inputline.empty()){
            continue;
        }

        if(!inputline.compare("exit")){
            exit(0);
        }
        add_history(inputline.c_str());

        std::vector<std::string> command_tokens;
        boost::split(command_tokens, inputline, boost::is_any_of(" +,"));
        if(!command_tokens[0].compare("help")){
            std::cout << "command list:" << std::endl;
            std::cout << "   test" << std::endl;
        }else if(!command_tokens[0].compare("test")){
            uint64_t timestamp = 0;
            if(command_tokens.size() >= 2){
                timestamp = std::stol(command_tokens[1]);
            }
            std::cout << "command test" << std::endl;
        }
        else
        {
            std::cout << "input error" << std::endl;
        }
        
    }
    return 0;
}