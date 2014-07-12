/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_ThresholdUTRA_H_
#define	_ThresholdUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdUTRA_PR {
	ThresholdUTRA_PR_NOTHING,	/* No components present */
	ThresholdUTRA_PR_utra_RSCP,
	ThresholdUTRA_PR_utra_EcN0
} ThresholdUTRA_PR;

/* ThresholdUTRA */
typedef struct ThresholdUTRA {
	ThresholdUTRA_PR present;
	union ThresholdUTRA_u {
		long	 utra_RSCP;
		long	 utra_EcN0;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdUTRA_H_ */
#include <asn_internal.h>