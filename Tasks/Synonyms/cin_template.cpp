#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
	std::map<std::string, std::set<std::string>> synonims_Dict;
        int n {0};
        std::cin >> n;

        for(size_t i {0}; i < n; i++) {
        	std::string command;
        	std::cin >> command;
        	
        	if(command == "ADD") 
            {
        		std::string word1, word2;
            	std::cin >> word1 >> word2;
            	synonims_Dict[word1].insert(word2);
            	synonims_Dict[word2].insert(word1);
            }
        
        	else if(command == "COUNT") 
        	{
        		std::string word;
            	std::cin >> word;
            	std::cout << synonims_Dict[word].size() << std::endl;
        	}
        
        	else if(command == "CHECK") 
        	{
        		std::string word1, word2;
            	std::cin >> word1 >> word2;
            	if(synonims_Dict[word1].find(word2) != synonims_Dict[word1].end())
                	std::cout << "YES" << std::endl;
            	else
                	std::cout << "NO" << std::endl;
        	}
        }
}
