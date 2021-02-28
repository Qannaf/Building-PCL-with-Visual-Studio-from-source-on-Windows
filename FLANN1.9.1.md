Building FLANN 1.9.1 with Visual Studio 16 2019 
=======================================

Download
--------
1. FLANN 1.9.1(flann-1.9.1.zip)Download and unzip the file.(C:\flann-1.9.1)  
  <https://github.com/mariusmuja/flann/releases/tag/1.9.1>  
　

CMake
-----
1.Specify the input destination of the source code and the output destination of the solution file.  
    * **Where is the source code:**         C:\flann-1.9.1  
    * **Where is build the binaries:**      C:\flann-1.9.1\build  

2. [Configure]Press to select the target Visual Studio. 

3. Make various settings.
    * **BUILD_C_BINDINGS**                  ☑ (check)  
    * **BUILD_MATLAB_BINDINGS**             ☐ (uncheck)  
    * **BUILD_PYTHON_BINDINGS**             ☐ (uncheck)  
    * **CMAKE_CONFIGURATION_TYPES**         Debug;Release  
    * **CMAKE_INSTALL_PREFIX**              C:/Program Files/flann (or C:/Program Files (x86)/flann)  

4. [Add Entry]Press to add the following settings.  
    <table>
      <tr>
        <td>Name:</td>
        <td>CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS</td>
      </tr>
      <tr>
        <td>Type:</td>
        <td>BOOL</td>
      </tr>
      <tr>
        <td>Value:</td>
        <td>☑(check)</td>
      </tr>
      <tr>
        <td>Description:</td>
        <td></td>
      </tr>
    </table>  
    <table>
      <tr>
        <td>Name:</td>
        <td>CMAKE_DEBUG_POSTFIX</td>
      </tr>
      <tr>
        <td>Type:</td>
        <td>STRING</td>
      </tr>
      <tr>
        <td>Value:</td>
        <td>-gd</td>
      </tr>
      <tr>
        <td>Description:</td>
        <td></td>
      </tr>
    </table>  
    <sup>* Character string to be added to the file name (end) of the Debug build generation file</sup>  

5. [Generate]Press to output the solution file.  


Build
-----
1. Start Visual Studio with administrator privileges and FLANN solution file(C:\flann-1.9.1\build\flann.sln) Open  
   (INSTALL fails unless Visual Studio is started with administrator privileges.)  

2. Build FLANN(ALL_BUILD)  
   1. Set the solution configuration (Debug, Release).
   2. Select the ALL_BUILD project from Solution Explorer.
   3. Press Build> Build Solution to build FLANN.

3. Install FLANN. (INSTALL)
     1. Select the INSTALL project from Solution Explorer.
     2. Press Build> Project Only> Build INSTALL Only to install FLANN.
        The necessary files are copied to the output destination specified by ** CMAKE_INSTALL_PREFIX **.


Environment Variable
--------------------
1. Create the environment variable ** FLANN_ROOT ** and set the FLANN path (C:\Program Files\flann)
2. Add;% FLANN_ROOT%\bin to the environment variable ** Path **. 
