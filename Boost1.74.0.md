Building Boost 1.74.0 with Visual Studio 16 2019 and CMacke
========================================

Download
--------
1. Boost 1.74.0(boost_1_74_0.zip) Download and unzip the file。(C:\boost_1_74_0)  
   <http://www.boost.org/users/history/version_1_74_0.html>  
   <https://github.com/boostorg/boost/tree/boost-1.74.0>  

2. Microsoft MPI v10.0(MSMpiSetup.exe)とMicrosoft MPI SDK v10.0(msmpisdk.msi)Download and install.  
   (Respectively C:\Program Files\Microsoft MPI and C:\Program Files (x86)\Microsoft SDKs\MPI Will be installed in)  
   <https://www.microsoft.com/en-us/download/details.aspx?id=57467>  

Build
-----
1. Start the Visual Studio developer command prompt ("Developer command prompt for VS20XX" or "VS20XX x86 / x64 Native Tools Commond Prompt") with administrator privileges and execute the following command.
   <sup>※ Install will fail unless the developer command prompt is started with administrator privileges.</sup>    
    * Win32  
      ```
      cd C:\boost_1_74_0
      bootstrap.bat
      ```

    * x64  
      ```
      cd C:\boost_1_74_0
      bootstrap.bat
      ```

3.Modify the settings of the generated project-config.jam.  
    * boost_1_74_0\project-config.jam  
      4 line (add)  
      ```
      using mpi ;
      ```

4. Execute the following command after the Visual Studio developer command prompt ("VS20XX x86 / x64 Native Tools Commond Prompt"). 
    <sup>※ The -j option specifies the number of parallel compilations. Normally, specify the number of logical processors of the CPU.</sup>   
    <sup>※ toolset specifies the version of Visual Studio. Specify "14.0" for 2015, "14.1" for 2017, and "14.2" for 2019.</sup>   
    * Win32  
      ```
      b2.exe toolset=msvc-14.2 address-model=32 --build-dir=build\x86 install --prefix="C:\Program Files (x86)\Boost" -j8
      ```
      
    * x64  
      ```
      b2.exe toolset=msvc-14.2 address-model=64 --build-dir=build\x64 install --prefix="C:\Program Files\Boost" -j8
      ```  

