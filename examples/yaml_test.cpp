#include <yaml-cpp/yaml.h>
#include <iostream>
#include <cassert>
int main()
{ 
    YAML::Node config;
    try{
        config = YAML::LoadFile("../examples/test.yaml");
    }
    catch(std::exception& e){
        std::cout<< e.what() << std::endl;
        return 1;
    }
    std::string str = config[0]["name"].as<std::string>();
    std::cout<< str << std::endl;
    // if (config["pi"]) {
    // std::cout << "Last logged in: " << config["pi"].as<double>() << "\n";
    // }
    // int a = 1;
    // auto pf = reinterpret_cast<float*>(&a);
    // std::cout<< *pf << std::endl;

    // auto pi = reinterpret_cast<int*>(pf);
    // std::cout<< *pi << std::endl;

    // const std::string username = config["doe"].as<std::string>();
    // std::cout << username << std::endl;
    
    // assert(config["calling-birds"].IsSequence());
    // printf("%zu\n", config["calling-birds"].size());

    // assert(config["another"].IsSequence());
    // printf("%zu\n", config["another"].size());
    // printf("%d\n",config["another"][0].as<int>() );

    // std::cout<< config["xmas-fifth-day"]["calling-birds"].as<std::string>() << std::endl; 
    return 0;
}