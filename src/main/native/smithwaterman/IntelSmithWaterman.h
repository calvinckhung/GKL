/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_gkl_smithwaterman_IntelSmithWaterman */

#ifndef _Included_com_intel_gkl_smithwaterman_IntelSmithWaterman
#define _Included_com_intel_gkl_smithwaterman_IntelSmithWaterman
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_intel_gkl_smithwaterman_IntelSmithWaterman_initNative
  (JNIEnv * env, jclass obj );
/*
 * Class:     com_intel_gkl_smithwaterman_IntelSmithWaterman
 * Method:    alignNative
 * Signature: ([B[B[BIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_intel_gkl_smithwaterman_IntelSmithWaterman_alignNative
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jint, jint, jint, jint, jint);

/*
 * Class:     com_intel_gkl_smithwaterman_IntelSmithWaterman
 * Method:    doneNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_smithwaterman_IntelSmithWaterman_doneNative
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif