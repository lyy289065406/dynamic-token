/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class exp_token_otp__OTP_CAPI */

#ifndef _Included_exp_token_otp__OTP_CAPI
#define _Included_exp_token_otp__OTP_CAPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     exp_token_otp__OTP_CAPI
 * Method:    getDefaultPrivateKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_exp_token_otp__1OTP_1CAPI_getDefaultPrivateKey
  (JNIEnv *, jclass);

/*
 * Class:     exp_token_otp__OTP_CAPI
 * Method:    getDefaultTimeOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_exp_token_otp__1OTP_1CAPI_getDefaultTimeOffset
  (JNIEnv *, jclass);

/*
 * Class:     exp_token_otp__OTP_CAPI
 * Method:    getOtpToken
 * Signature: (Ljava/lang/String;J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_exp_token_otp__1OTP_1CAPI_getOtpToken
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     exp_token_otp__OTP_CAPI
 * Method:    isValid
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_exp_token_otp__1OTP_1CAPI_isValid
  (JNIEnv *, jclass, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
