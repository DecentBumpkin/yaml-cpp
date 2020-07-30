#include <yaml-cpp/yaml.h>
#include <iostream>
#include <cassert>
int main()
{ 
    YAML::Node config = YAML::LoadFile("../examples/test.yaml");
    if (config["pi"]) {
    std::cout << "Last logged in: " << config["pi"].as<double>() << "\n";
    }

    const std::string username = config["doe"].as<std::string>();
    const std::string password = config["ray"].as<std::string>();
    std::cout << username << std::endl;
    
    assert(config["calling-birds"].IsSequence());
    printf("%zu\n", config["calling-birds"].size());
    printf("%zu\n", config["calling-birds"]["good"].size() );
    printf("%zu\n", config["calling-birds"][0].size() );
    printf("%zu\n", config["calling-birds"][1].size() );
    printf("%zu\n", config["calling-birds"][2].size() );
    printf("%zu\n", config["calling-birds"][3].size() );
    assert(config["another"].IsSequence());
    printf("%zu\n", config["another"].size());
    printf("%d\n",config["another"][0].as<int>() );

    std::cout<< config["xmas-fifth-day"]["calling-birds"].as<std::string>() << std::endl; 
    return 0;
}