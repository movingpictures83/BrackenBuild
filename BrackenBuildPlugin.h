#ifndef BRACKENBUILDPLUGIN_H
#define BRACKENBUILDPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class BrackenBuildPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BrackenBuild";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
