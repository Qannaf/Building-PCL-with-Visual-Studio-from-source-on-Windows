Building VTK 8.2.0 with Visual Studio
=====================================

Download
--------
1. VTK 8.2.0(VTK-8.2.0.zip)Download and unzip the file(C:\VTK-8.2.0)
  <http://www.vtk.org/VTK/resources/software.html#latestcand>  
  <https://github.com/Kitware/VTK/tree/v8.2.0>  
　

CMake
-----
1. Specify the input destination of the source code and the output destination of the solution file.
    * **Where is the source code:**         C:\VTK-8.2.0
    * **Where is build the binaries:**      C:\VTK-8.2.0\build

2. [Configure]Press to select the target Visual Studio.

3. Make various settings. 
    **BUILD**  
    * **BUILD_SHAREED_LIBS**                ☑ (check)
    * **BUILD_TESTING**                     ☐ (uncheck)

    **CMAKE**  
    * **CMAKE_CONFIGURATION_TYPES**         Debug;Release  
    * **CMAKE_CXX_MP_FLAG**                 ☑ (check)   
    * **CMAKE_INSTALL_PREFIX**              C:/Program Files/VTK (or C:/Program Files (x86)/VTK)  

    **VTK**  
    * **VTK_RENDERING_BACKEND**             OpenGL2  

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
        <td>-gd</td>
      </tr>
      <tr>
        <td>Description:</td>
        <td></td>
      </tr>
    </table>  
    <sup>* A character string to be added to the file name (end) of the Debug build generation file.</sup>  

5. [Generate]Press to output the solution file.


Build
-----
1. Visual StudioOpen VTK solution file (C: \ VTK-8.2.0 \ build \ VTK.sln) with administrator privileges  
   (INSTALL fails if Visual Studio is not started with administrator privileges.)

2. Build VTK. (ALL_BUILD)
     1. Set the solution configuration (Debug, Release).
     2. Select the ALL_BUILD project from Solution Explorer.
     3. Press Build> Build Solution to build VTK.

3. Install VTK. (INSTALL)
     1. Select the INSTALL project from Solution Explorer.
     2. Press [Build]> [Project Only]> [Build INSTALL Only] to install VTK.
        The necessary files are copied to the output destination specified by ** CMAKE_INSTALL_PREFIX **.

Environment Variable
--------------------
1. Create the environment variable ** VTK_DIR ** and set the VTK path (C:\Program Files\VTK).
2. Add the VTK path (C:\Program Files\VTK\bin) to the environment variable ** Path **.
