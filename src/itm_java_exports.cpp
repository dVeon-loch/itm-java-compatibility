#include "..\include\itm.h"
#include "..\include\Enums.h"
#include "..\include\Errors.h"
#include "..\include\its_propagation_itm_ITM.h"

JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1TLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1TLS_1Ex
(JNIEnv*, jclass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1CR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1P2P_1CR_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol,
	jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location,
	jdouble situation) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1TLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble time, jdouble location, jdouble situation) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1TLS_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1CR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble confidence, jdouble reliability) {

}


JNIEXPORT jobject JNICALL Java_com_github_dveonloch_ITM_ITM_1AREA_1CR_1Ex
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {

}

struct jITMResult
{
	jdouble transmissionLoss_dB;
	jlongArray warnings;
	jint errorCode;
};

struct jIntermediateValues
{
	jdoubleArray theta_hzn[2];        // Terminal horizon angles
	jdoubleArray d_hzn__meter[2];     // Terminal horizon distances, in meters
	jdoubleArray h_e__meter[2];       // Terminal effective heights, in meters
	jdouble N_s;                 // Surface refractivity, in N-Units
	jdouble delta_h__meter;      // Terrain irregularity parameter, in meters
	jdouble A_ref__db;           // Reference attenuation, in dB
	jdouble A_fs__db;            // Free space basic transmission loss, in dB
	jdouble d__km;               // Path distance, in km
	jint mode;                   // Mode of propagation value
};

struct jITMIntermediateValuesResult : public jITMResult
{
	jIntermediateValues intermediateValues;
};