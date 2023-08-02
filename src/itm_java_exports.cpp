#include "..\include\itm.h"
#include "..\include\Enums.h"
#include "..\include\Errors.h"
#include "..\include\its_propagation_itm_ITM.h"
#include <jni.h>



 jobject  GetIntermediateValuesObject(JNIEnv* env, IntermediateValues& intermediateValues) {
	jclass jIntermediateValuesClass = env->FindClass("Lits/propagation/itm/ITMIntermediateValuesResult$IntermediateValues");
	jobject IntermediateValuesObject = env->AllocObject(jIntermediateValuesClass);

	jfieldID theta_hzn_0_field = env->GetFieldID(jIntermediateValuesClass,"theta_hzn_0", "D");
	jfieldID theta_hzn_1_field = env->GetFieldID(jIntermediateValuesClass,"theta_hzn_1", "D");
	jfieldID d_hzn__meter_0__field = env->GetFieldID(jIntermediateValuesClass,"d_hzn__meter_0", "D");
	jfieldID d_hzn__meter_1__field = env->GetFieldID(jIntermediateValuesClass,"d_hzn__meter_1", "D");
	jfieldID h_e__meter_0__field = env->GetFieldID(jIntermediateValuesClass,"h_e__meter_0", "D");
	jfieldID h_e__meter_1__field = env->GetFieldID(jIntermediateValuesClass,"h_e__meter_1", "D");
	jfieldID N_s__field = env->GetFieldID(jIntermediateValuesClass,"N_s", "D");
	jfieldID delta_h__meter__field = env->GetFieldID(jIntermediateValuesClass,"delta_h__meter", "D");
	jfieldID A_ref__db__field = env->GetFieldID(jIntermediateValuesClass,"A_ref__db", "D");
	jfieldID A_fs__db__field = env->GetFieldID(jIntermediateValuesClass,"A_fs__db", "D");
	jfieldID d__km__field = env->GetFieldID(jIntermediateValuesClass,"d__km", "D");
	jfieldID mode__field = env->GetFieldID(jIntermediateValuesClass, "mode", "I");

	env->SetDoubleField(IntermediateValuesObject, theta_hzn_0_field, intermediateValues.theta_hzn[0]);
	env->SetDoubleField(IntermediateValuesObject, theta_hzn_1_field, intermediateValues.theta_hzn[1]);
	env->SetDoubleField(IntermediateValuesObject, d_hzn__meter_0__field, intermediateValues.d_hzn__meter[0]);
	env->SetDoubleField(IntermediateValuesObject, d_hzn__meter_1__field, intermediateValues.d_hzn__meter[1]);
	env->SetDoubleField(IntermediateValuesObject, h_e__meter_0__field, intermediateValues.h_e__meter[0]);
	env->SetDoubleField(IntermediateValuesObject, h_e__meter_1__field, intermediateValues.h_e__meter[1] );
	env->SetDoubleField(IntermediateValuesObject, N_s__field, intermediateValues.N_s);
	env->SetDoubleField(IntermediateValuesObject, delta_h__meter__field, intermediateValues.delta_h__meter);
	env->SetDoubleField(IntermediateValuesObject, A_ref__db__field, intermediateValues.A_ref__db);
	env->SetDoubleField(IntermediateValuesObject, A_fs__db__field, intermediateValues.A_fs__db);
	env->SetDoubleField(IntermediateValuesObject, d__km__field, intermediateValues.d__km);
	env->SetIntField(IntermediateValuesObject, mode__field, intermediateValues.mode);

	return IntermediateValuesObject;
}

 jobject  GetITMIntermediateValuesResultObject(JNIEnv* env, double A_dB, long warnings, IntermediateValues& intermediateValues, int errorCode) {
	jclass ITMIntermediateValuesResultClass = env->FindClass("its/propagation/itm/ITMIntermediateValuesResult");
	jmethodID ITMIntermediateValuesResultConstructor = env->GetMethodID(ITMIntermediateValuesResultClass, "<init>", "(DJLits/propagation/itm/ITMIntermediateValuesResult$IntermediateValues;I)V");
	
	return env->NewObject(ITMIntermediateValuesResultClass, ITMIntermediateValuesResultConstructor, A_dB, warnings, GetIntermediateValuesObject(env, intermediateValues), errorCode);
}

 JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
	 return JNI_VERSION_1_8;
 }

 jobject  GetITMResultObject(JNIEnv* env, double A_dB, long warnings, int errorCode) {
	 jclass ITMResultClass = env->FindClass("its/propagation/itm/ITMResult");
	 jmethodID ITMResultConstructor = env->GetMethodID(ITMResultClass, "<init>", "(DJI)V");
	 return env->NewObject(ITMResultClass, ITMResultConstructor, A_dB, warnings, errorCode);
 }

JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMP2PTLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {
	double A_dB;
	long warnings;
	int errorCode = ITM_P2P_TLS(h_tx__meter, h_rx__meter, env->GetDoubleArrayElements(pfl, 0), climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, time, location, situation,
		&A_dB, &warnings);

	return GetITMResultObject(env, A_dB, warnings, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMP2PTLSEx
(JNIEnv* env, jclass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {
	double A_dB;
	long warnings;
	IntermediateValues intermediateValues;
	int errorCode = ITM_P2P_TLS_Ex(h_tx__meter, h_rx__meter, env->GetDoubleArrayElements(pfl, 0), climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, time, location, situation,
		&A_dB, &warnings, &intermediateValues);

	return GetITMIntermediateValuesResultObject(env, A_dB, warnings, intermediateValues, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMP2PCR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {
	double A_dB;
	long warnings;
	int errorCode = ITM_P2P_CR(h_tx__meter, h_rx__meter, env->GetDoubleArrayElements(pfl, 0), climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, confidence, reliability,
		&A_dB, &warnings);

	return GetITMResultObject(env, A_dB, warnings, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMP2PCREx
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jdoubleArray pfl, jint climate, jdouble N_0, jdouble f__mhz, jint pol,
	jdouble epsilon, jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {
	double A_dB;
	long warnings;
	IntermediateValues intermediateValues;
	int errorCode = ITM_P2P_CR_Ex(h_tx__meter, h_rx__meter, env->GetDoubleArrayElements(pfl, 0), climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, confidence, reliability,
		&A_dB, &warnings, &intermediateValues);

	return GetITMIntermediateValuesResultObject(env, A_dB, warnings, intermediateValues, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMAREATLS
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble time, jdouble location, jdouble situation) {
	double A_dB;
	long warnings;
	int errorCode = ITM_AREA_TLS(h_tx__meter, h_rx__meter, tx_site_criteria, rx_site_criteria, d__km, delta_h__meter, climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, time, location, situation,
		&A_dB, &warnings);

	return GetITMResultObject(env, A_dB, warnings, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMAREATLSEx
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble time, jdouble location, jdouble situation) {

	double A_dB;
	long warnings;
	IntermediateValues intermediateValues;

	int errorCode = ITM_AREA_TLS_Ex(h_tx__meter, h_rx__meter, tx_site_criteria, rx_site_criteria, d__km, delta_h__meter, climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, time, location, situation,
		&A_dB, &warnings, &intermediateValues);

	return GetITMIntermediateValuesResultObject(env, A_dB, warnings, intermediateValues, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMAREACR
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter, jdouble h_rx__meter,
	jint tx_site_criteria, jint rx_site_criteria, jdouble d__km, jdouble delta_h__meter,
	jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon, jdouble sigma,
	jint mdvar, jdouble confidence, jdouble reliability) {
	double A_dB;
	long warnings;
	int errorCode = ITM_AREA_CR(h_tx__meter, h_rx__meter, tx_site_criteria, rx_site_criteria, d__km, delta_h__meter, climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, confidence, reliability,
		&A_dB, &warnings);

	return GetITMResultObject(env, A_dB, warnings, errorCode);
}


JNIEXPORT jobject JNICALL Java_its_propagation_itm_ITM_ITMAREACREx
(JNIEnv* env, jclass javaClass, jdouble h_tx__meter,
	jdouble h_rx__meter, jint tx_site_criteria, jint rx_site_criteria, jdouble d__km,
	jdouble delta_h__meter, jint climate, jdouble N_0, jdouble f__mhz, jint pol, jdouble epsilon,
	jdouble sigma, jint mdvar, jdouble confidence, jdouble reliability) {
	double A_dB;
	long warnings;
	IntermediateValues intermediateValues;

	int errorCode = ITM_AREA_CR(h_tx__meter, h_rx__meter, tx_site_criteria, rx_site_criteria, d__km, delta_h__meter, climate, N_0, f__mhz,
		pol, epsilon, sigma, mdvar, confidence, reliability,
		&A_dB, &warnings);

	return GetITMIntermediateValuesResultObject(env, A_dB, warnings, intermediateValues, errorCode);
}