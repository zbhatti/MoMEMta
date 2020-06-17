set(SOURCES
    "src/HelAmps_sm.cc"
    "src/Parameters_sm.cc"
    "SubProcesses/P1_Sigma_sm_gg_mupvmbmumvmxbx/P1_Sigma_sm_gg_mupvmbmumvmxbx.cc"
    )

add_library(me_ttbarMuMu OBJECT ${SOURCES})

target_include_directories(me_ttbarMuMu PRIVATE "include")
target_include_directories(me_ttbarMuMu PRIVATE "SubProcesses/P1_Sigma_sm_gg_mupvmbmumvmxbx/")

