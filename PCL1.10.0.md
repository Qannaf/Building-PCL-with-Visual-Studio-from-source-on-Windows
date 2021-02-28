Building PCL 1.10.0 with Visual Studio
=====================================
This tutorial explains how to build the Point Cloud Library from source on Microsoft Windows platforms with Cmake

Download  
--------
1. Clone PCL from Git.(C:\PCL-1.10.0)  
  <https://github.com/PointCloudLibrary/pcl/tree/pcl-1.10.0>  


3rdParty  
--------
1. Build and install the 3rd Party library.
    * Boost 1.72.0 <https://github.com/Qannaf/Building-PCL-with-Visual-Studio-from-source-on-Windows/blob/main/Boost1.74.0.md>  
    * Eigen 3.3.7 <https://github.com/Qannaf/Building-PCL-with-Visual-Studio-from-source-on-Windows/blob/main/Eigen3.3.8.md>  
    * FLANN 1.9.1 <https://github.com/Qannaf/Building-PCL-with-Visual-Studio-from-source-on-Windows/blob/main/FLANN1.9.1.md>  
    * QHull 2019.1 <https://github.com/Qannaf/Building-PCL-with-Visual-Studio-from-source-on-Windows/blob/main/QHull2020.1.md>
    * VTK 8.2.0 <https://github.com/Qannaf/Building-PCL-with-Visual-Studio-from-source-on-Windows/blob/main/VTK8.2.0.md>  
    * OpenNI 2.2.0.33 Beta <http://structure.io/openni>

2. Set environment variables for 3rdParty library  
    * **BOOST_ROOT**                        C:\Program Files\Boost  
    * **EIGEN_ROOT**                        C:\Program Files\Eigen3  
    * **FLANN_ROOT**                        C:\Program Files\flann  
    * **QHULL_ROOT**                        C:\Program Files\qfull
    * **VTK_DIR**                           C:\Program Files\VTK  

CMake  
-----
1. Specify the input destination of the source code and the output destination of the solution file. 
    * **Where is the source code:**         C:\PCL-1.10.0  
    * **Where is build the binaries:**      C:\PCL-1.10.0\build  

2. [Configure]Press to select the target Visual Studio.  

