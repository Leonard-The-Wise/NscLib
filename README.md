### NWScritp Compiler Library - For Visual Studio 2022.

This is just a personal Visual Studio 2022 port of the nwnsc project: https://github.com/nwneetools/nwnsc - but without the compiler executable, since the purpose here is to integrate the library into other projects - especially my new [`NWScript Plugin for Notepad++`](https://github.com/Leonard-The-Wise/NWScript-Npp).

The intent is to facilitate integration with Visual Studio 2022. In the original project, the [`CMake`](https://cmake.org/) version required a [`GNU Bison`](http://gnuwin32.sourceforge.net/packages/bison.htm) installation to parse the [`NscParser.ypp`](_NscLib/NscParser.ypp) file and also it would be an heterogeneous environment for me to maintain and work upon, hence all here is already converted to work solely with Visual Studio 2022+ (sorry, multiplataform). Here I already provided the output for the parser so no custom build step is needed. Also, updated some files to disable specific VS warnings, setup the project to be easily included in other VS Solutions, etc.

Since I am not maintaining the included source code (because it more than suffits my needs), if you are looking for an up-to-date version of the library, go to the `original project` (already linked) and download from there instead.

That's all,
Cheers.
