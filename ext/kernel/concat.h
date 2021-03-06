
#ifndef ZEPHIR_KERNEL_CONCAT_H
#define ZEPHIR_KERNEL_CONCAT_H
#include <php.h>
#include <Zend/zend.h>
#include "kernel/main.h"
#define ZEPHIR_CONCAT_SS(result, op1, op2) \
	 zephir_concat_ss(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, 0);
#define ZEPHIR_SCONCAT_SS(result, op1, op2) \
	 zephir_concat_ss(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, 1);

#define ZEPHIR_CONCAT_SSSS(result, op1, op2, op3, op4) \
	 zephir_concat_ssss(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, op3, sizeof(op3)-1, op4, sizeof(op4)-1, 0);
#define ZEPHIR_SCONCAT_SSSS(result, op1, op2, op3, op4) \
	 zephir_concat_ssss(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, op3, sizeof(op3)-1, op4, sizeof(op4)-1, 1);

#define ZEPHIR_CONCAT_SSVS(result, op1, op2, op3, op4) \
	 zephir_concat_ssvs(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, op3, op4, sizeof(op4)-1, 0);
#define ZEPHIR_SCONCAT_SSVS(result, op1, op2, op3, op4) \
	 zephir_concat_ssvs(result, op1, sizeof(op1)-1, op2, sizeof(op2)-1, op3, op4, sizeof(op4)-1, 1);

#define ZEPHIR_CONCAT_SV(result, op1, op2) \
	 zephir_concat_sv(result, op1, sizeof(op1)-1, op2, 0);
#define ZEPHIR_SCONCAT_SV(result, op1, op2) \
	 zephir_concat_sv(result, op1, sizeof(op1)-1, op2, 1);

#define ZEPHIR_CONCAT_SVS(result, op1, op2, op3) \
	 zephir_concat_svs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, 0);
#define ZEPHIR_SCONCAT_SVS(result, op1, op2, op3) \
	 zephir_concat_svs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, 1);

#define ZEPHIR_CONCAT_SVSSSV(result, op1, op2, op3, op4, op5, op6) \
	 zephir_concat_svsssv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, sizeof(op4)-1, op5, sizeof(op5)-1, op6, 0);
#define ZEPHIR_SCONCAT_SVSSSV(result, op1, op2, op3, op4, op5, op6) \
	 zephir_concat_svsssv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, sizeof(op4)-1, op5, sizeof(op5)-1, op6, 1);

#define ZEPHIR_CONCAT_SVSV(result, op1, op2, op3, op4) \
	 zephir_concat_svsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, 0);
#define ZEPHIR_SCONCAT_SVSV(result, op1, op2, op3, op4) \
	 zephir_concat_svsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, 1);

#define ZEPHIR_CONCAT_SVSVS(result, op1, op2, op3, op4, op5) \
	 zephir_concat_svsvs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, 0);
#define ZEPHIR_SCONCAT_SVSVS(result, op1, op2, op3, op4, op5) \
	 zephir_concat_svsvs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, 1);

#define ZEPHIR_CONCAT_SVSVSV(result, op1, op2, op3, op4, op5, op6) \
	 zephir_concat_svsvsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, 0);
#define ZEPHIR_SCONCAT_SVSVSV(result, op1, op2, op3, op4, op5, op6) \
	 zephir_concat_svsvsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, 1);

#define ZEPHIR_CONCAT_SVSVSVSV(result, op1, op2, op3, op4, op5, op6, op7, op8) \
	 zephir_concat_svsvsvsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, sizeof(op7)-1, op8, 0);
#define ZEPHIR_SCONCAT_SVSVSVSV(result, op1, op2, op3, op4, op5, op6, op7, op8) \
	 zephir_concat_svsvsvsv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, sizeof(op7)-1, op8, 1);

#define ZEPHIR_CONCAT_SVSVSVSVS(result, op1, op2, op3, op4, op5, op6, op7, op8, op9) \
	 zephir_concat_svsvsvsvs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, sizeof(op7)-1, op8, op9, sizeof(op9)-1, 0);
#define ZEPHIR_SCONCAT_SVSVSVSVS(result, op1, op2, op3, op4, op5, op6, op7, op8, op9) \
	 zephir_concat_svsvsvsvs(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, sizeof(op7)-1, op8, op9, sizeof(op9)-1, 1);

#define ZEPHIR_CONCAT_SVSVSVV(result, op1, op2, op3, op4, op5, op6, op7) \
	 zephir_concat_svsvsvv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, 0);
#define ZEPHIR_SCONCAT_SVSVSVV(result, op1, op2, op3, op4, op5, op6, op7) \
	 zephir_concat_svsvsvv(result, op1, sizeof(op1)-1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, op6, op7, 1);

#define ZEPHIR_CONCAT_VS(result, op1, op2) \
	 zephir_concat_vs(result, op1, op2, sizeof(op2)-1, 0);
