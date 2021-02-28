Building QHull 2020.1 with Visual Studio
=================================================

Download
--------
1. QHull 2020.1 for Windows(qhull-2020.1.zip)Download and unzip the file (C:\qhull-2020.1)  
   <http://www.qhull.org/download/>  
   <https://github.com/qhull/qhull/releases/tag/2020.1>  


CMake  
-----
1.Leave config.cmake.in in the existing build folder (C:\qhull-2020.1\build) and delete the other files.

1. Specify the input destination of the source code and the output destination of the solution file. 
    * **Where is the source code:**         C:\qhull-2020.1  
    * **Where is build the binaries:**      C:\qhull-2020.1\build  

2. [Configure]Press to select the target Visual Studio.

3. Make various settings. 
    * **CMAKE_CONFIGURATION_TYPES**         Debug;Release  
    * **CMAKE_INSTALL_PREFIX**              C:\Program Files\qhull (or C:\Program Files (x86)\qhull)  

4. [Add Entry]Press to add the following settings.  
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
        <td>_d</td>
      </tr>
      <tr>
        <td>Description:</td>
        <td></td>
      </tr>
    </table>  
    <sup>* A character string to be added to the file name (end) of the Debug build generation file </sup> 

5. [Generate]Press to output the solution file. 


Build  
-----
1. Start Visual Studio with administrator privileges and QHull solution files(C:\qhull-2020.1\build\qhull.sln)Open.
   (INSTALL fails unless Visual Studio is started with administrator privileges.)  

2.Build QHull. (ALL_BUILD)
     1. Set the solution configuration (Debug, Release).
     2. Select the ALL_BUILD project from Solution Explorer.
     3. Press Build> Build Solution to build QHull.

3. Install QHull. (INSTALL)
     1. Select the INSTALL project from Solution Explorer.
     2. Press Build> Project Only> Build INSTALL Only to install QHull.
        The necessary files are copied to the output destination specified by ** CMAKE_INSTALL_PREFIX **.


Environment Variable
--------------------
1. Create the environment variable ** QHULL_ROOT ** and set the QHull path (C:\Program Files\qhull). 
