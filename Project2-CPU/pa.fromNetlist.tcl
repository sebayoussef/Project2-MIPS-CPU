
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Project2-CPU -dir "C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/planAhead_run_1" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU/CPU.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/nesmabadr.AUC/Desktop/Project2-CPU/Project2-CPU} {ipcore_dir} }
add_files [list {ipcore_dir/Mem2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Memory.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "CPUucf.ucf" [current_fileset -constrset]
add_files [list {CPUucf.ucf}] -fileset [get_property constrset [current_run]]
link_design
