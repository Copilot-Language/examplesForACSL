/* Driver for SBV program generated from Copilot. */
/* Edit as you see fit */

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "internal.h"
#include "copilot.h"

/* Observers */


/* Variables */

/*ACSL following*/
/*@
*/

/*@
 assigns \nothing;
*/
void sampleExts(void) {
}

/*@
 assigns \nothing; 
*/
void fireTriggers(void) {
  if (trigger_guard_f())
    f(trigger_f_arg_0());
}

/*@
 assigns \nothing;
 */
void updateObservers(void) {
}

/*@
 assigns \nothing;
 */
void updateStates(void) {
}

/*@
 */
void updateBuffers(void) {
}

/*@
 */
void updatePtrs(void) {
}

void step(void) {
  sampleExts();
  fireTriggers();
  updateObservers();
  updateStates();
  updateBuffers();
  updatePtrs();
}
