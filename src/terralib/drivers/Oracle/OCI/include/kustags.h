/* copyright (c) Oracle Corporation 1995.  All Rights Reserved. */

/*
  NAME
    kustags.h - definition of tags for statistics API
  DESCRIPTION
    Definitions of tags used for Oracle's statistics API.
  PUBLIC FUNCTIONS
    none
  PRIVATE FUNCTIONS
    none
  NOTES
    This file is a generated and should NOT BE EDITTED
*/

#ifndef ORATYPES
#include <oratypes.h>
#endif

#ifndef KUSTAGS
#define KUSTAGS

/* DISABLE check_macro_naming */
/* Lint exception approved 9/24/96 by BCCHANG and JMULLER */

/* PUBLIC TYPES AND CONSTANTS */
#define RMUST_T_ACCESS_MODE 15
#define RMUST_T_ACTIVE_FLG 16
#define RMUST_T_AIJ_COMMIT_FLG 17
#define RMUST_T_AIJ_ENABLED_FLG 18
#define RMUST_T_AIJ_STATUS 19
#define RMUST_T_ALARM_ENABLED_FLG 20
#define RMUST_T_ALLOCATION 21
#define RMUST_T_ALS_MODE_FLG 22
#define RMUST_T_ARPMS 23
#define RMUST_T_ASCII_DEADLOCK 24
#define RMUST_T_ASCII_STALL 25
#define RMUST_T_ASCII_TIMEOUT 26
#define RMUST_T_AUDIT_ENABLED_FLG 27
#define RMUST_T_AUDIT_FIRST_FLG 28
#define RMUST_T_AUDIT_FLUSH_FLG 29
#define RMUST_T_AUTO_BKUP_FLG 30
#define RMUST_T_FILID_SLOTNUM 31
#define RMUST_T_BACKUP_DATE_ADT 32
#define RMUST_T_BACKUP_DATE_FDT 33
#define RMUST_T_BACKUP_DATE_TDT 34
#define RMUST_T_BIOCNT 35
#define RMUST_T_BKUP_ACTIVE_FLG 36
#define RMUST_T_BKUP_VNO 37
#define RMUST_T_CACHE_FILENAME 38
#define RMUST_T_CALC_PNO 39
#define RMUST_T_CKPT_BLOCKS 40
#define RMUST_T_CKPT_TIME 41
#define RMUST_T_CORRUPT_FLG 42
#define RMUST_T_CPUTIM_RT 43
#define RMUST_T_CREATE_DATE_ADT 44
#define RMUST_T_CREATE_DATE_FDT 45
#define RMUST_T_CREATE_DATE_TDT 46
#define RMUST_T_CUR_ACTIVE_AIJ 47
#define RMUST_T_CUR_AIJ_FILENAME 48
#define RMUST_T_CUR_BKUP_FILENAME 49
#define RMUST_T_CUR_BKUP_VNO 50
#define RMUST_T_CUR_RCVR_VNO 51
#define RMUST_T_DATA_CMIT_FLG 52
#define RMUST_T_DBID 53
#define RMUST_T_DBR_ACTIVITY 54
#define RMUST_T_DBR_BUF_CNT 55
#define RMUST_T_LSS_LAG_FDT 56
#define RMUST_T_DB_BKUP_VNO 57
#define RMUST_T_DEADLOCK_SEQ 58
#define RMUST_T_DEADLOCK_SINCE_ADT 59
#define RMUST_T_DEADLOCK_SINCE_TT 60
#define RMUST_T_DEADLOCK_SINCE_RT 61
#define RMUST_T_DEFERRED_SNAP_FLG 62
#define RMUST_T_DEF_AIJ_FILENAME 63
#define RMUST_T_DEF_ALLOCATION 64
#define RMUST_T_DEF_BKUP_FILENAME 65
#define RMUST_T_DEF_BUF_CNT 66
#define RMUST_T_DEF_EXTENSION 67
#define RMUST_T_DIOCNT 68
#define RMUST_T_ENQCNT 69
#define RMUST_T_EXTENSION 70
#define RMUST_T_EXT_COUNT 71
#define RMUST_T_EXT_ENABLED_FLG 72
#define RMUST_T_EXT_PERCENT 73
#define RMUST_T_FAST_COMMIT_FLG 74
#define RMUST_T_FILENAME 75
#define RMUST_T_FULL_BACKUP_TSN 76
#define RMUST_T_GB_CNT 77
#define RMUST_T_GB_ENABLED_FLG 78
#define RMUST_T_HARD_DATA_LOSS_FLG 79
#define RMUST_T_IMAGENAME 80
#define RMUST_T_INCONSISTENT_FLG 81
#define RMUST_T_INC_RES_DATE_ADT 82
#define RMUST_T_INC_RES_DATE_FDT 83
#define RMUST_T_INC_RES_DATE_TDT 84
#define RMUST_T_INIT_ACTIVE_FLG 85
#define RMUST_T_IS_STALLED 86
#define RMUST_T_JOURNAL_CNT 87
#define RMUST_T_JOURNAL_NAME 88
#define RMUST_T_JOURNAL_STATUS 89
#define RMUST_T_LAST_BKUP_VNO 90
#define RMUST_T_LCKOPT_ENABLED_FLG 91
#define RMUST_T_LINKAGE_DBID 92
#define RMUST_T_LKID 93
#define RMUST_T_LOCK_TIMEOUT 94
#define RMUST_T_MAX_EXT_PAGCNT 95
#define RMUST_T_MAX_GB_PER_USER 96
#define RMUST_T_MAX_NODE_CNT 97
#define RMUST_T_MAX_PNO 98
#define RMUST_T_MAX_USER_CNT 99
#define RMUST_T_MIN_EXT_PAGCNT 100
#define RMUST_T_MIXED_FMT_FLG 101
#define RMUST_T_MODIFIED_FLG 102
#define RMUST_T_NEW_VERSION_FLG 104
#define RMUST_T_NUMBIO 105
#define RMUST_T_NUMDIO 106
#define RMUST_T_OPEN_MODE_FLG 107
#define RMUST_T_OPER_CLASS 108
#define RMUST_T_OVERWRITE_FLG 109
#define RMUST_T_OVERWRITTEN_FLG 110
#define RMUST_T_PAG_BLKCNT 111
#define RMUST_T_PGFCNT 112
#define RMUST_T_PGFLTS 113
#define RMUST_T_PID 114
#define RMUST_T_PROCNAME 115
#define RMUST_T_PSTATE 116
#define RMUST_T_RESTORED_FLG 117
#define RMUST_T_RTPMS 118
#define RMUST_T_SFDB_FLG 119
#define RMUST_T_SHUTDOWN_TIME 120
#define RMUST_T_SNAPSHOT_FLG 121
#define RMUST_T_SNAPS_ALLOWED_FLG 122
#define RMUST_T_SNAPS_ENABLED_FLG 123
#define RMUST_T_SOFT_DATA_LOSS_FLG 124
#define RMUST_T_SPAMS_ENABLED_FLG 125
#define RMUST_T_SPAMS_FLG 126
#define RMUST_T_STALL_SINCE_ADT 127
#define RMUST_T_STALL_SINCE_TT 128
#define RMUST_T_STALL_SINCE_RT 129
#define RMUST_T_STALL_THRESHOLD_RT 130
#define RMUST_T_STAREA_NAME 131
#define RMUST_T_STATS_ENABLED_FLG 132
#define RMUST_T_STID 133
#define RMUST_T_TIMEOUT_SEQ 134
#define RMUST_T_TIMEOUT_SINCE_ADT 135
#define RMUST_T_TIMEOUT_SINCE_TT 136
#define RMUST_T_TIMEOUT_SINCE_RT 137
#define RMUST_T_TSN_INTERVAL 138
#define RMUST_T_USERNAME 139
#define RMUST_T_VBN 140
#define RMUST_T_VMSIZE 141
#define RMUST_T_WSSIZE 142
#define RMUST_T_THRESHOLD 143
#define RMUST_T_BUF_BLOCK_CNT 144
#define RMUST_T_FILID_CNT 145
#define RMUST_T_STALL_INDEX 146
#define RMUST_T_AIJ_LEOF 147
#define RMUST_T_AIJ_PEOF 148
#define RMUST_T_ALS_ACTIVE 149
#define RMUST_T_CACHE_STATUS 150
#define RMUST_T_AIJ_SHUTDOWN 151
#define RMUST_T_RELATION_NAME 152
#define RMUST_T_ISA_VIEW 153
#define RMUST_T_FIELD_NAMES 154
#define RMUST_T_INDEX_NAME 155
#define RMUST_T_INDEX_UNIQUE 156
#define RMUST_T_INDEX_TYPE 157
#define RMUST_T_LSS_AIJ_VNO 158
#define RMUST_T_LSS_AIJ_VBN 159
#define RMUST_T_DELTA_HSEC 160
#define RMUST_T_PLATFORM 161
#define RMUST_T_LSS_STATE 162
#define RMUST_T_AIJ_AUTO_SYNC 163
#define RMUST_T_AIJ_DATA_SYNC 164
#define RMUST_T_AIJ_VNO 165
#define RMUST_T_AIJ_SRV_NAME 166
#define RMUST_T_STBY_RT_FILNAM 167
#define RMUST_T_AIJ_CUR_MSN 168
#define RMUST_T_AIJ_STALLED_MSN 169
#define RMUST_T_LCS_ACTIVE 170
#define RMUST_T_LRS_STATE 171
#define RMUST_T_LRS_ACTIVE 172
#define RMUST_T_LSS_ACTIVE 173
#define RMUST_T_GOVERNOR_ENABLED 174
#define RMUST_T_LSS_REF_COUNT 175
#define RMUST_T_AIJFB_INDEX 176
#define RMUST_T_PROC_INDEX 177
#define RMUST_T_DBR_INDEX 178
#define RMUST_T_SAMPLE_INTERVAL 179
#define RMUST_T_DBMSROOT 180
#define RMUST_T_MAJ_VER 181
#define RMUST_T_MIN_VER 182
#define RMUST_T_CHECKSUM 183
#define RMUST_T_VERSION_ADT 184
#define RMUST_T_VERSION_FDT 185
#define RMUST_T_VERSION_TDT 186
#define RMUST_T_LADB_FLG 187
#define RMUST_T_RUJ_CORRUPT_FLG 188
#define RMUST_T_ROOT_CORRUPT_FLG 189
#define RMUST_T_FIB_ENABLED_FLG 190
#define RMUST_T_APF_ENABLED_FLG 191
#define RMUST_T_ABW_ENABLED_FLG 192
#define RMUST_T_PLT_ENABLED_FLG 193
#define RMUST_T_OPT_ENABLED_FLG 194
#define RMUST_T_STBY_READ_ONLY_FLG 195
#define RMUST_T_DAPF_ENABLED_FLG 196
#define RMUST_T_RCVR_QUIET_POINT_FLG 197
#define RMUST_T_SSB_ENABLED_FLG 198
#define RMUST_T_DB_MODIFIED_FLG 199
#define RMUST_T_ACTIVE_VBN 200
#define RMUST_T_AIJDB_VBN 201
#define RMUST_T_AIJFB_VBN 202
#define RMUST_T_CLIENT_VBN 203
#define RMUST_T_COSI_VBN 204
#define RMUST_T_CPT_VBN 205
#define RMUST_T_FILID_VBN 206
#define RMUST_T_MEMBIT_VBN 207
#define RMUST_T_RTUPB_VBN 208
#define RMUST_T_RUJBLK_VBN 209
#define RMUST_T_SEQBLK_VBN 210
#define RMUST_T_TSNBLK_VBN 211
#define RMUST_T_AIJFB_CNT 212
#define RMUST_T_RTUPB_BLKCNT 213
#define RMUST_T_TSNBLK_CNT 214
#define RMUST_T_ALG_COUNT 215
#define RMUST_T_ALG_FACTORS 216
#define RMUST_T_AUDIT_FLAGS 217
#define RMUST_T_ALARM_NAME 218
#define RMUST_T_MIN_PAG_BLKCNT 219
#define RMUST_T_MAX_PAG_BLKCNT 220
#define RMUST_T_MAX_PIB_COUNT 221
#define RMUST_T_SEQBLK_CNT 222
#define RMUST_T_APF_DEPTH 223
#define RMUST_T_ABW_CLEAN_BUF_CNT 224
#define RMUST_T_ABW_BATCH_MAX 225
#define RMUST_T_CLIENT_BLKCNT 226
#define RMUST_T_COSI_BLKCNT 227
#define RMUST_T_RMU_CLIENT_VBN 228
#define RMUST_T_RMU_CLIENT_BLKCNT 229
#define RMUST_T_CLOSE_MODE 230
#define RMUST_T_CLOSE_INTERVAL 231
#define RMUST_T_RCACHE_VBN 232
#define RMUST_T_RCACHE_CNT 233
#define RMUST_T_DAPF_DEPTH 234
#define RMUST_T_DAPF_THRESHOLD 235
#define RMUST_T_TXN_MODE_FLAGS 236
#define RMUST_T_RCS_SWEEP_INTERVAL 237
#define RMUST_T_ACTIVE_BACKUP_TSN 238
#define RMUST_T_BOOTSTRAP_DBK 239
#define RMUST_T_HRL_FLG 241
#define RMUST_T_WRL_FLG 242
#define RMUST_T_RESTRICT_ACCESS_FLG 243
#define RMUST_T_ALTER_CNT 244
#define RMUST_T_ALTER_TAD_ADT 245
#define RMUST_T_ALTER_TAD_FDT 246
#define RMUST_T_ALTER_TAD_TDT 247
#define RMUST_T_INC_RES_TAD_ADT 248
#define RMUST_T_INC_RES_TAD_FDT 249
#define RMUST_T_INC_RES_TAD_TDT 250
#define RMUST_T_FULL_BCK_TAD_ADT 251
#define RMUST_T_FULL_BCK_TAD_FDT 252
#define RMUST_T_FULL_BCK_TAD_TDT 253
#define RMUST_T_LAST_BACKUP_TSN 254
#define RMUST_T_LAST_BACKUP_CSN 255
#define RMUST_T_LAST_FULL_BACKUP_TSN 256
#define RMUST_T_FULL_VER_TAD_ADT 257
#define RMUST_T_FULL_VER_TAD_FDT 258
#define RMUST_T_FULL_VER_TAD_TDT 259
#define RMUST_T_INC_VER_TAD_ADT 260
#define RMUST_T_INC_VER_TAD_FDT 261
#define RMUST_T_INC_VER_TAD_TDT 262
#define RMUST_T_FULL_RES_TAD_ADT 263
#define RMUST_T_FULL_RES_TAD_FDT 264
#define RMUST_T_FULL_RES_TAD_TDT 265
#define RMUST_T_ALT_BOOTSTRAP_DBK 266
#define RMUST_T_RESTORE_ROOT_TAD_ADT 267
#define RMUST_T_RESTORE_ROOT_TAD_FDT 268
#define RMUST_T_RESTORE_ROOT_TAD_TDT 269
#define RMUST_T_PAG_DBID 271
#define RMUST_T_RELATED_FLG 272
#define RMUST_T_COUPLED_FLG 274
#define RMUST_T_CSM_FLG 275
#define RMUST_T_SPREAD_FLG 276
#define RMUST_T_RESTRUCTURED_FLG 277
#define RMUST_T_WORM_DEVFULL_FLG 278
#define RMUST_T_2PPL_ENABLED_FLG 279
#define RMUST_T_WORM_AIJ_ENABLED_FLG 280
#define RMUST_T_WORM_CORRUPT_FLG 281
#define RMUST_T_RCACHE_ENABLED_FLG 282
#define RMUST_T_WORM_LEOF 285
#define RMUST_T_P0_VBN 286
#define RMUST_T_CLUMP_PAGCNT 287
#define RMUST_T_PAGES_PER_SPAM 288
#define RMUST_T_AIJ_RCVR_VNO 289
#define RMUST_T_PAG_LEN 290
#define RMUST_T_PPSP1 291
#define RMUST_T_SPAM_T1 292
#define RMUST_T_SPAM_T2 293
#define RMUST_T_SPAM_T3 294
#define RMUST_T_SPAMVEC_LEN 295
#define RMUST_T_PAG_PAD_LEN 296
#define RMUST_T_MAX_FREE_LEN 297
#define RMUST_T_MAX_NEW_SEG_LEN 298
#define RMUST_T_MAX_SEG_LEN 299
#define RMUST_T_BACKUP_STATS 300
#define RMUST_T_RCACHE_DBID 301
#define RMUST_T_SNAPS_ENABLED_TSN 302
#define RMUST_T_COMMIT_TSN 303
#define RMUST_T_BACKUP_TSN 304
#define RMUST_T_INCR_BACKUP_TSN 305
#define RMUST_T_ABS_QUIET_POINT_FLG 306
#define RMUST_T_LSS_ACTIVE_FLG 307
#define RMUST_T_LRS_ACTIVE_FLG 308
#define RMUST_T_MASTER_DB_FLG 309
#define RMUST_T_LSS_ONLINE_FLG 310
#define RMUST_T_LSS_QUIET_POINT_FLG 311
#define RMUST_T_CUR_RCVR_VBN 312
#define RMUST_T_LSS_CKPT_INTRVL 313
#define RMUST_T_LSS_WAIT_INTRVL 314
#define RMUST_T_LSS_TIMEOUT_INTRVL 315
#define RMUST_T_LSS_BUFFER_CNT 316
#define RMUST_T_LSS_ACCESS_MODE 317
#define RMUST_T_LSS_RESOLVE_2PC 318
#define RMUST_T_LSS_STARTUP_TAD_ADT 319
#define RMUST_T_LSS_STARTUP_TAD_FDT 320
#define RMUST_T_LSS_STARTUP_TAD_TDT 321
#define RMUST_T_BKUP_EDITNAM 322
#define RMUST_T_REMOTE_NODENAM 323
#define RMUST_T_SERVER_NAME 324
#define RMUST_T_BKUP_FAILED_FLG 325
#define RMUST_T_EMERGENCY_FLG 326
#define RMUST_T_ACTIVATE_TAD_ADT 327
#define RMUST_T_ACTIVATE_TAD_FDT 328
#define RMUST_T_ACTIVATE_TAD_TDT 329
#define RMUST_T_RDB_CHECKSUM 330
#define RMUST_T_MONID 332
#define RMUST_T_TID 333
#define RMUST_T_TSNBLK_INDEX 334
#define RMUST_T_TSNBLK_SLOT 335
#define RMUST_T_REMOTE_FLG 336
#define RMUST_T_ALS_FLG 337
#define RMUST_T_DBR_FLG 338
#define RMUST_T_SERVER_FLG 339
#define RMUST_T_UTILITY_FLG 340
#define RMUST_T_LCS_FLG 341
#define RMUST_T_LRS_FLG 342
#define RMUST_T_RCS_FLG 343
#define RMUST_T_LSS_FLG 344
#define RMUST_T_CKPT_VNO 345
#define RMUST_T_CKPT_VBN 346
#define RMUST_T_QUIET_VNO 347
#define RMUST_T_VLM_ENABLED_FLG 352
#define RMUST_T_REPLACE_ENABLED_FLG 353
#define RMUST_T_SLOT_LEN 354
#define RMUST_T_SLOT_COUNT 355
#define RMUST_T_MAX_WS_COUNT 356
#define RMUST_T_NAME 357
#define RMUST_T_HASHED_INDEX_FLG 358
#define RMUST_T_LAPMS_INDEX 359
#define RMUST_T_VLM_WINDOW_COUNT 360
#define RMUST_T_CKPT_SEQ 361
#define RMUST_T_DEVDIR 362
#define RMUST_T_HASH_LDBID_PRIME 363
#define RMUST_T_HASH_PNO_PRIME 364
#define RMUST_T_SWEEP_THRESH_HIGH 365
#define RMUST_T_SWEEP_THRESH_LOW 366
#define RMUST_T_SWEEP_FREE_PCT 367
#define RMUST_T_SWEEP_BATCH_COUNT 368
#define RMUST_T_MAX_RESERVE_COUNT 369
#define RMUST_T_ALLOC_BLKCNT 370
#define RMUST_T_EXTEND_BLKCNT 371
#define RMUST_T_LIMBO_FLG 373
#define RMUST_T_PREPARED_FLG 374
#define RMUST_T_XATM_FLG 375
#define RMUST_T_RESOLVE_FLG 376
#define RMUST_T_RESOLUTION_FLG 377
#define RMUST_T_RUJ_FILNAM 378
#define RMUST_T_TM_LOG_ID 381
#define RMUST_T_RM_LOG_ID 382
#define RMUST_T_RM_NAME 383
#define RMUST_T_NODE_NAME 384
#define RMUST_T_PARENT_NODE_NAME 385
#define RMUST_T_WIPMAP 388
#define RMUST_T_SIPMAP 389
#define RMUST_T_OLDEST_TSN 390
#define RMUST_T_COMMIT_CSN 392
#define RMUST_T_TSN_VEC 393
#define RMUST_T_COMMIT_TSN_VEC 394
#define RMUST_T_NEXT_SEQ 396
#define RMUST_T_GROUP_SIZE 397
#define RMUST_T_IGNORE_FLG 399
#define RMUST_T_RECOVER_FLG 400
#define RMUST_T_UPTO_AREA_FLG 401
#define RMUST_T_LAST_COMMIT_TSN 403
#define RMUST_T_PNO 404
#define RMUST_T_PDBID 405
#define RMUST_T_ABM_PNO 406
#define RMUST_T_LAREA_DBID 407
#define RMUST_T_PAREA_DBID 408
#define RMUST_T_LAREA_NAME 409
#define RMUST_T_REC_LEN 411
#define RMUST_T_LAREA_EXT_CNT 412
#define RMUST_T_MODULO_HASH_FLG 414
#define RMUST_T_DELETED_TID 415
#define RMUST_T_MOD_HASH_KEY_OFFSET 417
#define RMUST_T_BITMAP 419
#define RMUST_T_XID_FORMAT_ID 422
#define RMUST_T_XID_GTRID_LENGTH 423
#define RMUST_T_XID_BQUAL_LENGTH 424
#define RMUST_T_XID_DATA 425
#define RMUST_T_ACE_SIZE 426
#define RMUST_T_ACE_TYPE 427
#define RMUST_T_DEFAULT_FLG 428
#define RMUST_T_PROTECTED_FLG 429
#define RMUST_T_HIDDEN_FLG 430
#define RMUST_T_NOPROPAGATE_FLG 431
#define RMUST_T_READ_PRV_FLG 432
#define RMUST_T_WRITE_PRV_FLG 433
#define RMUST_T_EXECUTE_PRV_FLG 434
#define RMUST_T_DELETE_PRV_FLG 435
#define RMUST_T_CONTROL_PRV_FLG 436
#define RMUST_T_DB_VERSION 437
#define RMUST_T_NODE 438
#define RMUST_T_CURRENT_TAD_ADT 439
#define RMUST_T_CURRENT_TAD_FDT 440
#define RMUST_T_CURRENT_TAD_TDT 441
#define RMUST_T_NODE_DATABASES 442
#define RMUST_T_DATABASE 443
#define RMUST_T_ACTIVE_USERS 444
#define RMUST_T_MONITOR_LOG 445
#define RMUST_T_MONITOR_BUFFERS 446
#define RMUST_T_USER_ID 448
#define RMUST_T_USER_STATUS 449
#define RMUST_T_DEVICE_NAME 450
#define RMUST_T_DEVICE_STATUS 451
#define RMUST_T_DEVICE_ERROR_CNT 452
#define RMUST_T_LABEL 453
#define RMUST_T_FREE_BLOCKS 454
#define RMUST_T_TRANSFER_CNT 455
#define RMUST_T_MOUNT_CNT 456
#define RMUST_T_DEVICE_TYPE 457
#define RMUST_T_DEVICE_CHAR 458
#define RMUST_T_TABLE_NAME 459
#define RMUST_T_LOGICAL_AREA_ID 460
#define RMUST_T_TABLE_ID 461
#define RMUST_T_INDEX_ID 462
#define RMUST_T_LAPMS 463
#define RMUST_T_LOGICAL_AREA_COUNT 464
#define RMUST_T_ALL_LOGICAL_AREA_IDS 465
#define RMUST_T_ALL_LAPMS 466
#define RMUST_T_AIJ_MAX_IO_BLKS 468
#define RMUST_T_AIJ_MIN_IO_BLKS 469
#define RMUST_T_AIJ_STALL 470
#define RMUST_T_COMMIT_STALL 471
#define RMUST_T_DAPF_DEPTH_BUF_CNT 475
#define RMUST_T_DAPF_START_BUF_CNT 476
#define RMUST_T_LIVE_BW_MAX 477
#define RMUST_T_MAX_DBR_CNT 478
#define RMUST_T_ABS_PRIORITY 479
#define RMUST_T_ALS_PRIORITY 480
#define RMUST_T_DBR_PRIORITY 481
#define RMUST_T_LCS_PRIORITY 482
#define RMUST_T_LRS_PRIORITY 483
#define RMUST_T_RCS_PRIORITY 484
#define RMUST_T_CKPT_TRANS_INTERVAL 487
#define RMUST_T_CTJ_TSN_INTERVAL 488
#define RMUST_T_APF_ENABLED 489
#define RMUST_T_ABW_ENABLED 490
#define RMUST_T_DAPF_ENABLED 491
#define RMUST_T_ABS_QUIET_POINT 492
#define RMUST_T_RCACHE_RCRL_COUNT 493
#define RMUST_T_RCS_BATCH_COUNT 494
#define RMUST_T_RCS_CHECKPOINT 495
#define RMUST_T_HOT_NETWORK_TIMEOUT 496
#define RMUST_T_RCS_SWP_INT 497
#define RMUST_T_RCS_COLD_LOW 498
#define RMUST_T_RCS_COLD_HIGH 499
#define RMUST_T_RCS_COLD_RECORDS 500
#define RMUST_T_DBR_BUFFER_CNT 501
#define RMUST_T_SNAP_QUIET_POINT 502
#define RMUST_T_LOCK_TIMEOUT_INTERVAL 503
#define RMUST_T_HRL_ENABLED 504
#define RMUST_T_CBL_ENABLED 505
#define RMUST_T_RUJ_EXTEND_BLKCNT 506
#define RMUST_T_RCACHE_INSERT_ENABLED 507
#define RMUST_T_RCS_ABORT_SWEEP 508
#define RMUST_T_AIJ_ARB_COUNT 509
#define RMUST_T_RCACHE_LATCH_SPIN_COUNT 510
#define RMUST_T_RCWS_UNMARK_THRESHO 511
#define RMUST_T_RUJ_ALLOC_BLKCNT 512
#define RMUST_T_HOT_DATA_SYNC_MODE 513
#define RMUST_T_HOT_CHECKPOINT 514
#define RMUST_T_LCS_CONNECT_TIMEOUT 515
#define RMUST_T_LRS_GAP_TIMEOUT 516
#define RMUST_T_LRS_GOVERNOR_ENABLED 517
#define RMUST_T_AIJ_SWITCH_GBL_CKPT 518
#define RMUST_T_AIJ_CHK_CONTROL_RECS 519
#define RMUST_T_READY_AREA_SERIALLY 520
#define RMUST_T_ABS_OVRWRT_ALLOWED 521
#define RMUST_T_ABS_OVRWRT_IMMEDIATE 522
#define RMUST_T_ALS_CREATE_AIJ 523
#define RMUST_T_VNO 524
#define RMUST_T_AIJ_MAX_IO_BYTES 525
#define RMUST_T_AIJ_MIN_IO_BYTES 526
#define RMUST_T_HOT_ABS_SUSPEND 527
#define RMUST_T_BUF_CNT 529
#define RMUST_T_RCS_CKPT_BUFFER_CNT 530
#define RMUST_T_UDASH_INDEX 531
#define RMUST_T_RCACHE_INDEX 532
#define RMUST_T_RUJ_INDEX 533
#define RMUST_T_TSN_INDEX 534
#define RMUST_T_SEQ_INDEX 535
#define RMUST_T_CPT_INDEX 536
#define RMUST_T_CRL_ENABLED 546
#define RMUST_T_RCWS_UNMARK_THRESHOLD 551
#define RMUST_T_VOLUME_NAME 555
#define RMUST_T_MAX_BLOCKS 556
#define RMUST_T_ACE_FLAGS 557
#define RMUST_T_ACE_ACCESS 558
#define RMUST_T_ALTER_PRV_FLG 559
#define RMUST_T_ANALYSE_PRV_FLG 560
#define RMUST_T_BACKUP_PRV_FLG 561
#define RMUST_T_CONVERT_PRV_FLG 562
#define RMUST_T_COPY_PRV_FLG 563
#define RMUST_T_DUMP_PRV_FLG 564
#define RMUST_T_LOAD_PRV_FLG 565
#define RMUST_T_MOVE_PRV_FLG 566
#define RMUST_T_OPEN_PRV_FLG 567
#define RMUST_T_RESTORE_PRV_FLG 568
#define RMUST_T_SECURITY_PRV_FLG 569
#define RMUST_T_SHOW_PRV_FLG 570
#define RMUST_T_UNLOAD_PRV_FLG 571
#define RMUST_T_VERIFY_PRV_FLG 572
#define RMUST_T_IDENTIFIER 573
#define RMUST_T_ACE_TEXT 574
#define RMUST_T_MONITOR_UP_FLG 575
#define RMUST_K_TAG_LAST_TAG 575
#define KUSGTBEND 1000
#define KUSGTBOG 1001
#define KUSGTEOG 1002
#define KUSGTBTRN 1003
#define KUSGTBCNT 1004
#define KUSGTBDTG 1005
#define KUSGTBKEY 1006
#define KUSGTWCLS 1007
#define KUSGTUNST 1008
#define KUSGTMD 1009
#define KUSGTNP 1010
#define RMUST_MRT_STAREA_MAPS 2000
#define RMUST_MRT_RELINFO 2001
#define RMUST_MRT_IDXINFO 2002
#define RMUST_CT_AIJINFO 2100
#define RMUST_CT_AIJJNLS 2101
#define RMUST_CT_ARPMS_STATS 2102
#define RMUST_CT_DBINFO 2103
#define RMUST_CT_DBR 2104
#define RMUST_CT_FILE 2105
#define RMUST_CT_PROCESS 2106
#define RMUST_CT_STALL 2107
#define RMUST_CT_STALL_ACT 2108
#define RMUST_CT_RTPMS_STATS 2109
#define RMUST_CT_FILE_NODUP 2110
#define RMUST_CT_REC_CACHE 2111
#define RMUST_CT_RUJINFO 2112
#define RMUST_CT_TSNINFO 2113
#define RMUST_CT_SEQINFO 2114
#define RMUST_CT_CPTINFO 2115
#define RMUST_CT_AIPINFO 2116
#define RMUST_CT_ACTIVE 2117
#define RMUST_CT_CLUSTER 2118
#define RMUST_CT_RMUACL 2119
#define RMUST_CT_USERS 2120
#define RMUST_CT_DATABASES 2121
#define RMUST_CT_TAPE_DEVICES 2122
#define RMUST_CT_DISK_DEVICES 2123
#define RMUST_CT_DASH 2124
#define RMUST_CT_USER_DASH 2125
#define RMUST_CT_DB_MONITOR 2126
#define RMUST_CT_LAPMS_TABLE 2127
#define RMUST_CT_LAPMS_INDEX 2128
#define RMUST_CT_LAPMS_TABLE_STATS 2129
#define RMUST_CT_LAPMS_INDEX_STATS 2130
#define RMUST_CT_LAPMS_STATS 2131
#define KUSC2_FILE_ENTRY 2501
#define KUSC3_FILE_STATS 2502
#define KUSC4_LIBRARY_CACHE 2503
#define KUSC5_PARAMETERS 2504
#define KUSC6_FILE_HEADER 2505
#define KUSC7_PROCESS 2506
#define KUSC8_SQL_AREA 2507
#define KUSC9_SESSIONS 2508
#define KUSC10_SGA 2509
#define KUSC11_SQL_TEXT 2510
#define KUSC12_SESSTAT 2511
#define KUSC13_SESSIONS_STAT 2512
#define KUSC14_SYSSTAT 2513
#define KUSC15_EVENT_DESCRIPTIONS 2514
#define KUSC16_SESSION_WAIT 2515
#define KUSC17_OPEN_CURSOR 2516
#define KUSC18_LATCH_WHERE 2517
#define KUSC19_LATCH_MISSES 2518
#define KUSC20_LATCH_HOLDER 2519
#define KUSC21_LATCH 2520
#define KUSC23_RESOURCE 2522
#define KUSC24_LOCKS_1 2523
#define KUSC25_LOCKS_2 2524
#define KUSC26_LOCKS_3 2525
#define KUSC27_LOCKS_4 2526
#define KUSC28_LOCKS_5 2527
#define KUSC29_LOCK1_STAT 2528
#define KUSC30_LOCK2_STAT 2529
#define KUSC31_LOCK3_STAT 2530
#define KUSC32_LOCK4_STAT 2531
#define KUS1_FILE_NUMBER 3000
#define KUS2_FILE_NAME 3001
#define KUS4_FILE_STATUS 3003
#define KUS5_FILE_BLOCK_SIZE 3004
#define KUS6_FILE_CREATE_BLOCKS 3005
#define KUS7_SERVER_TYPE 3006
#define KUS8_CHECKPOINT_CHANGE_NUMBER 3007
#define KUS9_PHYRDS 3008
#define KUS10_PHYWRTS 3009
#define KUS11_READTIM 3010
#define KUS12_WRITETIM 3011
#define KUS13_PHYBLKRD 3012
#define KUS14_PHYBLKWRT 3013
#define KUS15_LIBRARYCACHE_NDX 3014
#define KUS16_GETS 3015
#define KUS17_GETHITS 3016
#define KUS18_PINS 3017
#define KUS19_PINHITS 3018
#define KUS20_RELOADS 3019
#define KUS21_INVALIDATIONS 3020
#define KUS22_DLM_LOCK_REQUESTS 3021
#define KUS23_DLM_PIN_REQUESTS 3022
#define KUS24_DLM_PIN_RELEASES 3023
#define KUS25_DLM_INVALIDATION_REQUESTS 3024
#define KUS26_DLM_INVALIDATIONS 3025
#define KUS27_PARAM_NUM 3026
#define KUS28_PARAM_NAME 3027
#define KUS29_PARAM_TYPE 3028
#define KUS30_PARAM_VALUE 3029
#define KUS31_PARAM_IS_DEFAULT 3030
#define KUS32_PARAM_IS_SESS_MODIFIABLE 3031
#define KUS33_PARAM_IS_SYS_MODIFIABLE 3032
#define KUS34_PROC_ADDR 3033
#define KUS35_PID 3034
#define KUS36_SPID 3035
#define KUS37_USERNAME 3036
#define KUS38_SERIAL_NUMBER 3037
#define KUS39_TERMINAL 3038
#define KUS40_PROGRAM 3039
#define KUS41_PROCESS_BACKGROUND 3040
#define KUS42_LATCHWAIT 3041
#define KUS43_LATCHSPIN 3042
#define KUS44_PROCESS_ACTIVE 3043
#define KUS45_SQL_TEXT 3044
#define KUS46_SHARABLE_MEM 3045
#define KUS47_PERSISTENT_MEM 3046
#define KUS48_RUNTIME_MEM 3047
#define KUS49_CURS_SORTS 3048
#define KUS50_VERSION_COUNT 3049
#define KUS51_LOADED_VERSIONS 3050
#define KUS52_OPEN_VERSIONS 3051
#define KUS53_USERS_OPENING 3052
#define KUS54_EXECUTIONS 3053
#define KUS55_USERS_EXECUTING 3054
#define KUS56_LOADS 3055
#define KUS57_FIRST_LOAD_TIME 3056
#define KUS58_INVALIDATIONS 3057
#define KUS59_PARSE_CALLS 3058
#define KUS60_DISK_READS 3059
#define KUS61_BUFFER_GETS 3060
#define KUS62_COMMAND_TYPE 3061
#define KUS63_ROWS_PROCESSED 3062
#define KUS64_OPTIMIZER_MODE 3063
#define KUS65_PARSING_USER_ID 3064
#define KUS66_PARSING_SCHEMA_ID 3065
#define KUS67_KEPT_VERSIONS 3066
#define KUS68_PARENT_ADDRESS 3067
#define KUS69_OBJECT_HASH 3068
#define KUS70_MODULE 3069
#define KUS71_MODULE_HASH 3070
#define KUS72_ACTION 3071
#define KUS73_ACTION_HASH 3072
#define KUS74_SESSION_ADDR 3073
#define KUS75_SID 3074
#define KUS76_SERIAL_NUM 3075
#define KUS77_AUDSID 3076
#define KUS78_PADDR 3077
#define KUS79_USER_NUM 3078
#define KUS80_USERNAME 3079
#define KUS81_COMMAND 3080
#define KUS82_TADDR 3081
#define KUS83_LOCKWAIT 3082
#define KUS84_STATUS 3083
#define KUS85_SERIALIZABLE_ABORTS 3084
#define KUS86_SCHEMA_NUM 3085
#define KUS87_SCHEMA_NAME 3086
#define KUS88_OSUSER 3087
#define KUS89_PROCESS 3088
#define KUS90_MACHINE 3089
#define KUS91_TERMINAL 3090
#define KUS92_PROGRAM 3091
#define KUS93_SESSION_TYPE 3092
#define KUS94_SQL_ADDRESS 3093
#define KUS95_SQL_HASH_VALUE 3094
#define KUS96_PREV_SQL_ADDR 3095
#define KUS97_PREV_HASH_VALUE 3096
#define KUS98_MODULE 3097
#define KUS99_MODULE_HASH 3098
#define KUS100_ACTION 3099
#define KUS101_ACTION_HASH 3100
#define KUS102_CLIENT_INFO 3101
#define KUS103_FIXED_TABLE_SEQUENCE 3102
#define KUS104_ROW_WAIT_OBJECT 3103
#define KUS105_ROW_WAIT_FILE 3104
#define KUS106_ROW_WAIT_BLOCK 3105
#define KUS107_ROW_WAIT_ROW 3106
#define KUS108_LOGON_TIME 3107
#define KUS109_LAST_CALL_ELAPSE_TIME 3108
#define KUS110_OBJECT_STATE 3109
#define KUS111_SESSION_FLAGS 3110
#define KUS112_SGA_NAME 3111
#define KUS113_SGA_SIZE 3112
#define KUS114_SQL_TEXT_ADDR 3113
#define KUS115_HASH_VALUE 3114
#define KUS116_SQL_TEXT_PIECE 3115
#define KUS117_SQL_TEXT 3116
#define KUS118_SESSION_STATS_ARRAY 3117
#define KUS119_SYS_STATISTIC_NUM 3118
#define KUS121_SYS_STATISTIC_NAME 3120
#define KUS122_SYS_STATISTIC_CLASS 3121
#define KUS123_SYS_STATISTIC_VALUE 3122
#define KUS124_EVENT_NUMBER 3123
#define KUS125_EVENT_NAME 3124
#define KUS126_PARAM_1_TEXT 3125
#define KUS127_PARAM_2_TEXT 3126
#define KUS128_PARAM_3_TEXT 3127
#define KUS129_SESSION_SEQ_NUM 3128
#define KUS130_P1 3129
#define KUS131_P1_RAW 3130
#define KUS132_P2 3131
#define KUS133_P2_RAW 3132
#define KUS134_P3 3133
#define KUS135_P3_RAW 3134
#define KUS136_WAIT_TIME 3135
#define KUS137_SECONDS_IN_WAIT 3136
#define KUS138_OBJECT_STATE_FLAGS 3137
#define KUS139_LATCH_ADDRESS 3138
#define KUS140_USER_NAME 3139
#define KUS141_CURSOR_ADDRESS 3140
#define KUS142_CURSOR_HASH_VALUE 3141
#define KUS143_CURSOR_SQL_TEXT 3142
#define KUS144_CURSOR_OBJ_NAME_SPACE 3143
#define KUS145_CURSOR_OBJ_HANDLE 3144
#define KUS146_LATCH_NUMBER 3145
#define KUS147_LATCH_WHERE 3146
#define KUS148_LATCH_PARENT_NAME 3147
#define KUS149_LATCH_NO_WAIT_FAIL_COUNT 3148
#define KUS150_LATCH_NAME 3149
#define KUS151_LATCH_LEVEL_NUMBER 3150
#define KUS152_LATCH_GETS 3151
#define KUS153_LATCH_MISSES 3152
#define KUS154_SLEEPS 3153
#define KUS155_IMMEDIATE_GETS 3154
#define KUS156_IMMEDIATE_MISSES 3155
#define KUS157_WAITERS_WOKEN 3156
#define KUS158_WAITS_HOLDING_LATCH 3157
#define KUS159_SPIN_GETS 3158
#define KUS160_SLEEP1 3159
#define KUS161_SLEEP2 3160
#define KUS162_SLEEP3 3161
#define KUS163_SLEEP4 3162
#define KUS164_SLEEP5 3163
#define KUS165_SLEEP6 3164
#define KUS166_SLEEP7 3165
#define KUS167_SLEEP8 3166
#define KUS168_SLEEP9 3167
#define KUS169_SLEEP10 3168
#define KUS170_SLEEP11 3169
#define KUS171_SLEEP12 3170
#define KUS172_SLEEP13 3171
#define KUS173_RESOURCE_ADDR 3172
#define KUS174_RESOURCE_TYPE 3173
#define KUS175_RESOURCE_ID_1 3174
#define KUS176_RESOURCE_ID_2 3175
#define KUS177_RESOURCE_FLAG 3176
#define KUS178_LOCK_STATE_ADDRESS 3177
#define KUS179_LOCK_ADDRESS 3178
#define KUS180_LOCK_MODE_HELD 3179
#define KUS181_LOCK_MODE_REQUESTED 3180
#define KUS182_LOCK_HELD_TIME 3181
#define KUS183_BLOCKING 3182
#define KUS184_LATCH_SLEEP_COUNT 3183
#define KUS185_CURRENT_FILE_BLOCKS 3184
#define KUS203_FILE_ENABLED 3202
#define KUS204_CACHE_NAMESPACE 3203
#define KUS205_PARAM_IS_MODIFIED 3204
#define KUS206_PARAM_IS_ADJUSTED 3205
#define KUS207_PARAM_DESCRIPTION 3206
#define KUSST1 5000
#define KUSST2 5001
#define KUSST3 5002
#define KUSST4 5003
#define KUSST5 5004
#define KUSST6 5005
#define KUSST7 5006
#define KUSST8 5007
#define KUSST9 5008
#define KUSST10 5009
#define KUSST11 5010
#define KUSST12 5011
#define KUSST13 5012
#define KUSST14 5013
#define KUSST15 5014
#define KUSST16 5015
#define KUSST17 5016
#define KUSST18 5017
#define KUSST19 5018
#define KUSST20 5019
#define KUSST21 5020
#define KUSST22 5021
#define KUSST23 5022
#define KUSST24 5023
#define KUSST25 5024
#define KUSST26 5025
#define KUSST27 5026
#define KUSST28 5027
#define KUSST29 5028
#define KUSST30 5029
#define KUSST31 5030
#define KUSST32 5031
#define KUSST33 5032
#define KUSST34 5033
#define KUSST35 5034
#define KUSST36 5035
#define KUSST37 5036
#define KUSST38 5037
#define KUSST39 5038
#define KUSST40 5039
#define KUSST41 5040
#define KUSST42 5041
#define KUSST43 5042
#define KUSST44 5043
#define KUSST45 5044
#define KUSST46 5045
#define KUSST47 5046
#define KUSST48 5047
#define KUSST49 5048
#define KUSST50 5049
#define KUSST51 5050
#define KUSST52 5051
#define KUSST53 5052
#define KUSST54 5053
#define KUSST55 5054
#define KUSST56 5055
#define KUSST57 5056
#define KUSST58 5057
#define KUSST59 5058
#define KUSST60 5059
#define KUSST61 5060
#define KUSST62 5061
#define KUSST63 5062
#define KUSST64 5063
#define KUSST65 5064
#define KUSST66 5065
#define KUSST67 5066
#define KUSST68 5067
#define KUSST69 5068
#define KUSST70 5069
#define KUSST71 5070
#define KUSST72 5071
#define KUSST73 5072
#define KUSST74 5073
#define KUSST75 5074
#define KUSST76 5075
#define KUSST77 5076
#define KUSST78 5077
#define KUSST79 5078
#define KUSST80 5079
#define KUSST81 5080
#define KUSST82 5081
#define KUSST83 5082
#define KUSST84 5083
#define KUSST85 5084
#define KUSST86 5085
#define KUSST87 5086
#define KUSST88 5087
#define KUSST89 5088
#define KUSST90 5089
#define KUSST91 5090
#define KUSST92 5091
#define KUSST93 5092
#define KUSST94 5093
#define KUSST95 5094
#define KUSST96 5095
#define KUSST97 5096
#define KUSST98 5097
#define KUSST99 5098
#define KUSST100 5099
#define KUSST101 5100
#define KUSST102 5101
#define KUSST103 5102
#define KUSST104 5103
#define KUSST105 5104
#define KUSST106 5105
#define KUSST107 5106
#define KUSST108 5107
#define KUSST109 5108
#define KUSST110 5109
#define KUSST111 5110
#define KUSST112 5111
#define KUSST113 5112
#define KUSST114 5113
#define KUSST115 5114
#define KUSST116 5115
#define KUSST117 5116
#define KUSST118 5117
#define KUSST119 5118
#define KUSST120 5119
#define KUSST121 5120
#define KUSST122 5121
#define KUSST123 5122
#define KUSST124 5123
#define KUSST125 5124
#define KUSST126 5125
#define KUSST127 5126
#define KUSST128 5127
#define KUSST129 5128
#define KUSST130 5129
#define KUSST131 5130
#define KUSST132 5131
#define KUSST133 5132
#define KUSST134 5133
#define KUSST135 5134
#define KUSST136 5135
#define KUSST137 5136
#define KUSST138 5137
#define KUSST139 5138
#define KUSST140 5139
#define KUSST141 5140
#define KUSST142 5141
#define KUSST143 5142
#define KUSST144 5143
#define KUSST145 5144
#define KUSST146 5145
#define KUSST147 5146
#define KUSST148 5147
#define KUSST149 5148
#define KUSST150 5149
#define KUSST151 5150
#define KUSST152 5151
#define KUSST153 5152
#define KUSST154 5153
#define KUSST155 5154
#define KUSST156 5155
#define KUSST157 5156
#define KUSST158 5157
#define KUSST159 5158
#define KUSST160 5159
#define KUSST161 5160
#define KUSST162 5161
#define KUSST163 5162
#define KUSST164 5163
#define KUSST165 5164
#define KUSST166 5165
#define KUSST167 5166
#define KUSST168 5167
#define KUSST169 5168
#define KUSST170 5169
#define KUSST171 5170
#define KUSST172 5171
#define KUSST173 5172
#define KUSST174 5173
#define KUSST175 5174
#define KUSST176 5175
#define KUSST177 5176
#define KUSST178 5177
#define KUSST179 5178
#define KUSST180 5179
#define KUSST181 5180
#define KUSST182 5181
#define KUSST183 5182
#define KUSST184 5183
#define KUSST185 5184
#define KUSST186 5185
#define KUSST187 5186
#define KUSST188 5187
#define KUSST189 5188
#define KUSST190 5189
#define KUSST191 5190
#define KUSST192 5191
#define KUSST193 5192
#define KUSST194 5193
#define KUSST195 5194
#define KUSST196 5195
#define KUSST197 5196
#define KUSST198 5197
#define KUSST199 5198

/* 0-based count of tags */

#define KUSTAGCOUNT 975

/* Oracle Rdb tags (0-999)*/

#define KUSRTAGSTART 0
#define KUSRTAGEND 999

/* global tags (1000 - 1999) */

#define KUSGTTAGSTART 1000
#define KUSGTTAGEND 1999

/* Oracle Rdb class tags */

#define KUSRCTAGSTART 2000
#define KUSRCTAGEND 2499

/* Oracle class tags */

#define KUSOCTAGSTART 2500
#define KUSOCTAGEND 2999

/* oracle tags (3000 - 9999) */

#define KUSOTAGSTART 3000
#define KUSOTAGMAX 9999

/* ENABLE check_macro_naming */

#endif
