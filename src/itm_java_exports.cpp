#include "..\include\itm.h"
#include "..\include\Enums.h"
#include "..\include\Errors.h"
#include "..\include\com_github_dveonloch_ITM.h"

JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1TLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {

}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_P2P_TLS_Ex
 * Signature: (DD[DIDDIDDIDDD)Lcom/github/dveonloch/ITMIntermediateValuesResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1TLS_1Ex
(JNIEnv*, jclass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_P2P_CR
 * Signature: (DD[DIDDIDDIDD)Lcom/github/dveonloch/ITMResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1CR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_P2P_CR_Ex
 * Signature: (DD[DIDDIDDIDD)Lcom/github/dveonloch/ITMIntermediateValuesResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1CR_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol,
	jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location,
	jdouble situation) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_AREA_TLS
 * Signature: (DDIIDDIDDIDDIDDD)Lcom/github/dveonloch/ITMResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1TLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble time, jdouble location, jdouble situation) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_AREA_TLS_Ex
 * Signature: (DDIIDDIDDIDDIDDD)Lcom/github/dveonloch/ITMIntermediateValuesResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1TLS_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_AREA_CR
 * Signature: (DDIIDDIDDIDDIDD)Lcom/github/dveonloch/ITMResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1CR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble confidence, jdouble reliability) {}

/*
 * Class:     com_github_dveonloch_ITM
 * Method:    ITM_AREA_CR_Ex
 * Signature: (DDIIDDIDDIDDIDD)Lcom/github/dveonloch/ITMIntermediateValuesResult;
 */
JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1CR_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {}