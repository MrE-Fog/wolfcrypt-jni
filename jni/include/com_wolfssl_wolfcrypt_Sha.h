/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_wolfcrypt_Sha */

#ifndef _Included_com_wolfssl_wolfcrypt_Sha
#define _Included_com_wolfssl_wolfcrypt_Sha
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wolfssl_wolfcrypt_Sha_NULL
#define com_wolfssl_wolfcrypt_Sha_NULL 0LL
#undef com_wolfssl_wolfcrypt_Sha_TYPE
#define com_wolfssl_wolfcrypt_Sha_TYPE 1L
#undef com_wolfssl_wolfcrypt_Sha_DIGEST_SIZE
#define com_wolfssl_wolfcrypt_Sha_DIGEST_SIZE 20L
/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    mallocNativeStruct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_wolfcrypt_Sha_mallocNativeStruct
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1init
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_copy
 * Signature: (Lcom/wolfssl/wolfcrypt/Sha;)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1copy
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_update
 * Signature: (Ljava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1update__Ljava_nio_ByteBuffer_2II
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_update
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1update___3BII
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_final
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1final__Ljava_nio_ByteBuffer_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Sha
 * Method:    native_final
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Sha_native_1final___3B
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