#define ZEPHIR_SCONCAT_VS(result, op1, op2) \
	 zephir_concat_vs(result, op1, op2, sizeof(op2)-1, 1);

#define ZEPHIR_CONCAT_VSV(result, op1, op2, op3) \
	 zephir_concat_vsv(result, op1, op2, sizeof(op2)-1, op3, 0);
#define ZEPHIR_SCONCAT_VSV(result, op1, op2, op3) \
	 zephir_concat_vsv(result, op1, op2, sizeof(op2)-1, op3, 1);

#define ZEPHIR_CONCAT_VSVS(result, op1, op2, op3, op4) \
	 zephir_concat_vsvs(result, op1, op2, sizeof(op2)-1, op3, op4, sizeof(op4)-1, 0);
#define ZEPHIR_SCONCAT_VSVS(result, op1, op2, op3, op4) \
	 zephir_concat_vsvs(result, op1, op2, sizeof(op2)-1, op3, op4, sizeof(op4)-1, 1);

#define ZEPHIR_CONCAT_VV(result, op1, op2) \
	 zephir_concat_vv(result, op1, op2, 0);
#define ZEPHIR_SCONCAT_VV(result, op1, op2) \
	 zephir_concat_vv(result, op1, op2, 1);

#define ZEPHIR_CONCAT_VVS(result, op1, op2, op3) \
	 zephir_concat_vvs(result, op1, op2, op3, sizeof(op3)-1, 0);
#define ZEPHIR_SCONCAT_VVS(result, op1, op2, op3) \
	 zephir_concat_vvs(result, op1, op2, op3, sizeof(op3)-1, 1);

#define ZEPHIR_CONCAT_VVSV(result, op1, op2, op3, op4) \
	 zephir_concat_vvsv(result, op1, op2, op3, sizeof(op3)-1, op4, 0);
#define ZEPHIR_SCONCAT_VVSV(result, op1, op2, op3, op4) \
	 zephir_concat_vvsv(result, op1, op2, op3, sizeof(op3)-1, op4, 1);

#define ZEPHIR_CONCAT_VVSVS(result, op1, op2, op3, op4, op5) \
	 zephir_concat_vvsvs(result, op1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, 0);
#define ZEPHIR_SCONCAT_VVSVS(result, op1, op2, op3, op4, op5) \
	 zephir_concat_vvsvs(result, op1, op2, op3, sizeof(op3)-1, op4, op5, sizeof(op5)-1, 1);


void zephir_concat_ss(zval *result, const char *op1, uint32_t op1_len, const char *op2, uint32_t op2_len, int self_var);
void zephir_concat_ssss(zval *result, const char *op1, uint32_t op1_len, const char *op2, uint32_t op2_len, const char *op3, uint32_t op3_len, const char *op4, uint32_t op4_len, int self_var);
void zephir_concat_ssvs(zval *result, const char *op1, uint32_t op1_len, const char *op2, uint32_t op2_len, zval *op3, const char *op4, uint32_t op4_len, int self_var);
void zephir_concat_sv(zval *result, const char *op1, uint32_t op1_len, zval *op2, int self_var);
void zephir_concat_svs(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, int self_var);
void zephir_concat_svsssv(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, const char *op4, uint32_t op4_len, const char *op5, uint32_t op5_len, zval *op6, int self_var);
void zephir_concat_svsv(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, int self_var);
void zephir_concat_svsvs(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, int self_var);
void zephir_concat_svsvsv(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, zval *op6, int self_var);
void zephir_concat_svsvsvsv(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, zval *op6, const char *op7, uint32_t op7_len, zval *op8, int self_var);
void zephir_concat_svsvsvsvs(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, zval *op6, const char *op7, uint32_t op7_len, zval *op8, const char *op9, uint32_t op9_len, int self_var);
void zephir_concat_svsvsvv(zval *result, const char *op1, uint32_t op1_len, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, zval *op6, zval *op7, int self_var);
void zephir_concat_vs(zval *result, zval *op1, const char *op2, uint32_t op2_len, int self_var);
void zephir_concat_vsv(zval *result, zval *op1, const char *op2, uint32_t op2_len, zval *op3, int self_var);
void zephir_concat_vsvs(zval *result, zval *op1, const char *op2, uint32_t op2_len, zval *op3, const char *op4, uint32_t op4_len, int self_var);
void zephir_concat_vv(zval *result, zval *op1, zval *op2, int self_var);
void zephir_concat_vvs(zval *result, zval *op1, zval *op2, const char *op3, uint32_t op3_len, int self_var);
void zephir_concat_vvsv(zval *result, zval *op1, zval *op2, const char *op3, uint32_t op3_len, zval *op4, int self_var);
void zephir_concat_vvsvs(zval *result, zval *op1, zval *op2, const char *op3, uint32_t op3_len, zval *op4, const char *op5, uint32_t op5_len, int self_var);
void zephir_concat_function(zval *result, zval *op1, zval *op2);
#endif /* ZEPHIR_KERNEL_CONCAT_H */