3. Make various settings  
   (It is easy to understand if you check Grouped and Advanced.)  
    **Ungrouped Entries**  
    * **EIGEN_INCLUDE_DIR**                 C:\Program Files\Eigen3\include\eigen3  
    * **VTK_DIR**                           C:\Program Files\VTK\lib\cmake\vtk-8.2  

    **BUILD**  
    * **BUILD_2d**                          ☑(check)  
    * **BUILD_CUDA**                        ☐(uncheck)  
    * **BUILD_GPU**                         ☐(uncheck)  
    * **BUILD\_all\_in\_one\_installer**    ☑(check)<sup>*1</sup>     
    * **BUILD_apps**                        ☐(uncheck)  
    * **BUILD_common**                      ☑(check)  
    * **BUILD_example**                     ☐(uncheck)  
    * **BUILD_features**                    ☑(check)  
    * **BUILD_filters**                     ☑(check)  
    * **BUILD_geometry**                    ☑(check)   
    * **BUILD\_global\_tests**              ☐(uncheck)  
    * **BUILD_io**                          ☑(check)   
    * **BUILD_kdtree**                      ☑(check)   
    * **BUILD_keypoints**                   ☑(check)  
    * **BUILD_ml**                          ☑(check)  
    * **BUILD_octree**                      ☑(check)   
    * **BUILD_outofcore**                   ☑(check)   
    * **BUILD_people**                      ☑(check)   
    * **BUILD_recognition**                 ☑(check)   
    * **BUILD_registration**                ☑(check)   
    * **BUILD\_sample\_consensus**          ☑(check)   
    * **BUILD_search**                      ☑(check)   
    * **BUILD_segmentation**                ☑(check)   
    * **BUILD_simulation**                  ☐(uncheck)   
    * **BUILD_stereo**                      ☑(check)   
    * **BUILD_surface**                     ☑(check)   
    * **BUILD\_surface\_on\_nurbs**         ☑(check)   
    * **BUILD_tools**                       ☑(check)<sup>*2</sup>   
    * **BUILD_tracking**                    ☑(check)   
    * **BUILD_visualization**               ☑(check)   

   <sup> \*1 INSTALL When you build the project\<CMAKE\_INSTALL\_PREFIX\>(C:\Program Files\PCL)PCL and 3rd Party are copied to the directory specified in </sup>  
   <sup> \*2 Since it takes time to build, uncheck if various tools (bin \\ pcl \ _ \ *. Exe) are not needed.</sup>  

    **Boost**  
    * **Boost_ATOMIC_LIBRARY_DEBUG**          C:\Program Files\Boost\lib\libboost_atomic-vc142-mt-gd-1_72.lib  
    * **Boost_ATOMIC_LIBRARY_RELEASE**        C:\Program Files\Boost\lib\libboost_atomic-vc142-mt-1_72.lib  
    * **Boost_CHRONO_LIBRARY_DEBUG**          C:\Program Files\Boost\lib\libboost_chrono-vc142-mt-gd-1_72.lib  
    * **Boost_CHRONO_LIBRARY_RELEASE**        C:\Program Files\Boost\lib\libboost_chrono-vc142-mt-1_72.lib  
    * **Boost_DATE_TIME_LIBRARY_DEBUG**       C:\Program Files\Boost\lib\libboost_date_time-vc142-mt-gd-1_72.lib  
    * **Boost_DATE_TIME_LIBRARY_RELEASE**     C:\Program Files\Boost\lib\libboost_date_time-vc142-mt-1_72.lib  
    * **Boost_FILESYSTEM_LIBRARY_DEBUG**      C:\Program Files\Boost\lib\libboost_filesystem-vc142-mt-gd-1_72.lib  
    * **Boost_FILESYSTEM_LIBRARY_RELEASE**    C:\Program Files\Boost\lib\libboost_filesystem-vc142-mt-1_72.lib 
    * **Boost_INCLUDE_DIR**                   C:\Program Files\Boost\include\boost-1_72
    * **Boost_IOSTREAMS_LIBRARY_DEBUG**       C:\Program Files\Boost\lib\libboost_iostreams-vc142-mt-gd-1_72.lib  
    * **Boost_IOSTREAMS_LIBRARY_RELEASE**     C:\Program Files\Boost\lib\libboost_iostreams-vc142-mt-1_72.lib  
    * **Boost_LIBRARY_DIR_DEBUG**             C:\Program Files\Boost\lib  
    * **Boost_LIBRARY_DIR_RELEASE**           C:\Program Files\Boost\lib  
    * **Boost_MPI_LIBRARY_DEBUG**             C:\Program Files\Boost\lib\libboost_mpi-vc142-mt-gd-1_72.lib  
    * **Boost_MPI_LIBRARY_RELEASE**           C:\Program Files\Boost\lib\libboost_mpi-vc142-mt-1_72.lib  
    * **Boost_REGEX_LIBRARY_DEBUG**           C:\Program Files\Boost\lib\libboost_regex-vc142-mt-gd-1_72.lib  
    * **Boost_REGEX_LIBRARY_RELEASE**         C:\Program Files\Boost\lib\libboost_regex-vc142-mt-1_72.lib  
    * **Boost_SERIALIZATION_LIBRARY_DEBUG**   C:\Program Files\Boost\lib\libboost_serialization-vc142-mt-gd-1_72.lib  
    * **Boost_SERIALIZATION_LIBRARY_RELEASE** C:\Program Files\Boost\lib\libboost_serialization-vc142-mt-1_72.lib 
    * **Boost_SYSTEM_LIBRARY_DEBUG**          C:\Program Files\Boost\lib\libboost_system-vc142-mt-gd-1_72.lib  
    * **Boost_SYSTEM_LIBRARY_RELEASE**        C:\Program Files\Boost\lib\libboost_system-vc142-mt-1_72.lib  
    * **Boost_THREAD_LIBRARY_DEBUG**          C:\Program Files\Boost\lib\libboost_thread-vc142-mt-gd-1_72.lib  
    * **Boost_THREAD_LIBRARY_RELEASE**        C:\Program Files\Boost\lib\libboost_thread-vc142-mt-1_72.lib  

    **CMAKE**  
    * **CMAKE_CONFIGURATION_TYPES**         Debug;Release  
    * **CMAKE_INSTALL_PREFIX**              C:\Program Files\PCL  

    **FLANN**  
    * **FLANN_INCLUDE_DIR**                 C:\Program Files\flann\include  
    * **FLANN_LIBRARY**                     C:\Program Files\flann\lib\flann_cpp_s.lib  
    * **FLANN_LIBRARY_DEBUG**               C:\Program Files\flann\lib\flann_cpp_s-gd.lib  

    **OPENNI2**  
    * **OPENNI2_INCLUDE_DIRS**              C:\Program Files\OpenNI2\Include  
    * **OPENNI2_LIBRARY**                   C:\Program Files\OpenNI2\Lib\OpenNI2  

    **QHULL**  
    * **QHULL_INCLUDE_DIR**                 C:\Program Files\qhull\include  
    * **QHULL_LIBRARY**                     C:\Program Files\qhull\lib\qhullstatic.lib  
    * **QHULL_LIBRARY_DEBUG**               C:\Program Files\qhull\lib\qhullstatic_d.lib  

    **WITH**  
    * **WITH_CUDA**                         ☐(uncheck)  
    * **WITH_DAVIDSDK**                     ☐(uncheck)  
    * **WITH_DOCS**                         ☐(uncheck)  
    * **WITH_DSSDK**                        ☐(uncheck)  
    * **WITH_ENSENSO**                      ☐(uncheck)  
    * **WITH_FZAPI**                        ☐(uncheck)  
    * **WITH_LIBUSB**                       ☐(uncheck)  
    * **WITH_OPENGL**                       ☑(check)  
    * **WITH_OPENNI**                       ☐(uncheck)  
    * **WITH_OPENNI2**                      ☑(check)  
    * **WITH_PCAP**                         ☐(uncheck)  
    * **WITH_PNG**                          ☐(uncheck)  
    * **WITH_QHULL**                        ☑(check)  
    * **WITH_QT**                           ☐(uncheck)  
    * **WITH_RSSDK**                        ☐(uncheck)  
    * **WITH_VTK**                          ☑(check)  

