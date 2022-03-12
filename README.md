### NWScritp Compiler Library.

This is just a personal Visual Studio 2022 port of the nwnsc project: https://github.com/nwneetools/nwnsc - but without the compíler executable, since the purpose here is to integrate the library into other projects.

The intent of these files is to facilitate integration with Visual Studio 2022 in my NWScript Plugin for Notepad++. In the original project, the CMAKE version required a GNU BISON compiler installation to parse the NscParser.ypp file. Here I already provided the output for that so no custom build step is needed. Also, updated some files to disable warnings, setup the project to be easily included in other VS Solutions, etc.

Since I am not maintaining the code, if you want an upgraded version of nwnsc, go to the original project instead.

That's all.
