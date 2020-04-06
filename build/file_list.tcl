#add constraints
add_files -fileset constrs_1 -norecurse ./constraints/pinout.xdc

#add source
add_files ../source/qwi01_gpioled.sv

#global define
#set_property is_global_include true [get_files define.vh]
