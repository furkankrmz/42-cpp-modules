#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::string the_file = av[1];
    std::ifstream read_f(the_file);
    std::string write_filename = the_file + ".replace";
    std::cout << write_filename << std::endl;
    std::ofstream write_of(write_filename);
    std::string line = "";
    std::string s1;
    std::string s2;
    std::string x = "";
    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        if (read_f.is_open())
        {
            while (getline(read_f, line))
            {
                size_t pos = 0;
                while ((pos = line.find(s1, pos)) != std::string::npos)
                {
                    line.erase(pos, s1.length());
                    line.insert(pos, s2);
                    pos += s2.length();
                }
                write_of << line << std::endl;
            }
            write_of.close();
            read_f.close();
        }
        else
        {
		    std::cout << "No file exists in that name." << std::endl;
		    return 0;
	    }
  
    }
    else
	    {
		    std::cout << "Wrong argument number." << std::endl;
		    return (1);
	    }
    return 0;
}