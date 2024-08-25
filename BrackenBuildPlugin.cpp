#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BrackenBuildPlugin.h"

void BrackenBuildPlugin::input(std::string file) {
   readParameterFile(file);
}

void BrackenBuildPlugin::run() {}

void BrackenBuildPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "bracken-build";
myCommand += " -d ";
myCommand += myParameters["database"];
myCommand += " -t ";
myCommand += myParameters["threads"];
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<BrackenBuildPlugin> BrackenBuildPluginProxy = PluginProxy<BrackenBuildPlugin>("BrackenBuild", PluginManager::getInstance());
