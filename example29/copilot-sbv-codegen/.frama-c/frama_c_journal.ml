(* Frama-C journal generated at 13:08 the 01/07/2015 *)

exception Unreachable
exception Exception of string

(* Run the user commands *)
let run () =
  Dynamic.Parameter.Bool.set "-wp" true;
  Dynamic.Parameter.String.set "-wp-out" ".";
  Dynamic.Parameter.Int.set "-wp-timeout" 6;
  Dynamic.Parameter.String.set "-wp-prover" "Z3";
  Dynamic.Parameter.Bool.set "-wp-split" true;
  Dynamic.Parameter.String.set "-main" "testing";
  Dynamic.Parameter.String.set ""
    "copilot.h,internal.h,driver.c,ext_sqrt_0_arg0.c,ext_sqrt_1_arg0.c,ext_sqrt_2_arg0.c,trigger_guard_alert_horizontal_criterion_conflict_resolution_violation.c,trigger_guard_alert_horizontal_criterion_loss_of_separation_violation.c";
  File.init_from_cmdline ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Dynamic.Parameter.Bool.clear "-wp" ();
  Dynamic.Parameter.String.set "-wp-prover" "why3:z3";
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Dynamic.Parameter.Bool.set "-wp-split" false;
  Dynamic.Parameter.Bool.set "-wp-split" true;
  Dynamic.Parameter.Bool.set "-wp-split" false;
  Dynamic.Parameter.Int.set "-wp-par" 3;
  Dynamic.Parameter.Int.set "-wp-par" 2;
  Dynamic.Parameter.Int.set "-wp-par" 3;
  Dynamic.Parameter.Int.set "-wp-par" 4;
  Dynamic.Parameter.Int.set "-wp-par" 5;
  Dynamic.Parameter.Int.set "-wp-par" 6;
  Dynamic.Parameter.Bool.set "-wp-proof-trace" true;
  Dynamic.Parameter.Int.set "-wp-timeout" 7;
  Dynamic.Parameter.Int.set "-wp-timeout" 8;
  Dynamic.Parameter.Int.set "-wp-timeout" 9;
  Dynamic.Parameter.Int.set "-wp-timeout" 10;
  Dynamic.Parameter.Int.set "-wp-timeout" 11;
  Dynamic.Parameter.Int.set "-wp-timeout" 12;
  Dynamic.Parameter.Int.set "-wp-timeout" 13;
  Dynamic.Parameter.Int.set "-wp-timeout" 14;
  Dynamic.Parameter.Int.set "-wp-timeout" 15;
  Dynamic.Parameter.Int.set "-wp-timeout" 16;
  Dynamic.Parameter.Int.set "-wp-timeout" 17;
  Dynamic.Parameter.Int.set "-wp-timeout" 18;
  Dynamic.Parameter.Int.set "-wp-timeout" 19;
  Dynamic.Parameter.Int.set "-wp-timeout" 20;
  Dynamic.Parameter.Int.set "-wp-timeout" 21;
  Dynamic.Parameter.Int.set "-wp-timeout" 22;
  Dynamic.Parameter.Int.set "-wp-timeout" 23;
  Dynamic.Parameter.Int.set "-wp-timeout" 24;
  Dynamic.Parameter.Int.set "-wp-timeout" 25;
  Dynamic.Parameter.Int.set "-wp-timeout" 26;
  Dynamic.Parameter.Int.set "-wp-timeout" 27;
  Dynamic.Parameter.Int.set "-wp-timeout" 28;
  Dynamic.Parameter.Int.set "-wp-timeout" 29;
  Dynamic.Parameter.Int.set "-wp-timeout" 30;
  Dynamic.Parameter.Int.set "-wp-timeout" 31;
  Dynamic.Parameter.Int.set "-wp-timeout" 32;
  Dynamic.Parameter.Int.set "-wp-timeout" 33;
  Dynamic.Parameter.Int.set "-wp-timeout" 34;
  Dynamic.Parameter.Int.set "-wp-timeout" 35;
  Dynamic.Parameter.Int.set "-wp-timeout" 36;
  Dynamic.Parameter.Int.set "-wp-timeout" 37;
  Dynamic.Parameter.Int.set "-wp-timeout" 38;
  Dynamic.Parameter.Int.set "-wp-timeout" 39;
  Dynamic.Parameter.Int.set "-wp-timeout" 40;
  Dynamic.Parameter.Int.set "-wp-timeout" 41;
  Dynamic.Parameter.Int.set "-wp-timeout" 42;
  Dynamic.Parameter.Int.set "-wp-timeout" 43;
  Dynamic.Parameter.Int.set "-wp-timeout" 44;
  Dynamic.Parameter.Int.set "-wp-timeout" 45;
  Dynamic.Parameter.Int.set "-wp-timeout" 46;
  Dynamic.Parameter.Int.set "-wp-timeout" 47;
  Dynamic.Parameter.Int.set "-wp-timeout" 48;
  Dynamic.Parameter.Int.set "-wp-timeout" 49;
  Dynamic.Parameter.Int.set "-wp-timeout" 50;
  Dynamic.Parameter.Int.set "-wp-timeout" 51;
  Dynamic.Parameter.Int.set "-wp-timeout" 52;
  Dynamic.Parameter.Int.set "-wp-timeout" 53;
  Dynamic.Parameter.Int.set "-wp-timeout" 54;
  Dynamic.Parameter.Int.set "-wp-timeout" 55;
  Dynamic.Parameter.Int.set "-wp-timeout" 56;
  Dynamic.Parameter.Int.set "-wp-timeout" 57;
  Dynamic.Parameter.Int.set "-wp-timeout" 58;
  Dynamic.Parameter.Int.set "-wp-timeout" 59;
  Dynamic.Parameter.Int.set "-wp-timeout" 60;
  Dynamic.Parameter.Int.set "-wp-timeout" 61;
  Dynamic.Parameter.Int.set "-wp-timeout" 62;
  Dynamic.Parameter.Int.set "-wp-timeout" 63;
  Dynamic.Parameter.Int.set "-wp-timeout" 64;
  Dynamic.Parameter.Int.set "-wp-timeout" 65;
  Dynamic.Parameter.Int.set "-wp-timeout" 66;
  Dynamic.Parameter.Int.set "-wp-timeout" 67;
  Dynamic.Parameter.Int.set "-wp-timeout" 68;
  Dynamic.Parameter.Int.set "-wp-timeout" 69;
  Dynamic.Parameter.Int.set "-wp-timeout" 70;
  Dynamic.Parameter.String.set "-wp-prover" "coqide";
  Dynamic.Parameter.String.set "-wp-script" "wp0.script";
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Dynamic.Parameter.Bool.set "-wp-split" true;
  Dynamic.Parameter.String.set "-wp-prover" "why3ide";
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Property_status.Valid_cycles";
                    State.get "Property_status.Hypotheses";
                    State.get "Consolidation graph";
                    State.get "Consolidated_status" ])
    ~project:(Project.from_unique_name "default")
    ();
  Dynamic.Parameter.String.set "-wp-prover" "none";
  Dynamic.Parameter.Int.set "-wp-timeout" 69;
  Dynamic.Parameter.Int.set "-wp-timeout" 68;
  Dynamic.Parameter.Int.set "-wp-timeout" 67;
  Dynamic.Parameter.Int.set "-wp-timeout" 66;
  Dynamic.Parameter.Int.set "-wp-timeout" 65;
  Dynamic.Parameter.Int.set "-wp-timeout" 64;
  Dynamic.Parameter.Int.set "-wp-timeout" 63;
  Dynamic.Parameter.Int.set "-wp-timeout" 62;
  Dynamic.Parameter.Int.set "-wp-timeout" 61;
  Dynamic.Parameter.Int.set "-wp-timeout" 60;
  Dynamic.Parameter.Int.set "-wp-timeout" 59;
  Dynamic.Parameter.Int.set "-wp-timeout" 58;
  Dynamic.Parameter.Int.set "-wp-timeout" 57;
  Dynamic.Parameter.Int.set "-wp-timeout" 56;
  Dynamic.Parameter.Int.set "-wp-timeout" 55;
  Dynamic.Parameter.Int.set "-wp-timeout" 54;
  Dynamic.Parameter.Int.set "-wp-timeout" 53;
  Dynamic.Parameter.Int.set "-wp-timeout" 52;
  Dynamic.Parameter.Int.set "-wp-timeout" 51;
  Dynamic.Parameter.Int.set "-wp-timeout" 50;
  Dynamic.Parameter.Int.set "-wp-timeout" 49;
  Dynamic.Parameter.Int.set "-wp-timeout" 48;
  Dynamic.Parameter.Int.set "-wp-timeout" 47;
  Dynamic.Parameter.Int.set "-wp-timeout" 46;
  Dynamic.Parameter.Int.set "-wp-timeout" 45;
  Dynamic.Parameter.Int.set "-wp-timeout" 44;
  Dynamic.Parameter.Int.set "-wp-timeout" 43;
  Dynamic.Parameter.Int.set "-wp-timeout" 42;
  Dynamic.Parameter.Int.set "-wp-timeout" 41;
  Dynamic.Parameter.Int.set "-wp-timeout" 40;
  Dynamic.Parameter.Int.set "-wp-timeout" 39;
  Dynamic.Parameter.Int.set "-wp-timeout" 38;
  Dynamic.Parameter.Int.set "-wp-timeout" 37;
  Dynamic.Parameter.Int.set "-wp-timeout" 36;
  Dynamic.Parameter.Int.set "-wp-timeout" 35;
  Dynamic.Parameter.Int.set "-wp-timeout" 34;
  Dynamic.Parameter.Int.set "-wp-timeout" 33;
  Dynamic.Parameter.Int.set "-wp-timeout" 32;
  Dynamic.Parameter.Int.set "-wp-timeout" 31;
  Dynamic.Parameter.Int.set "-wp-timeout" 30;
  Dynamic.Parameter.Int.set "-wp-timeout" 29;
  Dynamic.Parameter.Int.set "-wp-timeout" 28;
  Dynamic.Parameter.Int.set "-wp-timeout" 27;
  Dynamic.Parameter.Int.set "-wp-timeout" 26;
  Dynamic.Parameter.Int.set "-wp-timeout" 25;
  Dynamic.Parameter.Int.set "-wp-timeout" 24;
  Dynamic.Parameter.Int.set "-wp-timeout" 23;
  Dynamic.Parameter.Int.set "-wp-timeout" 22;
  Dynamic.Parameter.Int.set "-wp-timeout" 21;
  Dynamic.Parameter.Int.set "-wp-timeout" 20;
  Dynamic.Parameter.Int.set "-wp-timeout" 19;
  Dynamic.Parameter.Int.set "-wp-timeout" 18;
  Dynamic.Parameter.Int.set "-wp-timeout" 17;
  Dynamic.Parameter.Int.set "-wp-timeout" 16;
  Dynamic.Parameter.Int.set "-wp-timeout" 15;
  Dynamic.Parameter.Int.set "-wp-timeout" 14;
  Dynamic.Parameter.Int.set "-wp-timeout" 13;
  Dynamic.Parameter.Int.set "-wp-timeout" 12;
  Dynamic.Parameter.Int.set "-wp-timeout" 11;
  Dynamic.Parameter.Int.set "-wp-timeout" 10;
  Dynamic.Parameter.Int.set "-wp-timeout" 9;
  Dynamic.Parameter.Int.set "-wp-timeout" 8;
  Dynamic.Parameter.Int.set "-wp-timeout" 7;
  Dynamic.Parameter.Int.set "-wp-timeout" 6;
  Dynamic.Parameter.Int.set "-wp-timeout" 5;
  Dynamic.Parameter.Int.set "-wp-timeout" 4;
  Dynamic.Parameter.Int.set "-wp-timeout" 3;
  Dynamic.Parameter.Int.set "-wp-timeout" 2;
  Dynamic.Parameter.Int.set "-wp-timeout" 1;
  Dynamic.Parameter.Int.set "-wp-timeout" 0;
  Dynamic.Parameter.Int.set "-wp-par" 7;
  Dynamic.Parameter.Int.set "-wp-par" 8;
  Dynamic.Parameter.Int.set "-wp-par" 7;
  Dynamic.Parameter.Int.set "-wp-par" 6;
  Dynamic.Parameter.Int.set "-wp-par" 5;
  Dynamic.Parameter.Int.set "-wp-par" 4;
  Dynamic.Parameter.Int.set "-wp-par" 3;
  Dynamic.Parameter.Int.set "-wp-par" 2;
  Dynamic.Parameter.Int.set "-wp-par" 1;
  Dynamic.Parameter.Int.set "-wp-timeout" 1;
  Dynamic.Parameter.Int.set "-wp-timeout" 2;
  Dynamic.Parameter.String.set "-wp-model" "typed_cast_ref_int_float";
  Dynamic.Parameter.String.set "-wp-model" "typed_int";
  ()

(* Main *)
let main () =
  Journal.keep_file "./.frama-c/frama_c_journal.ml";
  try run ()
  with
  | Unreachable -> Kernel.fatal "Journal reaches an assumed dead code" 
  | Exception s -> Kernel.log "Journal re-raised the exception %S" s
  | exn ->
    Kernel.fatal
      "Journal raised an unexpected exception: %s"
      (Printexc.to_string exn)

(* Registering *)
let main : unit -> unit =
  Dynamic.register
    ~plugin:"Frama_c_journal.ml"
    "main"
    (Datatype.func Datatype.unit Datatype.unit)
    ~journalize:false
    main

(* Hooking *)
let () = Cmdline.run_after_loading_stage main; Cmdline.is_going_to_load ()
