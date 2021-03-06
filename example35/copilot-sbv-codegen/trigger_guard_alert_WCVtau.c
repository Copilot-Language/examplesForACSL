/* File: "trigger_guard_alert_WCVtau.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="label: ?horizontalWCV",color=plum, style=filled]
2 -> 3
4 [label="op2: ||",color=green4, style=filled]
3 -> 4
5 [label="op2: <=",color=green4, style=filled]
4 -> 5
6 [label="label: ?norm2dim",color=plum, style=filled]
5 -> 6
7 [label="ext_sqrt_8",color=cyan4, style=filled]
6 -> 7
25 [label="const: 1852.0",color=red1, style=filled]
5 -> 25
26 [label="op2: &&",color=green4, style=filled]
4 -> 26
27 [label="op2: <=",color=green4, style=filled]
26 -> 27
28 [label="label: ?norm2dim",color=plum, style=filled]
27 -> 28
29 [label="ext_sqrt_9",color=cyan4, style=filled]
28 -> 29
267 [label="const: 1852.0",color=red1, style=filled]
27 -> 267
268 [label="op2: &&",color=green4, style=filled]
26 -> 268
269 [label="op2: <=",color=green4, style=filled]
268 -> 269
270 [label="const: 0.0",color=red1, style=filled]
269 -> 270
271 [label="label: ?tau",color=plum, style=filled]
269 -> 271
272 [label="op3: mux",color=green4, style=filled]
271 -> 272
273 [label="op2: <",color=green4, style=filled]
272 -> 273
274 [label="label: ?scalar2dim",color=plum, style=filled]
273 -> 274
275 [label="op2: +",color=green4, style=filled]
274 -> 275
276 [label="op2: *",color=green4, style=filled]
275 -> 276
277 [label="op2: -",color=green4, style=filled]
276 -> 277
278 [label="ext_ownship_position_x",color=cyan1, style=filled]
277 -> 278
279 [label="ext_intruder_position_x",color=cyan1, style=filled]
277 -> 279
280 [label="op2: -",color=green4, style=filled]
276 -> 280
281 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
280 -> 281
282 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
280 -> 282
283 [label="op2: *",color=green4, style=filled]
275 -> 283
284 [label="op2: -",color=green4, style=filled]
283 -> 284
285 [label="ext_ownship_position_y",color=cyan1, style=filled]
284 -> 285
286 [label="ext_intruder_position_y",color=cyan1, style=filled]
284 -> 286
287 [label="op2: -",color=green4, style=filled]
283 -> 287
288 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
287 -> 288
289 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
287 -> 289
290 [label="const: 0.0",color=red1, style=filled]
273 -> 290
291 [label="op2: /",color=green4, style=filled]
272 -> 291
292 [label="op2: -",color=green4, style=filled]
291 -> 292
293 [label="const: 0.0",color=red1, style=filled]
292 -> 293
294 [label="label: ?normsq2dim",color=plum, style=filled]
292 -> 294
295 [label="label: ?scalar2dim",color=plum, style=filled]
294 -> 295
296 [label="op2: +",color=green4, style=filled]
295 -> 296
297 [label="op2: *",color=green4, style=filled]
296 -> 297
298 [label="op2: -",color=green4, style=filled]
297 -> 298
299 [label="ext_ownship_position_x",color=cyan1, style=filled]
298 -> 299
300 [label="ext_intruder_position_x",color=cyan1, style=filled]
298 -> 300
301 [label="op2: -",color=green4, style=filled]
297 -> 301
302 [label="ext_ownship_position_x",color=cyan1, style=filled]
301 -> 302
303 [label="ext_intruder_position_x",color=cyan1, style=filled]
301 -> 303
304 [label="op2: *",color=green4, style=filled]
296 -> 304
305 [label="op2: -",color=green4, style=filled]
304 -> 305
306 [label="ext_ownship_position_y",color=cyan1, style=filled]
305 -> 306
307 [label="ext_intruder_position_y",color=cyan1, style=filled]
305 -> 307
308 [label="op2: -",color=green4, style=filled]
304 -> 308
309 [label="ext_ownship_position_y",color=cyan1, style=filled]
308 -> 309
310 [label="ext_intruder_position_y",color=cyan1, style=filled]
308 -> 310
311 [label="label: ?scalar2dim",color=plum, style=filled]
291 -> 311
312 [label="op2: +",color=green4, style=filled]
311 -> 312
313 [label="op2: *",color=green4, style=filled]
312 -> 313
314 [label="op2: -",color=green4, style=filled]
313 -> 314
315 [label="ext_ownship_position_x",color=cyan1, style=filled]
314 -> 315
316 [label="ext_intruder_position_x",color=cyan1, style=filled]
314 -> 316
317 [label="op2: -",color=green4, style=filled]
313 -> 317
318 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
317 -> 318
319 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
317 -> 319
320 [label="op2: *",color=green4, style=filled]
312 -> 320
321 [label="op2: -",color=green4, style=filled]
320 -> 321
322 [label="ext_ownship_position_y",color=cyan1, style=filled]
321 -> 322
323 [label="ext_intruder_position_y",color=cyan1, style=filled]
321 -> 323
324 [label="op2: -",color=green4, style=filled]
320 -> 324
325 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
324 -> 325
326 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
324 -> 326
327 [label="const: -1.0",color=red1, style=filled]
272 -> 327
328 [label="op2: <=",color=green4, style=filled]
268 -> 328
329 [label="label: ?tau",color=plum, style=filled]
328 -> 329
330 [label="op3: mux",color=green4, style=filled]
329 -> 330
331 [label="op2: <",color=green4, style=filled]
330 -> 331
332 [label="label: ?scalar2dim",color=plum, style=filled]
331 -> 332
333 [label="op2: +",color=green4, style=filled]
332 -> 333
334 [label="op2: *",color=green4, style=filled]
333 -> 334
335 [label="op2: -",color=green4, style=filled]
334 -> 335
336 [label="ext_ownship_position_x",color=cyan1, style=filled]
335 -> 336
337 [label="ext_intruder_position_x",color=cyan1, style=filled]
335 -> 337
338 [label="op2: -",color=green4, style=filled]
334 -> 338
339 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
338 -> 339
340 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
338 -> 340
341 [label="op2: *",color=green4, style=filled]
333 -> 341
342 [label="op2: -",color=green4, style=filled]
341 -> 342
343 [label="ext_ownship_position_y",color=cyan1, style=filled]
342 -> 343
344 [label="ext_intruder_position_y",color=cyan1, style=filled]
342 -> 344
345 [label="op2: -",color=green4, style=filled]
341 -> 345
346 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
345 -> 346
347 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
345 -> 347
348 [label="const: 0.0",color=red1, style=filled]
331 -> 348
349 [label="op2: /",color=green4, style=filled]
330 -> 349
350 [label="op2: -",color=green4, style=filled]
349 -> 350
351 [label="const: 0.0",color=red1, style=filled]
350 -> 351
352 [label="label: ?normsq2dim",color=plum, style=filled]
350 -> 352
353 [label="label: ?scalar2dim",color=plum, style=filled]
352 -> 353
354 [label="op2: +",color=green4, style=filled]
353 -> 354
355 [label="op2: *",color=green4, style=filled]
354 -> 355
356 [label="op2: -",color=green4, style=filled]
355 -> 356
357 [label="ext_ownship_position_x",color=cyan1, style=filled]
356 -> 357
358 [label="ext_intruder_position_x",color=cyan1, style=filled]
356 -> 358
359 [label="op2: -",color=green4, style=filled]
355 -> 359
360 [label="ext_ownship_position_x",color=cyan1, style=filled]
359 -> 360
361 [label="ext_intruder_position_x",color=cyan1, style=filled]
359 -> 361
362 [label="op2: *",color=green4, style=filled]
354 -> 362
363 [label="op2: -",color=green4, style=filled]
362 -> 363
364 [label="ext_ownship_position_y",color=cyan1, style=filled]
363 -> 364
365 [label="ext_intruder_position_y",color=cyan1, style=filled]
363 -> 365
366 [label="op2: -",color=green4, style=filled]
362 -> 366
367 [label="ext_ownship_position_y",color=cyan1, style=filled]
366 -> 367
368 [label="ext_intruder_position_y",color=cyan1, style=filled]
366 -> 368
369 [label="label: ?scalar2dim",color=plum, style=filled]
349 -> 369
370 [label="op2: +",color=green4, style=filled]
369 -> 370
371 [label="op2: *",color=green4, style=filled]
370 -> 371
372 [label="op2: -",color=green4, style=filled]
371 -> 372
373 [label="ext_ownship_position_x",color=cyan1, style=filled]
372 -> 373
374 [label="ext_intruder_position_x",color=cyan1, style=filled]
372 -> 374
375 [label="op2: -",color=green4, style=filled]
371 -> 375
376 [label="ext_ownship_velocity_x",color=cyan1, style=filled]
375 -> 376
377 [label="ext_intruder_velocity_x",color=cyan1, style=filled]
375 -> 377
378 [label="op2: *",color=green4, style=filled]
370 -> 378
379 [label="op2: -",color=green4, style=filled]
378 -> 379
380 [label="ext_ownship_position_y",color=cyan1, style=filled]
379 -> 380
381 [label="ext_intruder_position_y",color=cyan1, style=filled]
379 -> 381
382 [label="op2: -",color=green4, style=filled]
378 -> 382
383 [label="ext_ownship_velocity_y",color=cyan1, style=filled]
382 -> 383
384 [label="ext_intruder_velocity_y",color=cyan1, style=filled]
382 -> 384
385 [label="const: -1.0",color=red1, style=filled]
330 -> 385
386 [label="const: 30.0",color=red1, style=filled]
328 -> 386
387 [label="label: ?verticalWCV",color=plum, style=filled]
2 -> 387
388 [label="op2: ||",color=green4, style=filled]
387 -> 388
389 [label="op2: <=",color=green4, style=filled]
388 -> 389
390 [label="op1: abs",color=green4, style=filled]
389 -> 390
391 [label="op2: -",color=green4, style=filled]
390 -> 391
392 [label="ext_ownship_position_z",color=cyan1, style=filled]
391 -> 392
393 [label="ext_intruder_position_z",color=cyan1, style=filled]
391 -> 393
394 [label="const: 144.78",color=red1, style=filled]
389 -> 394
395 [label="op2: &&",color=green4, style=filled]
388 -> 395
396 [label="op2: <=",color=green4, style=filled]
395 -> 396
397 [label="const: 0.0",color=red1, style=filled]
396 -> 397
398 [label="label: ?tcoa",color=plum, style=filled]
396 -> 398
399 [label="op3: mux",color=green4, style=filled]
398 -> 399
400 [label="op2: <",color=green4, style=filled]
399 -> 400
401 [label="op2: *",color=green4, style=filled]
400 -> 401
402 [label="op2: -",color=green4, style=filled]
401 -> 402
403 [label="ext_ownship_position_z",color=cyan1, style=filled]
402 -> 403
404 [label="ext_intruder_position_z",color=cyan1, style=filled]
402 -> 404
405 [label="op2: -",color=green4, style=filled]
401 -> 405
406 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
405 -> 406
407 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
405 -> 407
408 [label="const: 0.0",color=red1, style=filled]
400 -> 408
409 [label="op2: /",color=green4, style=filled]
399 -> 409
410 [label="op2: -",color=green4, style=filled]
409 -> 410
411 [label="const: 0.0",color=red1, style=filled]
410 -> 411
412 [label="op2: -",color=green4, style=filled]
410 -> 412
413 [label="ext_ownship_position_z",color=cyan1, style=filled]
412 -> 413
414 [label="ext_intruder_position_z",color=cyan1, style=filled]
412 -> 414
415 [label="op2: -",color=green4, style=filled]
409 -> 415
416 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
415 -> 416
417 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
415 -> 417
418 [label="const: -1.0",color=red1, style=filled]
399 -> 418
419 [label="op2: <=",color=green4, style=filled]
395 -> 419
420 [label="label: ?tcoa",color=plum, style=filled]
419 -> 420
421 [label="op3: mux",color=green4, style=filled]
420 -> 421
422 [label="op2: <",color=green4, style=filled]
421 -> 422
423 [label="op2: *",color=green4, style=filled]
422 -> 423
424 [label="op2: -",color=green4, style=filled]
423 -> 424
425 [label="ext_ownship_position_z",color=cyan1, style=filled]
424 -> 425
426 [label="ext_intruder_position_z",color=cyan1, style=filled]
424 -> 426
427 [label="op2: -",color=green4, style=filled]
423 -> 427
428 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
427 -> 428
429 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
427 -> 429
430 [label="const: 0.0",color=red1, style=filled]
422 -> 430
431 [label="op2: /",color=green4, style=filled]
421 -> 431
432 [label="op2: -",color=green4, style=filled]
431 -> 432
433 [label="const: 0.0",color=red1, style=filled]
432 -> 433
434 [label="op2: -",color=green4, style=filled]
432 -> 434
435 [label="ext_ownship_position_z",color=cyan1, style=filled]
434 -> 435
436 [label="ext_intruder_position_z",color=cyan1, style=filled]
434 -> 436
437 [label="op2: -",color=green4, style=filled]
431 -> 437
438 [label="ext_ownship_velocity_z",color=cyan1, style=filled]
437 -> 438
439 [label="ext_intruder_velocity_z",color=cyan1, style=filled]
437 -> 439
440 [label="const: -1.0",color=red1, style=filled]
421 -> 440
441 [label="const: 30.0",color=red1, style=filled]
419 -> 441


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_sqrt_8)) <= (1852.0))) || ((((((ext_sqrt_9)) <= (1852.0))) && (((((0.0) <= ((( ((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))) < (0.0))) ? (((((0.0) - (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_position_x) - (ext_intruder_position_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))) / ((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))))) : (-1.0)))))) && ((((( ((((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))) < (0.0))) ? (((((0.0) - (((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_position_x) - (ext_intruder_position_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_position_y) - (ext_intruder_position_y))))))))))) / ((((((((ext_ownship_position_x) - (ext_intruder_position_x))) * (((ext_ownship_velocity_x) - (ext_intruder_velocity_x))))) + (((((ext_ownship_position_y) - (ext_intruder_position_y))) * (((ext_ownship_velocity_y) - (ext_intruder_velocity_y)))))))))) : (-1.0)))) <= (30.0)))))))))) && ((((((((((ext_ownship_position_z) - (ext_intruder_position_z))) > 0)? (((ext_ownship_position_z) - (ext_intruder_position_z))) : -(((ext_ownship_position_z) - (ext_intruder_position_z)))) <= (144.78))) || (((((0.0) <= ((( (((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) < (0.0))) ? (((((0.0) - (((ext_ownship_position_z) - (ext_intruder_position_z))))) / (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) : (-1.0)))))) && ((((( (((((((ext_ownship_position_z) - (ext_intruder_position_z))) * (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) < (0.0))) ? (((((0.0) - (((ext_ownship_position_z) - (ext_intruder_position_z))))) / (((ext_ownship_velocity_z) - (ext_intruder_velocity_z))))) : (-1.0)))) <= (30.0)))))))))));
*/
SBool trigger_guard_alert_WCVtau(const SDouble ext_sqrt_8,
                                 const SDouble ext_ownship_position_x,
                                 const SDouble ext_intruder_position_x,
                                 const SDouble ext_ownship_position_y,
                                 const SDouble ext_intruder_position_y, const SDouble ext_sqrt_9,
                                 const SDouble ext_ownship_velocity_x,
                                 const SDouble ext_intruder_velocity_x,
                                 const SDouble ext_ownship_velocity_y,
                                 const SDouble ext_intruder_velocity_y,
                                 const SDouble ext_ownship_position_z,
                                 const SDouble ext_intruder_position_z,
                                 const SDouble ext_ownship_velocity_z,
                                 const SDouble ext_intruder_velocity_z)
{
  const SDouble s0 = ext_sqrt_8;
  const SDouble s1 = ext_ownship_position_x;
  const SDouble s2 = ext_intruder_position_x;
  const SDouble s3 = ext_ownship_position_y;
  const SDouble s4 = ext_intruder_position_y;
  const SDouble s5 = ext_sqrt_9;
  const SDouble s6 = ext_ownship_velocity_x;
  const SDouble s7 = ext_intruder_velocity_x;
  const SDouble s8 = ext_ownship_velocity_y;
  const SDouble s9 = ext_intruder_velocity_y;
  const SDouble s10 = ext_ownship_position_z;
  const SDouble s11 = ext_intruder_position_z;
  const SDouble s12 = ext_ownship_velocity_z;
  const SDouble s13 = ext_intruder_velocity_z;
  const SDouble s14 = s0 /* ?norm2dim */;
  const SBool   s16 = s14 <= 1852.0;
  const SDouble s17 = s5 /* ?norm2dim */;
  const SBool   s18 = s17 <= 1852.0;
  const SDouble s20 = s1 - s2;
  const SDouble s21 = s6 - s7;
  const SDouble s22 = s20 * s21;
  const SDouble s23 = s3 - s4;
  const SDouble s24 = s8 - s9;
  const SDouble s25 = s23 * s24;
  const SDouble s26 = s22 + s25;
  const SDouble s27 = s26 /* ?scalar2dim */;
  const SBool   s28 = s27 < 0.0;
  const SDouble s29 = s20 * s20;
  const SDouble s30 = s23 * s23;
  const SDouble s31 = s29 + s30;
  const SDouble s32 = s31 /* ?scalar2dim */;
  const SDouble s33 = s32 /* ?normsq2dim */;
  const SDouble s34 = 0.0 - s33;
  const SDouble s35 = s34 / s27;
  const SDouble s37 = s28 ? s35 : -1.0;
  const SDouble s38 = s37 /* ?tau */;
  const SBool   s39 = 0.0 <= s38;
  const SBool   s41 = s38 <= 30.0;
  const SBool   s42 = s39 && s41;
  const SBool   s43 = s18 && s42;
  const SBool   s44 = s16 || s43;
  const SBool   s45 = s44 /* ?horizontalWCV */;
  const SDouble s46 = s10 - s11;
  const SDouble s47 = fabs(s46);
  const SBool   s49 = s47 <= 144.78;
  const SDouble s50 = s12 - s13;
  const SDouble s51 = s46 * s50;
  const SBool   s52 = s51 < 0.0;
  const SDouble s53 = 0.0 - s46;
  const SDouble s54 = s53 / s50;
  const SDouble s55 = s52 ? s54 : -1.0;
  const SDouble s56 = s55 /* ?tcoa */;
  const SBool   s57 = 0.0 <= s56;
  const SBool   s58 = s56 <= 30.0;
  const SBool   s59 = s57 && s58;
  const SBool   s60 = s49 || s59;
  const SBool   s61 = s60 /* ?verticalWCV */;
  const SBool   s62 = s45 && s61;
  const SBool   s63 = s62 /* ?wellClearViolation */;

  return s63;
}