5. If the build is successful, the following files will be generated in \<prefix\>/lib  
    * libboost_atomic-vc142-mt-1_74.lib  
    * libboost_atomic-vc142-mt-gd-1_74.lib  
    * libboost_chrono-vc142-mt-1_74.lib  
    * libboost_chrono-vc142-mt-gd-1_74.lib  
    * libboost_container-vc142-mt-1_74.lib  
    * libboost_container-vc142-mt-gd-1_74.lib  
    * libboost_context-vc142-mt-1_74.lib  
    * libboost_context-vc142-mt-gd-1_74.lib  
    * libboost_contract-vc142-mt-x64-1_74.lib  
    * libboost_contract-vc142-mt-gd-x64-1_74.lib
    * libboost_coroutine-vc142-mt-1_74.lib  
    * libboost_coroutine-vc142-mt-gd-1_74.lib  
    * libboost_date_time-vc142-mt-1_74.lib  
    * libboost_date_time-vc142-mt-gd-1_74.lib  
    * libboost_exception-vc142-mt-1_74.lib  
    * libboost_exception-vc142-mt-gd-1_74.lib  
    * libboost_fiber-vc142-mt-1_74.lib  
    * libboost_fiber-vc142-mt-gd-1_74.lib  
    * libboost_filesystem-vc142-mt-1_74.lib  
    * libboost_filesystem-vc142-mt-gd-1_74.lib  
    * libboost_graph_parallel-vc142-mt-1_74.lib  
    * libboost_graph_parallel-vc142-mt-gd-1_74.lib  
    * libboost_graph-vc142-mt-1_74.lib  
    * libboost_graph-vc142-mt-gd-1_74.lib  
    * libboost_iostreams-vc142-mt-1_74.lib  
    * libboost_iostreams-vc142-mt-gd-1_74.lib  
    * libboost_locale-vc142-mt-1_74.lib  
    * libboost_locale-vc142-mt-gd-1_74.lib  
    * libboost_log-vc142-mt-1_74.lib  
    * libboost_log-vc142-mt-gd-1_74.lib  
    * libboost_log_setup-vc142-mt-1_74.lib  
    * libboost_log_setup-vc142-mt-gd-1_74.lib  
    * libboost_math_c99f-vc142-mt-1_74.lib  
    * libboost_math_c99f-vc142-mt-gd-1_74.lib  
    * libboost_math_c99l-vc142-mt-1_74.lib  
    * libboost_math_c99l-vc142-mt-gd-1_74.lib  
    * libboost_math_c99-vc142-mt-1_74.lib  
    * libboost_math_c99-vc142-mt-gd-1_74.lib  
    * libboost_math_tr1f-vc142-mt-1_74.lib  
    * libboost_math_tr1f-vc142-mt-gd-1_74.lib  
    * libboost_math_tr1l-vc142-mt-1_74.lib  
    * libboost_math_tr1l-vc142-mt-gd-1_74.lib  
    * libboost_math_tr1-vc142-mt-1_74.lib  
    * libboost_math_tr1-vc142-mt-gd-1_74.lib  
    * libboost_mpi-vc142-mt-1_74.lib  
    * libboost_mpi-vc142-mt-gd-1_74.lib  
    * libboost_nowide-vc142-mt-x64-1_74.lib
    * libboost_nowide-vc142-mt-gd-x64-1_74.lib
    * libboost_prg_exec_monitor-vc142-mt-1_74.lib  
    * libboost_prg_exec_monitor-vc142-mt-gd-1_74.lib  
    * libboost_program_options-vc142-mt-1_74.lib  
    * libboost_program_options-vc142-mt-gd-1_74.lib  
    * libboost_random-vc142-mt-1_74.lib  
    * libboost_random-vc142-mt-gd-1_74.lib  
    * libboost_regex-vc142-mt-1_74.lib  
    * libboost_regex-vc142-mt-gd-1_74.lib  
    * libboost_serialization-vc142-mt-1_74.lib  
    * libboost_serialization-vc142-mt-gd-1_74.lib  
    * libboost_stacktrace_noop-vc142-mt-1_74.lib  
    * libboost_stacktrace_noop-vc142-mt-gd-1_74.lib  
    * libboost_stacktrace_windbg_cached-vc142-mt-1_74.lib  
    * libboost_stacktrace_windbg_cached-vc142-mt-gd-1_74.lib  
    * libboost_stacktrace_windbg-vc142-mt-1_74.lib  
    * libboost_stacktrace_windbg-vc142-mt-gd-1_74.lib  
    * libboost_system-vc142-mt-1_74.lib  
    * libboost_system-vc142-mt-gd-1_74.lib  
    * libboost_test_exec_monitor-vc142-mt-1_74.lib  
    * libboost_test_exec_monitor-vc142-mt-gd-1_74.lib  
    * libboost_thread-vc142-mt-1_74.lib  
    * libboost_thread-vc142-mt-gd-1_74.lib  
    * libboost_timer-vc142-mt-1_74.lib  
    * libboost_timer-vc142-mt-gd-1_74.lib  
    * libboost_type_erasure-vc142-mt-1_74.lib  
    * libboost_type_erasure-vc142-mt-gd-1_74.lib  
    * libboost_unit_test_framework-vc142-mt-1_74.lib  
    * libboost_unit_test_framework-vc142-mt-gd-1_74.lib  
    * libboost_wave-vc142-mt-1_74.lib  
    * libboost_wave-vc142-mt-gd-1_74.lib  
    * libboost_wserialization-vc142-mt-1_74.lib  
    * libboost_wserialization-vc142-mt-gd-1_74.lib  


Environment Variable
--------------------
1. Create an environment variable ** BOOST_ROOT ** and set the Boost path (C:\Program Files\Boost).
