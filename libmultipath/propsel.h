#ifndef PROPSEL_H_INCLUDED
#define PROPSEL_H_INCLUDED
int select_rr_weight (struct config *conf, struct multipath * mp);
int select_pgfailback (struct config *conf, struct multipath * mp);
int select_detect_pgpolicy (struct config *conf, struct multipath * mp);
int select_detect_pgpolicy_use_tpg (struct config *conf, struct multipath * mp);
int select_pgpolicy (struct config *conf, struct multipath * mp);
int select_selector (struct config *conf, struct multipath * mp);
int select_alias (struct config *conf, struct multipath * mp);
int select_features (struct config *conf, struct multipath * mp);
int select_hwhandler (struct config *conf, struct multipath * mp);
int select_checker(struct config *conf, struct path *pp);
int select_getuid (struct config *conf, struct path * pp);
int select_recheck_wwid(struct config *conf, struct path * pp);
int select_prio (struct config *conf, struct path * pp);
int select_find_multipaths_timeout(struct config *conf, struct path *pp);
int select_no_path_retry(struct config *conf, struct multipath *mp);
int select_flush_on_last_del(struct config *conf, struct multipath *mp);
int select_minio(struct config *conf, struct multipath *mp);
int select_mode(struct config *conf, struct multipath *mp);
int select_uid(struct config *conf, struct multipath *mp);
int select_gid(struct config *conf, struct multipath *mp);
int select_fast_io_fail(struct config *conf, struct path *pp);
int select_dev_loss(struct config *conf, struct path *pp);
int select_eh_deadline(struct config *conf, struct path *pp);
int select_reservation_key(struct config *conf, struct multipath *mp);
int select_retain_hwhandler (struct config *conf, struct multipath * mp);
int select_detect_prio(struct config *conf, struct path * pp);
int select_detect_checker(struct config *conf, struct path * pp);
int select_deferred_remove(struct config *conf, struct multipath *mp);
int select_delay_checks(struct config *conf, struct multipath * mp);
int select_skip_kpartx (struct config *conf, struct multipath * mp);
int select_max_sectors_kb (struct config *conf, struct multipath * mp);
int select_san_path_err_forget_rate(struct config *conf, struct multipath *mp);
int select_san_path_err_threshold(struct config *conf, struct multipath *mp);
int select_san_path_err_recovery_time(struct config *conf, struct multipath *mp);
int select_marginal_path_err_sample_time(struct config *conf, struct multipath *mp);
int select_marginal_path_err_rate_threshold(struct config *conf, struct multipath *mp);
int select_marginal_path_err_recheck_gap_time(struct config *conf, struct multipath *mp);
int select_marginal_path_double_failed_time(struct config *conf, struct multipath *mp);
int select_ghost_delay(struct config *conf, struct multipath * mp);
void reconcile_features_with_options(const char *id, char **features,
				     int* no_path_retry,
				     int *retain_hwhandler);
int select_all_tg_pt (struct config *conf, struct multipath * mp);
int select_vpd_vendor_id (struct path *pp);
#endif