4.Check the settings.  
    * Boost version: 1.72.0  
      Found the following Boost libraries:  
        system  
        filesystem  
        thread  
        date_time  
        iostreams  
        chrono  
        atomic  
        regex  
    * Eigen found (include: C:/Program Files/Eigen/include/eigen3, version: 3.3.7)  
    * FLANN found (include: C:/Program Files/flann/include, lib: optimized;C:/Program Files/flann/lib/flann\_cpp\_s.lib;debug;C:/Program Files/flann/lib/flann\_cpp\_s-gd.lib)  
    * QHULL found (include: C:/Program Files/qhull/include, lib: optimized;C:/Program Files/qhull/lib/qhullstatic.lib;debug;C:/Program Files/qhull/lib/qhullstatic_d.lib)  
    * VTK\_MAJOR\_VERSION 8, rendering backend: OpenGL  
VTK found (include: C:/Program Files/VTK/include/vtk-8.2, libs: vtkChartsCore;vtkCommonColor;vtkCommonCore;vtksys;vtkCommonDataModel;vtkCommonMath;vtkCommonMisc;vtkCommonSystem;vtkCommonTransforms;vtkCommonExecutionModel;vtkFiltersGeneral;vtkCommonComputationalGeometry;vtkFiltersCore;vtkInfovisCore;vtkFiltersExtraction;vtkFiltersStatistics;vtkImagingFourier;vtkImagingCore;vtkRenderingContext2D;vtkRenderingCore;vtkFiltersGeometry;vtkFiltersSources;vtkRenderingFreeType;vtkfreetype;vtkzlib;vtkFiltersModeling;vtkImagingSources;vtkInteractionStyle;vtkInteractionWidgets;vtkFiltersHybrid;vtkImagingColor;vtkImagingGeneral;vtkImagingHybrid;vtkIOImage;vtkDICOMParser;vtkmetaio;vtkjpeg;vtkpng;vtktiff;vtkRenderingAnnotation;vtkRenderingVolume;vtkIOXML;vtkIOCore;vtkdoubleconversion;vtklz4;vtklzma;vtkIOXMLParser;vtkexpat;vtkIOGeometry;vtkIOLegacy;vtkIOPLY;vtkRenderingLOD;vtkViewsContext2D;vtkViewsCore;vtkRenderingContextOpenGL2;vtkRenderingOpenGL2;vtkglew  
    * OpenNI 2 found (include: C:/Program Files/OpenNI2/Include, lib: C:/Program Files/OpenNI2/Lib/OpenNI2.lib, redist: C:\Program Files\OpenNI2\Redist\)  

5. [Generate]Press to output the solution file。  

Build  
-----
1.Start Visual Studio with administrator privileges and PCL solution file(C:\PCL-1.10.0\build\PCL.sln) Open  
   (INSTALL fails unless Visual Studio is started with administrator privileges)  

2. Build PCL. (ALL_BUILD)
     1. Set the solution configuration (Debug, Release).
     2. Select the ALL_BUILD project from Solution Explorer.
     3. Press Build> Build Solution to build the PCL.

3. Install PCL. (INSTALL)
     1. Select the INSTALL project from Solution Explorer.
     2. Press Build> Project Only> Build INSTALL Only to install PCL.
        The necessary files are copied to the output destination specified by ** CMAKE_INSTALL_PREFIX **. 


Environment Variable  
--------------------
1. Create the environment variable ** PCL_ROOT ** and set the PCL path (C:\Program Files\PCL).

2. Add the path of PCL and 3rd Party to the environment variable ** Path **.  
    * ;%PCL_ROOT%\bin  
    * ;%PCL_ROOT%\3rdPrty\VTK\bin  
    * ;%OPENNI2_REDIST64%  

