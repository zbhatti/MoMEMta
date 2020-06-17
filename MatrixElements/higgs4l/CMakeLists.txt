set(SOURCES
    "src/HelAmps_sm__hgg_plugin.cc"
    "src/Parameters_sm__hgg_plugin.cc"
    "SubProcesses/P1_Sigma_sm__hgg_plugin_gg_epemmupmum/P1_Sigma_sm__hgg_plugin_gg_epemmupmum.cc"
    )

add_library(me_higgs4l OBJECT ${SOURCES})

target_include_directories(me_higgs4l PRIVATE "include")
target_include_directories(me_higgs4l PRIVATE "SubProcesses/P1_Sigma_sm__hgg_plugin_gg_epemmupmum/")

