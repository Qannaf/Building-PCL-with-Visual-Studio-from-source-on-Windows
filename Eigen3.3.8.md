Building Eigen 3.3.8 with Visual Studio
=======================================

Download
--------
1. Eigen 3.3.8(eigen-3.3.8.zip)Download and unzip the file(C:\eigen-3.3.8)  
   <http://eigen.tuxfamily.org/>  
   <https://gitlab.com/libeigen/eigen/-/releases/3.3.8>  


CMake
-----
1. Specify the input destination of the source code and the output destination of the solution file. 
    * **Where is the source code:**         C:\eigen-3.3.8   
    * **Where is build the binaries:**      C:\eigen-3.3.8\build  

2. [Configure]Press to select the target Visual Studio.  

3. Make various settings.
    * **CMAKE_INSTALL_PREFIX**              C:\Program Files\Eigen3 (or C:\Program Files (x86)\Eigen3)  

4. [Generate]Press to output the solution file.  


Build
-----
1. Visual StudioStart Eigen's solution file with administrator privileges(C:\eigen-3.3.8\build\Eigen.sln)を開く。  
   (INSTALL fails unless Visual Studio is started with administrator privileges.)  

2. Install Eigen(INSTALL)
    1. Select the INSTALL project from Solution Explorer.
    2. Press Build> Project Only> Build INSTALL Only to install Eigen.
        The necessary files are copied to the output destination specified by ** CMAKE_INSTALL_PREFIX **.


Environment Variable
--------------------
1.Environment variable**EIGEN_ROOT**And set the Eigen path (C:\Program Files\Eigen3).
