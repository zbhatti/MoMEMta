set(SOURCES
    "src/HelAmps_sm.cc"
    "src/Parameters_sm.cc"
    "SubProcesses/P1_Sigma_sm_gg_bepvebxmumvmx/P1_Sigma_sm_gg_bepvebxmumvmx.cc"
    )

add_library(me_ttbarElectronME OBJECT ${SOURCES})

target_include_directories(me_ttbarElectronME PRIVATE "include")
target_include_directories(me_ttbarElectronME PRIVATE "SubProcesses/P1_Sigma_sm_gg_bepvebxmumvmx/")

