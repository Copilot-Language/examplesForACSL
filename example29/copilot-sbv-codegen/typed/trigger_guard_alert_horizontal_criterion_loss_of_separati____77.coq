(* ---------------------------------------------------------- *)
(* --- Post-condition (file trigger_guard_alert_horizontal_criterion_loss_of_separation_violation.c, line 12) in 'trigger_guard_alert_horizontal_criterion_loss_of_separation_violation' --- *)
(* ---------------------------------------------------------- *)
Require Import ZArith.
Require Import Reals.
Require Import BuiltIn.
Require Import bool.Bool.
Require Import int.Int.
Require Import int.Abs.
Require Import int.ComputerDivision.
Require Import real.Real.
Require Import real.RealInfix.
Require Import real.FromInt.
Require Import map.Map.
Require Import Qedlib.
Require Import Qed.
Require Import Cint.
Require Import BuiltIn.
Require Import bool.Bool.
Require Import int.Int.
Require Import int.Abs.
Require Import int.ComputerDivision.
Require Import real.Real.
Require Import real.RealInfix.
Require Import real.FromInt.
Require Import map.Map.
Require Import Qedlib.
Require Import Qed.
Require Import real.Square.
Require Import Cfloat.

Goal
  forall (i : Z),
  forall (r_12 r_11 r_10 r_9 r_8 r_7 r_6 r_5 r_4 r_3 r_2 r_1 r : R),
  let r_13 := ((Rdiv r_2 r_3))%R in
  let r_14 := (-r_6)%R in
  let r_15 := (r_4%R - r_6%R)%R in
  let r_16 := (-r_8)%R in
  let r_17 := (r_5%R - r_8%R)%R in
  let r_18 := (r_7%R - r_6%R)%R in
  let r_19 := (r_9%R - r_8%R)%R in
  let r_20 := (r_11%R - r_10%R)%R in
  let r_21 := (r * r_13)%R in
  let r_22 := (r_1 * r_17)%R in
  let r_23 := (r_1 * r_19)%R in
  let r_24 := (r_15 * r_20)%R in
  let r_25 := (r_18 * r_20)%R in
  let r_26 := (r_22 + r_24)%R in
  let r_27 := (r_23 + r_25)%R in
  ((is_sint32 i%Z)) ->
  ((is_float64 r%R)) ->
  ((is_float64 r_1%R)) ->
  ((is_float64 r_2%R)) ->
  ((is_float64 r_3%R)) ->
  ((is_float64 r_4%R)) ->
  ((is_float64 r_5%R)) ->
  ((is_float64 r_6%R)) ->
  ((is_float64 r_7%R)) ->
  ((is_float64 r_8%R)) ->
  ((is_float64 r_9%R)) ->
  ((is_float64 r_10%R)) ->
  ((is_float64 r_11%R)) ->
  ((is_float64 r_13)) ->
  ((is_float64 (r%R + r_2%R)%R)) ->
  ((is_float64 (r_1%R + r_12%R)%R)) ->
  ((is_float64 r_15)) ->
  ((is_float64 r_17)) ->
  ((is_float64 r_18)) ->
  ((is_float64 r_19)) ->
  ((is_float64 r_20)) ->
  ((is_float64 r_21)) ->
  ((is_float64 r_22)) ->
  ((is_float64 r_23)) ->
  ((is_float64 r_24)) ->
  ((is_float64 r_25)) ->
  ((is_float64 r_26)) ->
  ((is_float64 r_27)) ->
  (itep ((0 = (if ((Rle_bool r_26 r_27)) then 1 else 0))%Z)%Z ((0 = i)%Z)%Z
   (itep ((0 = (if ((Rlt_bool r_21 r_27)) then 1 else 0))%Z)%Z ((0 = i)%Z)%Z
    ((1 = i)%Z)%Z)%Z)%Z ->
  (((r_21 < r_27)%R) /\
   (((0 <> (if ((Zeq_bool 0 i))%Z then 0 else 1))%Z)%Z <->
    ((r_26 <= r_27)%R))).

