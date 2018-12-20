/*******************************************************************************
 * Copyright (c) 2000, 2018 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#ifndef J9_RECOGNIZEDMETHODS_ENUM_INCL
#define J9_RECOGNIZEDMETHODS_ENUM_INCL

#include "codegen/OMRRecognizedMethodsEnum.hpp"

FirstJ9Method = LastOMRMethod + 1,
    com_ibm_oti_vm_VM_callerClass = FirstJ9Method, org_apache_harmony_luni_platform_OSMemory_putByte_JB_V,
    org_apache_harmony_luni_platform_OSMemory_putShort_JS_V, org_apache_harmony_luni_platform_OSMemory_putInt_JI_V,
    org_apache_harmony_luni_platform_OSMemory_putLong_JJ_V, org_apache_harmony_luni_platform_OSMemory_putFloat_JF_V,
    org_apache_harmony_luni_platform_OSMemory_putDouble_JD_V, org_apache_harmony_luni_platform_OSMemory_putAddress_JJ_V,
    org_apache_harmony_luni_platform_OSMemory_getByte_J_B, org_apache_harmony_luni_platform_OSMemory_getShort_J_S,
    org_apache_harmony_luni_platform_OSMemory_getInt_J_I, org_apache_harmony_luni_platform_OSMemory_getLong_J_J,
    org_apache_harmony_luni_platform_OSMemory_getFloat_J_F, org_apache_harmony_luni_platform_OSMemory_getDouble_J_D,
    org_apache_harmony_luni_platform_OSMemory_getAddress_J_J, java_util_ArrayList_add,
    java_util_ArrayList_ensureCapacity, java_util_ArrayList_get, java_util_ArrayList_remove, java_util_ArrayList_set,
    java_lang_Character_isDigit, java_lang_Character_isLetter, java_lang_Character_isWhitespace,
    java_lang_Character_isAlphabetic, java_lang_Character_isUpperCase, java_lang_Character_isLowerCase,
    java_lang_Class_newInstance, java_lang_Class_newInstanceImpl, java_lang_Class_newInstancePrototype,
    java_lang_Class_isArray, java_lang_Class_isPrimitive, java_lang_Class_getComponentType,
    java_lang_Class_getModifiersImpl, java_lang_Class_getSuperclass, java_lang_Class_isAssignableFrom,
    java_lang_Class_isInstance, java_lang_Class_isInterface, java_lang_ClassLoader_callerClassLoader,
    java_lang_ClassLoader_getCallerClassLoader, java_lang_ClassLoader_getStackClassLoader,
    java_lang_Double_longBitsToDouble, java_lang_Double_doubleToLongBits, java_lang_Float_intBitsToFloat,
    java_lang_Float_floatToIntBits, java_lang_Double_doubleToRawLongBits, java_lang_Float_floatToRawIntBits,
    java_lang_Math_abs_I, java_lang_Math_abs_L, java_lang_Math_abs_F, java_lang_Math_abs_D, java_lang_Math_acos,
    java_lang_Math_asin, java_lang_Math_atan, java_lang_Math_atan2, java_lang_Math_cbrt, java_lang_Math_ceil,
    java_lang_Math_copySign_F, java_lang_Math_copySign_D, java_lang_Math_cos, java_lang_Math_cosh, java_lang_Math_exp,
    java_lang_Math_expm1, java_lang_Math_floor, java_lang_Math_hypot, java_lang_Math_IEEEremainder, java_lang_Math_log,
    java_lang_Math_log10, java_lang_Math_log1p, java_lang_Math_max_I, java_lang_Math_max_L, java_lang_Math_max_F,
    java_lang_Math_max_D, java_lang_Math_min_I, java_lang_Math_min_L, java_lang_Math_min_F, java_lang_Math_min_D,
    java_lang_Math_nextAfter_F, java_lang_Math_nextAfter_D, java_lang_Math_pow, java_lang_Math_rint,
    java_lang_Math_round_F, java_lang_Math_round_D, java_lang_Math_scalb_F, java_lang_Math_scalb_D, java_lang_Math_sin,
    java_lang_Math_sinh, java_lang_Math_sqrt, java_lang_Math_tan, java_lang_Math_tanh, java_lang_Object_init,
    java_lang_Object_getClass, java_lang_Object_clone, java_lang_Object_newInstancePrototype,
    java_lang_Object_getAddressAsPrimitive, java_lang_ref_Reference_getImpl, java_lang_ref_Reference_reachabilityFence,
    java_lang_ref_SoftReference_get, java_lang_Thread_currentThread, java_lang_System_arraycopy,
    java_lang_System_currentTimeMillis, java_lang_System_nanoTime, java_lang_System_hiresClockImpl,
    java_lang_System_identityHashCode, sun_reflect_Reflection_getCallerClass,
    sun_reflect_Reflection_getClassAccessFlags,

    // the following should match table in TR::SymbolReferenceTable::checkImmutable
    java_lang_Boolean_init, java_lang_Character_init, java_lang_Byte_init, java_lang_Short_init, java_lang_Integer_init,
    java_lang_Long_init, java_lang_Float_init, java_lang_Double_init, java_lang_String_init,

    // When adding a new recognized constructor for one of the immutable classes listed above you must also
    // properly alias the recognized constructor in TR::SymbolReferenceTable::immutableConstructorId. Otherwise
    // the JIT may consider the new constructor as side-effect free which will result in invalid transformations.

    java_lang_String_init_String_char, java_lang_String_init_String, java_lang_String_init_int_String_int_String_String,
    java_lang_String_init_int_int_char_boolean,

    java_lang_String_trim, java_lang_String_charAt, java_lang_String_charAtInternal_I,
    java_lang_String_charAtInternal_IB, java_lang_String_compressedArrayCopy_BIBII,
    java_lang_String_compressedArrayCopy_BICII, java_lang_String_compressedArrayCopy_CIBII,
    java_lang_String_compressedArrayCopy_CICII, java_lang_String_decompressedArrayCopy_BIBII,
    java_lang_String_decompressedArrayCopy_BICII, java_lang_String_decompressedArrayCopy_CIBII,
    java_lang_String_decompressedArrayCopy_CICII, java_lang_String_concat, java_lang_String_length,
    java_lang_String_lengthInternal, java_lang_String_indexOf_String, java_lang_String_indexOf_String_int,
    java_lang_String_indexOf_native, java_lang_String_indexOf_fast, java_lang_String_isCompressed,
    java_lang_String_replace, java_lang_String_compareTo, java_lang_String_hashCode,
    java_lang_String_hashCodeImplCompressed, java_lang_String_hashCodeImplDecompressed, java_lang_String_lastIndexOf,

    java_lang_String_toLowerCase, java_lang_String_toLowerCaseCore,

    java_lang_String_toUpperCase, java_lang_String_toUpperCaseCore,

    java_lang_String_toCharArray, java_lang_String_regionMatches, java_lang_String_regionMatches_bool,
    java_lang_String_regionMatchesInternal, java_lang_String_equalsIgnoreCase, java_lang_String_compareToIgnoreCase,
    java_lang_String_compress, java_lang_String_andOR, java_lang_String_compressNoCheck, java_lang_String_unsafeCharAt,
    java_lang_String_split_str_int, java_lang_String_getChars_charArray, java_lang_String_getChars_byteArray,

    java_lang_StringLatin1_indexOf,

    java_lang_StringUTF16_getChar, java_lang_StringUTF16_indexOf, java_lang_StringUTF16_toBytes,

    java_lang_StringBuffer_append, java_lang_StringBuffer_capacityInternal, java_lang_StringBuffer_ensureCapacityImpl,
    java_lang_StringBuffer_lengthInternalUnsynchronized,

    java_lang_StringBuilder_init, java_lang_StringBuilder_init_int, java_lang_StringBuilder_append_bool,
    java_lang_StringBuilder_append_char, java_lang_StringBuilder_append_double, java_lang_StringBuilder_append_float,
    java_lang_StringBuilder_append_int, java_lang_StringBuilder_append_long, java_lang_StringBuilder_append_String,
    java_lang_StringBuilder_append_Object, java_lang_StringBuilder_capacityInternal,
    java_lang_StringBuilder_ensureCapacityImpl, java_lang_StringBuilder_lengthInternal,
    java_lang_StringBuilder_toString,

    java_lang_Throwable_fillInStackTrace, java_lang_Throwable_printStackTrace,

    java_io_Writer_write_lStringII, java_io_Writer_write_I, java_io_ByteArrayOutputStream_write,
    java_io_ObjectInputStream_BlockDataInputStream_read,

    java_nio_Bits_copyToByteArray, java_nio_Bits_copyFromByteArray, java_nio_Bits_keepAlive,

    java_nio_HeapByteBuffer_put,

    // routines from the memory Fence library.  See JIT design 1598
    java_util_concurrent_atomic_Fences_postLoadFence, java_util_concurrent_atomic_Fences_preStoreFence,
    java_util_concurrent_atomic_Fences_postStorePreLoadFence,
    // same 3 with java.lang.Object parm
    java_util_concurrent_atomic_Fences_postLoadFence_jlObject,
    java_util_concurrent_atomic_Fences_preStoreFence_jlObject,
    java_util_concurrent_atomic_Fences_postStorePreLoadFence_jlObject,
    // as above, with java.lang.reflect.Field parm
    java_util_concurrent_atomic_Fences_postLoadFence_jlObjectjlrField,
    java_util_concurrent_atomic_Fences_preStoreFence_jlObjectjlrField,
    java_util_concurrent_atomic_Fences_postStorePreLoadFence_jlObjectjlrField,
    // for array element
    java_util_concurrent_atomic_Fences_postLoadFence_jlObjectI,
    java_util_concurrent_atomic_Fences_preStoreFence_jlObjectI,
    java_util_concurrent_atomic_Fences_postStorePreLoadFence_jlObjectI,

    // JSR 166y
    //
    java_util_concurrent_atomic_Fences_orderAccesses, java_util_concurrent_atomic_Fences_orderReads,
    java_util_concurrent_atomic_Fences_orderWrites, java_util_concurrent_atomic_Fences_reachabilityFence,

    java_util_HashMap_all, java_util_ArrayList_all, java_util_Hashtable_all, java_util_concurrent_ConcurrentHashMap_all,
    java_util_Vector_all,

    java_util_Hashtable_get, java_util_Hashtable_put, java_util_Hashtable_clone, java_util_Hashtable_putAll,
    java_util_Hashtable_rehash, java_util_Hashtable_remove, java_util_Hashtable_contains, java_util_Hashtable_getEntry,
    java_util_Hashtable_getEnumeration, java_util_Hashtable_elements, java_util_HashtableHashEnumerator_hasMoreElements,
    java_util_HashtableHashEnumerator_nextElement, java_util_Vector_addElement, java_util_Vector_contains,
    java_util_Vector_subList, java_util_TreeMap_rbInsert, java_util_TreeMap_all,
    java_util_EnumMap_put, // put and putAll
    java_util_EnumMap_typeCheck,
    java_util_EnumMap__init_, // <init> constructors
    java_util_EnumMap__nec_, // other methods
    java_util_TreeMapUnboundedValueIterator_next, java_util_TreeMapSubMap_setLastKey,
    java_util_TreeMapSubMap_setFirstKey, java_util_HashMap_rehash, java_util_HashMap_analyzeMap,
    java_util_HashMap_calculateCapacity, java_util_HashMap_findNullKeyEntry, java_util_HashMap_get,
    java_util_HashMap_getNode, java_util_HashMap_findNonNullKeyEntry, java_util_HashMap_putImpl,
    java_util_HashMap_resize, java_util_HashMapHashIterator_nextNode, java_util_HashMapHashIterator_init,
    java_util_zip_CRC32_update, java_util_zip_CRC32_updateBytes, java_util_zip_CRC32_updateByteBuffer,
    sun_misc_Unsafe_compareAndSwapInt_jlObjectJII_Z, sun_misc_Unsafe_compareAndSwapLong_jlObjectJJJ_Z,
    sun_misc_Unsafe_compareAndSwapObject_jlObjectJjlObjectjlObject_Z,
    sun_misc_Unsafe_compareAndExchangeInt_jlObjectJII_Z, sun_misc_Unsafe_compareAndExchangeLong_jlObjectJJJ_Z,
    sun_misc_Unsafe_compareAndExchangeObject_jlObjectJjlObjectjlObject_Z,

    sun_misc_Unsafe_putBoolean_jlObjectJZ_V, sun_misc_Unsafe_putByte_jlObjectJB_V, sun_misc_Unsafe_putChar_jlObjectJC_V,
    sun_misc_Unsafe_putShort_jlObjectJS_V, sun_misc_Unsafe_putInt_jlObjectJI_V, sun_misc_Unsafe_putLong_jlObjectJJ_V,
    sun_misc_Unsafe_putFloat_jlObjectJF_V, sun_misc_Unsafe_putDouble_jlObjectJD_V,
    sun_misc_Unsafe_putObject_jlObjectJjlObject_V,

    sun_misc_Unsafe_putInt_jlObjectII_V,

    sun_misc_Unsafe_putBooleanVolatile_jlObjectJZ_V, sun_misc_Unsafe_putByteVolatile_jlObjectJB_V,
    sun_misc_Unsafe_putCharVolatile_jlObjectJC_V, sun_misc_Unsafe_putShortVolatile_jlObjectJS_V,
    sun_misc_Unsafe_putIntVolatile_jlObjectJI_V, sun_misc_Unsafe_putLongVolatile_jlObjectJJ_V,
    sun_misc_Unsafe_putFloatVolatile_jlObjectJF_V, sun_misc_Unsafe_putDoubleVolatile_jlObjectJD_V,
    sun_misc_Unsafe_putObjectVolatile_jlObjectJjlObject_V,

    sun_misc_Unsafe_getBoolean_jlObjectJ_Z, sun_misc_Unsafe_getByte_jlObjectJ_B, sun_misc_Unsafe_getChar_jlObjectJ_C,
    sun_misc_Unsafe_getShort_jlObjectJ_S, sun_misc_Unsafe_getInt_jlObjectJ_I, sun_misc_Unsafe_getLong_jlObjectJ_J,
    sun_misc_Unsafe_getFloat_jlObjectJ_F, sun_misc_Unsafe_getDouble_jlObjectJ_D,
    sun_misc_Unsafe_getObject_jlObjectJ_jlObject,

    sun_misc_Unsafe_getBooleanVolatile_jlObjectJ_Z, sun_misc_Unsafe_getByteVolatile_jlObjectJ_B,
    sun_misc_Unsafe_getCharVolatile_jlObjectJ_C, sun_misc_Unsafe_getShortVolatile_jlObjectJ_S,
    sun_misc_Unsafe_getIntVolatile_jlObjectJ_I, sun_misc_Unsafe_getLongVolatile_jlObjectJ_J,
    sun_misc_Unsafe_getFloatVolatile_jlObjectJ_F, sun_misc_Unsafe_getDoubleVolatile_jlObjectJ_D,
    sun_misc_Unsafe_getObjectVolatile_jlObjectJ_jlObject,

    sun_misc_Unsafe_putByte_JB_V, sun_misc_Unsafe_putShort_JS_V, sun_misc_Unsafe_putChar_JC_V,
    sun_misc_Unsafe_putInt_JI_V, sun_misc_Unsafe_putLong_JJ_V, sun_misc_Unsafe_putFloat_JF_V,
    sun_misc_Unsafe_putDouble_JD_V, sun_misc_Unsafe_putAddress_JJ_V,

    sun_misc_Unsafe_getByte_J_B, sun_misc_Unsafe_getShort_J_S, sun_misc_Unsafe_getChar_J_C, sun_misc_Unsafe_getInt_J_I,
    sun_misc_Unsafe_getLong_J_J, sun_misc_Unsafe_getFloat_J_F, sun_misc_Unsafe_getDouble_J_D,
    sun_misc_Unsafe_getAddress_J_J,

    sun_misc_Unsafe_staticFieldBase, sun_misc_Unsafe_staticFieldOffset, sun_misc_Unsafe_objectFieldOffset,
    sun_misc_Unsafe_getAndAddInt, sun_misc_Unsafe_getAndSetInt, sun_misc_Unsafe_getAndAddLong,
    sun_misc_Unsafe_getAndSetLong,

    sun_misc_Unsafe_putBooleanOrdered_jlObjectJZ_V, sun_misc_Unsafe_putByteOrdered_jlObjectJB_V,
    sun_misc_Unsafe_putCharOrdered_jlObjectJC_V, sun_misc_Unsafe_putShortOrdered_jlObjectJS_V,
    sun_misc_Unsafe_putIntOrdered_jlObjectJI_V, sun_misc_Unsafe_putLongOrdered_jlObjectJJ_V,
    sun_misc_Unsafe_putFloatOrdered_jlObjectJF_V, sun_misc_Unsafe_putDoubleOrdered_jlObjectJD_V,
    sun_misc_Unsafe_putObjectOrdered_jlObjectJjlObject_V,

    sun_misc_Unsafe_monitorEnter_jlObject_V, sun_misc_Unsafe_monitorExit_jlObject_V,
    sun_misc_Unsafe_tryMonitorEnter_jlObject_Z,

    sun_misc_Unsafe_copyMemory, sun_misc_Unsafe_setMemory,

    sun_misc_Unsafe_loadFence, sun_misc_Unsafe_storeFence, sun_misc_Unsafe_fullFence,

    sun_misc_Unsafe_ensureClassInitialized,

    java_lang_reflect_Array_getLength, java_util_Arrays_fill, java_util_Arrays_equals, java_lang_String_equals,
    sun_io_ByteToCharSingleByte_convert, sun_io_CharToByteSingleByte_convert, sun_io_ByteToCharDBCS_EBCDIC_convert,
    sun_io_ByteToCharSingleByte_JITintrinsicConvert, sun_nio_cs_ISO_8859_1_Encoder_encodeArrayLoop,
    sun_nio_cs_ISO_8859_1_Encoder_encodeISOArray, sun_nio_cs_ISO_8859_1_Decoder_decodeISO8859_1,
    sun_nio_cs_US_ASCII_Encoder_encodeASCII, sun_nio_cs_US_ASCII_Decoder_decodeASCII,
    sun_nio_cs_ext_SBCS_Encoder_encodeSBCS, sun_nio_cs_ext_SBCS_Decoder_decodeSBCS,
    sun_nio_cs_UTF_8_Decoder_decodeUTF_8, sun_nio_cs_UTF_8_Encoder_encodeUTF_8,
    sun_nio_cs_ext_IBM1388_Encoder_encodeArrayLoop,

    sun_nio_cs_UTF_16_Encoder_encodeUTF16Big, sun_nio_cs_UTF_16_Encoder_encodeUTF16Little,
    com_ibm_jit_JITHelpers_transformedEncodeUTF16Big, com_ibm_jit_JITHelpers_transformedEncodeUTF16Little,

    java_lang_Integer_bitCount, java_lang_Integer_highestOneBit, java_lang_Integer_lowestOneBit,
    java_lang_Integer_numberOfLeadingZeros, java_lang_Integer_numberOfTrailingZeros, java_lang_Integer_reverseBytes,
    java_lang_Integer_rotateLeft, java_lang_Integer_rotateRight, java_lang_Integer_valueOf,
    java_lang_Integer_toUnsignedLong, java_lang_Long_bitCount, java_lang_Long_lowestOneBit,
    java_lang_Long_highestOneBit, java_lang_Long_numberOfLeadingZeros, java_lang_Long_numberOfTrailingZeros,
    java_lang_Long_reverseBytes, java_lang_Long_rotateLeft, java_lang_Long_rotateRight, java_lang_Short_reverseBytes,

    java_math_BigDecimal_add, java_math_BigDecimal_clone, java_math_BigDecimal_subtract, java_math_BigDecimal_multiply,
    java_math_BigDecimal_valueOf, java_math_BigDecimal_valueOf_J, java_math_BigDecimal_setScale,
    java_math_BigDecimal_longString1, java_math_BigDecimal_longAdd, java_math_BigDecimal_slAdd,
    java_math_BigDecimal_longString1C, java_math_BigDecimal_longString2, java_math_BigDecimal_toString,
    java_math_BigDecimal_doToString, java_math_BigDecimal_slowSubMulAddAddMulSetScale,
    java_math_BigDecimal_slowSubMulSetScale, java_math_BigDecimal_slowAddAddMulSetScale,
    java_math_BigDecimal_slowMulSetScale, java_math_BigDecimal_subMulAddAddMulSetScale,
    java_math_BigDecimal_subMulSetScale, java_math_BigDecimal_addAddMulSetScale, java_math_BigDecimal_mulSetScale,
    java_math_BigDecimal_noLLOverflowAdd, java_math_BigDecimal_noLLOverflowMul, java_math_BigDecimal_getLaside,
    java_math_BigDecimal_DFPPerformHysteresis, java_math_BigDecimal_DFPUseDFP, java_math_BigDecimal_DFPHWAvailable,
    java_math_BigDecimal_DFPIntConstructor, java_math_BigDecimal_DFPLongConstructor,
    java_math_BigDecimal_DFPLongExpConstructor, java_math_BigDecimal_DFPAdd, java_math_BigDecimal_DFPSubtract,
    java_math_BigDecimal_DFPMultiply, java_math_BigDecimal_DFPDivide, java_math_BigDecimal_DFPScaledAdd,
    java_math_BigDecimal_DFPScaledSubtract, java_math_BigDecimal_DFPScaledMultiply,
    java_math_BigDecimal_DFPScaledDivide, java_math_BigDecimal_DFPRound, java_math_BigDecimal_DFPSetScale,
    java_math_BigDecimal_DFPCompareTo, java_math_BigDecimal_DFPSignificance, java_math_BigDecimal_DFPExponent,
    java_math_BigDecimal_DFPBCDDigits, java_math_BigDecimal_DFPUnscaledValue,
    java_math_BigDecimal_DFPConvertPackedToDFP, java_math_BigDecimal_DFPConvertDFPToPacked,
    java_math_BigDecimal_DFPGetHWAvailable, java_math_BigDecimal_floatValue, java_math_BigDecimal_doubleValue,
    java_math_BigDecimal_possibleClone, java_math_BigDecimal_storeTwoCharsFromInt,

    // inline method
    com_ibm_dataaccess_ByteArrayMarshaller_writeInt_, com_ibm_dataaccess_ByteArrayMarshaller_writeIntLength_,
    com_ibm_dataaccess_ByteArrayMarshaller_writeLong_, com_ibm_dataaccess_ByteArrayMarshaller_writeLongLength_,
    com_ibm_dataaccess_ByteArrayMarshaller_writeShort_, com_ibm_dataaccess_ByteArrayMarshaller_writeShortLength_,
    com_ibm_dataaccess_ByteArrayMarshaller_writeFloat_, com_ibm_dataaccess_ByteArrayMarshaller_writeDouble_,

    // wrapper method
    com_ibm_dataaccess_ByteArrayMarshaller_writeInt, com_ibm_dataaccess_ByteArrayMarshaller_writeIntLength,
    com_ibm_dataaccess_ByteArrayMarshaller_writeLong, com_ibm_dataaccess_ByteArrayMarshaller_writeLongLength,
    com_ibm_dataaccess_ByteArrayMarshaller_writeShort, com_ibm_dataaccess_ByteArrayMarshaller_writeShortLength,
    com_ibm_dataaccess_ByteArrayMarshaller_writeFloat, com_ibm_dataaccess_ByteArrayMarshaller_writeDouble,

    // inline method
    com_ibm_dataaccess_ByteArrayUnmarshaller_readInt_, com_ibm_dataaccess_ByteArrayUnmarshaller_readIntLength_,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readLong_, com_ibm_dataaccess_ByteArrayUnmarshaller_readLongLength_,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readShort_, com_ibm_dataaccess_ByteArrayUnmarshaller_readShortLength_,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readFloat_, com_ibm_dataaccess_ByteArrayUnmarshaller_readDouble_,

    // wrapper method
    com_ibm_dataaccess_ByteArrayUnmarshaller_readInt, com_ibm_dataaccess_ByteArrayUnmarshaller_readIntLength,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readLong, com_ibm_dataaccess_ByteArrayUnmarshaller_readLongLength,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readShort, com_ibm_dataaccess_ByteArrayUnmarshaller_readShortLength,
    com_ibm_dataaccess_ByteArrayUnmarshaller_readFloat, com_ibm_dataaccess_ByteArrayUnmarshaller_readDouble,

    // Java wrapper method
    com_ibm_dataaccess_ByteArrayUtils_trailingZeros,
    // Java method
    com_ibm_dataaccess_ByteArrayUtils_trailingZerosByteAtATime,
    // recognized inline asm method
    com_ibm_dataaccess_ByteArrayUtils_trailingZerosQuadWordAtATime_,

    // wrapper method
    com_ibm_dataaccess_DecimalData_convertIntegerToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertIntegerToPackedDecimal_ByteBuffer,
    com_ibm_dataaccess_DecimalData_convertLongToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertLongToPackedDecimal_ByteBuffer,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToInteger,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToInteger_ByteBuffer,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToLong,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToLong_ByteBuffer,

    com_ibm_dataaccess_DecimalData_JITIntrinsicsEnabled,

    // inline method
    com_ibm_dataaccess_DecimalData_convertIntegerToPackedDecimal_,
    com_ibm_dataaccess_DecimalData_convertIntegerToPackedDecimal_ByteBuffer_,
    com_ibm_dataaccess_DecimalData_convertLongToPackedDecimal_,
    com_ibm_dataaccess_DecimalData_convertLongToPackedDecimal_ByteBuffer_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToInteger_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToInteger_ByteBuffer_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToLong_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToLong_ByteBuffer_,

    com_ibm_dataaccess_DecimalData_convertExternalDecimalToLong,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToLong,
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToInteger,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToInteger,
    com_ibm_dataaccess_DecimalData_convertLongToExternalDecimal,
    com_ibm_dataaccess_DecimalData_convertLongToUnicodeDecimal,
    com_ibm_dataaccess_DecimalData_convertIntegerToExternalDecimal,
    com_ibm_dataaccess_DecimalData_convertIntegerToUnicodeDecimal,

    // wrapper method
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToExternalDecimal,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToUnicodeDecimal,

    // inline method
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToPackedDecimal_,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToPackedDecimal_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToExternalDecimal_,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToUnicodeDecimal_,

    com_ibm_dataaccess_DecimalData_convertExternalDecimalToLong_,
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToInteger_,

    com_ibm_dataaccess_DecimalData_convertIntegerToExternalDecimal_,
    com_ibm_dataaccess_DecimalData_convertLongToExternalDecimal_,

    com_ibm_dataaccess_DecimalData_translateArray, com_ibm_dataaccess_DecimalData_slowSignedPackedToBigDecimal,
    com_ibm_dataaccess_DecimalData_slowBigDecimalToSignedPacked,

    com_ibm_dataaccess_DecimalData_convertPackedDecimalToBigInteger,
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToBigInteger,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToBigInteger,
    com_ibm_dataaccess_DecimalData_convertPackedDecimalToBigDecimal,
    com_ibm_dataaccess_DecimalData_convertExternalDecimalToBigDecimal,
    com_ibm_dataaccess_DecimalData_convertUnicodeDecimalToBigDecimal,
    com_ibm_dataaccess_DecimalData_convertBigDecimalToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertBigDecimalToExternalDecimal,
    com_ibm_dataaccess_DecimalData_convertBigDecimalToUnicodeDecimal,
    com_ibm_dataaccess_DecimalData_convertBigIntegerToPackedDecimal,
    com_ibm_dataaccess_DecimalData_convertBigIntegerToExternalDecimal,
    com_ibm_dataaccess_DecimalData_convertBigIntegerToUnicodeDecimal,

    // wrapper methods
    com_ibm_dataaccess_PackedDecimal_addPackedDecimal, com_ibm_dataaccess_PackedDecimal_dividePackedDecimal,
    com_ibm_dataaccess_PackedDecimal_multiplyPackedDecimal, com_ibm_dataaccess_PackedDecimal_subtractPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_remainderPackedDecimal, com_ibm_dataaccess_PackedDecimal_equalsPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_notEqualsPackedDecimal, com_ibm_dataaccess_PackedDecimal_greaterThanPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_greaterThanOrEqualsPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_lessThanPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_lessThanOrEqualsPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_shiftLeftPackedDecimal, com_ibm_dataaccess_PackedDecimal_shiftRightPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_movePackedDecimal, com_ibm_dataaccess_PackedDecimal_checkPackedDecimal,
    com_ibm_dataaccess_PackedDecimal_checkPackedDecimal_2bInlined2,
    com_ibm_dataaccess_PackedDecimal_checkPackedDecimal_2bInlined1,

    // inline methods
    com_ibm_dataaccess_PackedDecimal_addPackedDecimal_, com_ibm_dataaccess_PackedDecimal_dividePackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_multiplyPackedDecimal_, com_ibm_dataaccess_PackedDecimal_subtractPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_remainderPackedDecimal_, com_ibm_dataaccess_PackedDecimal_equalsPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_notEqualsPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_greaterThanPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_greaterThanOrEqualsPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_lessThanPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_lessThanOrEqualsPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_shiftLeftPackedDecimal_, com_ibm_dataaccess_PackedDecimal_shiftRightPackedDecimal_,
    com_ibm_dataaccess_PackedDecimal_movePackedDecimal_, com_ibm_dataaccess_PackedDecimal_checkPackedDecimal_,

    com_ibm_dataaccess_DecimalData_DFPFacilityAvailable, com_ibm_dataaccess_DecimalData_DFPUseDFP,
    com_ibm_dataaccess_DecimalData_DFPConvertPackedToDFP, com_ibm_dataaccess_DecimalData_DFPConvertDFPToPacked,
    com_ibm_dataaccess_DecimalData_createZeroBigDecimal, com_ibm_dataaccess_DecimalData_getlaside,
    com_ibm_dataaccess_DecimalData_setlaside, com_ibm_dataaccess_DecimalData_getflags,
    com_ibm_dataaccess_DecimalData_setflags,

    com_ibm_Compiler_Internal__TR_Prefetch,

    com_ibm_Compiler_Internal_Quad_enableQuadOptimization, com_ibm_Compiler_Internal_Quad_add_ql,
    com_ibm_Compiler_Internal_Quad_add_ll, com_ibm_Compiler_Internal_Quad_sub_ql, com_ibm_Compiler_Internal_Quad_sub_ll,
    com_ibm_Compiler_Internal_Quad_mul_ll, com_ibm_Compiler_Internal_Quad_hi, com_ibm_Compiler_Internal_Quad_lo,

    com_ibm_jit_JITHelpers_is32Bit, com_ibm_jit_JITHelpers_isArray, com_ibm_jit_JITHelpers_intrinsicIndexOfStringLatin1,
    com_ibm_jit_JITHelpers_intrinsicIndexOfStringUTF16, com_ibm_jit_JITHelpers_intrinsicIndexOfLatin1,
    com_ibm_jit_JITHelpers_intrinsicIndexOfUTF16, com_ibm_jit_JITHelpers_getJ9ClassFromObject32,
    com_ibm_jit_JITHelpers_getJ9ClassFromObject64, com_ibm_jit_JITHelpers_getNumBitsInReferenceField,
    com_ibm_jit_JITHelpers_getNumBytesInReferenceField, com_ibm_jit_JITHelpers_getNumBitsInDescriptionWord,
    com_ibm_jit_JITHelpers_getNumBytesInDescriptionWord, com_ibm_jit_JITHelpers_getNumBytesInJ9ObjectHeader,
    com_ibm_jit_JITHelpers_getInstanceDescriptionFromJ9Class32, com_ibm_jit_JITHelpers_getDescriptionWordFromPtr32,
    com_ibm_jit_JITHelpers_getInstanceDescriptionFromJ9Class64, com_ibm_jit_JITHelpers_getDescriptionWordFromPtr64,
    com_ibm_jit_JITHelpers_getJ9ClassFromClass32, com_ibm_jit_JITHelpers_getJ9ClassFromClass64,
    com_ibm_jit_JITHelpers_getBackfillOffsetFromJ9Class32, com_ibm_jit_JITHelpers_getBackfillOffsetFromJ9Class64,
    com_ibm_jit_JITHelpers_getRomClassFromJ9Class32, com_ibm_jit_JITHelpers_getRomClassFromJ9Class64,
    com_ibm_jit_JITHelpers_getArrayShapeFromRomClass32, com_ibm_jit_JITHelpers_getArrayShapeFromRomClass64,
    com_ibm_jit_JITHelpers_getSuperClassesFromJ9Class32, com_ibm_jit_JITHelpers_getSuperClassesFromJ9Class64,
    com_ibm_jit_JITHelpers_getClassDepthAndFlagsFromJ9Class32,
    com_ibm_jit_JITHelpers_getClassDepthAndFlagsFromJ9Class64, com_ibm_jit_JITHelpers_getClassFlagsFromJ9Class32,
    com_ibm_jit_JITHelpers_getClassFlagsFromJ9Class64, com_ibm_jit_JITHelpers_getModifiersFromRomClass32,
    com_ibm_jit_JITHelpers_getModifiersFromRomClass64, com_ibm_jit_JITHelpers_getClassFromJ9Class32,
    com_ibm_jit_JITHelpers_getClassFromJ9Class64, com_ibm_jit_JITHelpers_getAddressAsPrimitive32,
    com_ibm_jit_JITHelpers_getAddressAsPrimitive64, com_ibm_jit_JITHelpers_optimizedClone,
    com_ibm_jit_JITHelpers_getSuperclass, com_ibm_jit_JITHelpers_getPackedDataSizeFromJ9Class32,
    com_ibm_jit_JITHelpers_getPackedDataSizeFromJ9Class64, com_ibm_jit_JITHelpers_getComponentTypeFromJ9Class32,
    com_ibm_jit_JITHelpers_getComponentTypeFromJ9Class64,

    com_ibm_jit_JITHelpers_getIntFromObject, com_ibm_jit_JITHelpers_getIntFromObjectVolatile,
    com_ibm_jit_JITHelpers_getLongFromObject, com_ibm_jit_JITHelpers_getLongFromObjectVolatile,
    com_ibm_jit_JITHelpers_getObjectFromObject, com_ibm_jit_JITHelpers_getObjectFromObjectVolatile,
    com_ibm_jit_JITHelpers_putIntInObject, com_ibm_jit_JITHelpers_putIntInObjectVolatile,
    com_ibm_jit_JITHelpers_putLongInObject, com_ibm_jit_JITHelpers_putLongInObjectVolatile,
    com_ibm_jit_JITHelpers_putObjectInObject, com_ibm_jit_JITHelpers_putObjectInObjectVolatile,
    com_ibm_jit_JITHelpers_compareAndSwapIntInObject, com_ibm_jit_JITHelpers_compareAndSwapLongInObject,
    com_ibm_jit_JITHelpers_compareAndSwapObjectInObject, com_ibm_jit_JITHelpers_getByteFromArray,
    com_ibm_jit_JITHelpers_getByteFromArrayByIndex, com_ibm_jit_JITHelpers_getByteFromArrayVolatile,
    com_ibm_jit_JITHelpers_getCharFromArray, com_ibm_jit_JITHelpers_getCharFromArrayByIndex,
    com_ibm_jit_JITHelpers_getCharFromArrayVolatile, com_ibm_jit_JITHelpers_getIntFromArray,
    com_ibm_jit_JITHelpers_getIntFromArrayVolatile, com_ibm_jit_JITHelpers_getLongFromArray,
    com_ibm_jit_JITHelpers_getLongFromArrayVolatile, com_ibm_jit_JITHelpers_getObjectFromArray,
    com_ibm_jit_JITHelpers_getObjectFromArrayVolatile, com_ibm_jit_JITHelpers_putByteInArray,
    com_ibm_jit_JITHelpers_putByteInArrayByIndex, com_ibm_jit_JITHelpers_putByteInArrayVolatile,
    com_ibm_jit_JITHelpers_putCharInArray, com_ibm_jit_JITHelpers_putCharInArrayByIndex,
    com_ibm_jit_JITHelpers_putCharInArrayVolatile, com_ibm_jit_JITHelpers_putIntInArray,
    com_ibm_jit_JITHelpers_putIntInArrayVolatile, com_ibm_jit_JITHelpers_putLongInArray,
    com_ibm_jit_JITHelpers_putLongInArrayVolatile, com_ibm_jit_JITHelpers_putObjectInArray,
    com_ibm_jit_JITHelpers_putObjectInArrayVolatile, com_ibm_jit_JITHelpers_compareAndSwapIntInArray,
    com_ibm_jit_JITHelpers_compareAndSwapLongInArray, com_ibm_jit_JITHelpers_compareAndSwapObjectInArray,
    com_ibm_jit_JITHelpers_byteToCharUnsigned, com_ibm_jit_JITHelpers_acmplt, com_ibm_jit_JITHelpers_jitHelpers,
    com_ibm_jit_JITHelpers_getClassInitializeStatus,

    com_ibm_jit_DecimalFormatHelper_formatAsDouble, com_ibm_jit_DecimalFormatHelper_formatAsFloat,

    com_ibm_oti_vm_ORBVMHelpers_is32Bit, com_ibm_oti_vm_ORBVMHelpers_getNumBitsInReferenceField,
    com_ibm_oti_vm_ORBVMHelpers_getNumBytesInReferenceField, com_ibm_oti_vm_ORBVMHelpers_getNumBitsInDescriptionWord,
    com_ibm_oti_vm_ORBVMHelpers_getNumBytesInDescriptionWord, com_ibm_oti_vm_ORBVMHelpers_getNumBytesInJ9ObjectHeader,
    com_ibm_oti_vm_ORBVMHelpers_getJ9ClassFromClass32, com_ibm_oti_vm_ORBVMHelpers_getInstanceShapeFromJ9Class32,
    com_ibm_oti_vm_ORBVMHelpers_getInstanceDescriptionFromJ9Class32,
    com_ibm_oti_vm_ORBVMHelpers_getDescriptionWordFromPtr32, com_ibm_oti_vm_ORBVMHelpers_getJ9ClassFromClass64,
    com_ibm_oti_vm_ORBVMHelpers_getInstanceShapeFromJ9Class64,
    com_ibm_oti_vm_ORBVMHelpers_getInstanceDescriptionFromJ9Class64,
    com_ibm_oti_vm_ORBVMHelpers_getDescriptionWordFromPtr64, com_ibm_rmi_io_FastPathForCollocated_isVMDeepCopySupported,

    com_ibm_ws_webcontainer_channel_WCCByteBufferOutputStream_printUnencoded,

    java_math_BigInteger_add, java_math_BigInteger_subtract, java_math_BigInteger_multiply,

    java_text_NumberFormat_format,

    /* recognize the native subset of StrictMath */
    java_lang_StrictMath_acos, java_lang_StrictMath_asin, java_lang_StrictMath_atan, java_lang_StrictMath_atan2,
    java_lang_StrictMath_cbrt, java_lang_StrictMath_ceil, java_lang_StrictMath_copySign_F,
    java_lang_StrictMath_copySign_D, java_lang_StrictMath_cos, java_lang_StrictMath_cosh, java_lang_StrictMath_exp,
    java_lang_StrictMath_expm1, java_lang_StrictMath_floor, java_lang_StrictMath_hypot,
    java_lang_StrictMath_IEEEremainder, java_lang_StrictMath_log, java_lang_StrictMath_log10,
    java_lang_StrictMath_log1p, java_lang_StrictMath_max_F, java_lang_StrictMath_max_D, java_lang_StrictMath_min_F,
    java_lang_StrictMath_min_D, java_lang_StrictMath_nextAfter_F, java_lang_StrictMath_nextAfter_D,
    java_lang_StrictMath_pow, java_lang_StrictMath_random, java_lang_StrictMath_rint, java_lang_StrictMath_round_F,
    java_lang_StrictMath_round_D, java_lang_StrictMath_scalb_F, java_lang_StrictMath_scalb_D, java_lang_StrictMath_sin,
    java_lang_StrictMath_sinh, java_lang_StrictMath_sqrt, java_lang_StrictMath_tan, java_lang_StrictMath_tanh,

    // 1421 atomic methods
    java_util_concurrent_atomic_AtomicBoolean_getAndSet, java_util_concurrent_atomic_AtomicInteger_getAndAdd,
    java_util_concurrent_atomic_AtomicInteger_getAndIncrement,
    java_util_concurrent_atomic_AtomicInteger_getAndDecrement, java_util_concurrent_atomic_AtomicInteger_getAndSet,
    java_util_concurrent_atomic_AtomicInteger_addAndGet, java_util_concurrent_atomic_AtomicInteger_incrementAndGet,
    java_util_concurrent_atomic_AtomicInteger_decrementAndGet, java_util_concurrent_atomic_AtomicLong_addAndGet,
    java_util_concurrent_atomic_AtomicLong_decrementAndGet, java_util_concurrent_atomic_AtomicLong_getAndAdd,
    java_util_concurrent_atomic_AtomicLong_getAndDecrement, java_util_concurrent_atomic_AtomicLong_getAndIncrement,
    java_util_concurrent_atomic_AtomicLong_getAndSet, java_util_concurrent_atomic_AtomicLong_incrementAndGet,
    java_util_concurrent_atomic_AtomicReference_getAndSet,

    java_util_concurrent_atomic_AtomicIntegerArray_getAndAdd,
    java_util_concurrent_atomic_AtomicIntegerArray_getAndIncrement,
    java_util_concurrent_atomic_AtomicIntegerArray_getAndDecrement,
    java_util_concurrent_atomic_AtomicIntegerArray_getAndSet, java_util_concurrent_atomic_AtomicIntegerArray_addAndGet,
    java_util_concurrent_atomic_AtomicIntegerArray_incrementAndGet,
    java_util_concurrent_atomic_AtomicIntegerArray_decrementAndGet,
    java_util_concurrent_atomic_AtomicLongArray_addAndGet, java_util_concurrent_atomic_AtomicLongArray_decrementAndGet,
    java_util_concurrent_atomic_AtomicLongArray_getAndAdd, java_util_concurrent_atomic_AtomicLongArray_getAndDecrement,
    java_util_concurrent_atomic_AtomicLongArray_getAndIncrement, java_util_concurrent_atomic_AtomicLongArray_getAndSet,
    java_util_concurrent_atomic_AtomicLongArray_incrementAndGet,
    java_util_concurrent_atomic_AtomicReferenceArray_getAndSet,

    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_getAndAdd,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_getAndIncrement,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_getAndDecrement,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_getAndSet,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_addAndGet,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_incrementAndGet,
    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_decrementAndGet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_addAndGet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_decrementAndGet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_getAndAdd,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_getAndDecrement,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_getAndIncrement,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_getAndSet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_incrementAndGet,
    java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet,

    java_util_concurrent_atomic_AtomicInteger_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicLong_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicReference_weakCompareAndSet,

    java_util_concurrent_atomic_AtomicInteger_lazySet, java_util_concurrent_atomic_AtomicLong_lazySet,
    java_util_concurrent_atomic_AtomicReference_lazySet,

    java_util_concurrent_atomic_AtomicIntegerArray_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicLongArray_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicReferenceArray_weakCompareAndSet,

    java_util_concurrent_atomic_AtomicIntegerArray_lazySet, java_util_concurrent_atomic_AtomicLongArray_lazySet,
    java_util_concurrent_atomic_AtomicReferenceArray_lazySet,

    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_weakCompareAndSet,
    java_util_concurrent_atomic_AtomicReferenceFieldUpdater_weakCompareAndSet,

    java_util_concurrent_atomic_AtomicIntegerFieldUpdater_lazySet,
    java_util_concurrent_atomic_AtomicLongFieldUpdater_lazySet,
    java_util_concurrent_atomic_AtomicReferenceFieldUpdater_lazySet,

    java_util_concurrent_ConcurrentHashMap_addCount, java_util_concurrent_ConcurrentHashMap_tryPresize,
    java_util_concurrent_ConcurrentHashMap_transfer, java_util_concurrent_ConcurrentHashMap_fullAddCount,
    java_util_concurrent_ConcurrentHashMap_helpTransfer, java_util_concurrent_ConcurrentHashMap_initTable,
    java_util_concurrent_ConcurrentHashMap_tabAt, java_util_concurrent_ConcurrentHashMap_casTabAt,
    java_util_concurrent_ConcurrentHashMap_setTabAt,

    java_util_concurrent_ConcurrentHashMap_TreeBin_lockRoot,
    java_util_concurrent_ConcurrentHashMap_TreeBin_contendedLock, java_util_concurrent_ConcurrentHashMap_TreeBin_find,

    java_util_concurrent_ConcurrentLinkedQueue_tmOffer, java_util_concurrent_ConcurrentLinkedQueue_tmPoll,
    java_util_concurrent_ConcurrentLinkedQueue_tmEnabled,

    wcode_ppc_dcbt, wcode_ppc_dcbz, x10JITHelpers_speculateIndex, x10JITHelpers_getCPU, x10JITHelpers_noBoundsCheck,
    x10JITHelpers_noNullCheck, x10JITHelpers_noCastCheck, x10JITHelpers_checkLowBounds, x10JITHelpers_checkHighBounds,

    // JSR292
    java_lang_invoke_ArgumentMoverHandle_permuteArgs, java_lang_invoke_AsTypeHandle_convertArgs,
    java_lang_invoke_CatchHandle_numCatchTargetArgsToPassThrough, java_lang_invoke_CollectHandle_numArgsToCollect,
    java_lang_invoke_CollectHandle_numArgsToPassThrough, java_lang_invoke_CollectHandle_collectionStart,
    java_lang_invoke_CollectHandle_numArgsAfterCollectArray, java_lang_invoke_ComputedCalls_dispatchDirect,
    java_lang_invoke_ComputedCalls_dispatchJ9Method, java_lang_invoke_ComputedCalls_dispatchVirtual,
    java_lang_invoke_DirectHandle_compiledEntryPoint, java_lang_invoke_DirectHandle_nullCheckIfRequired,
    java_lang_invoke_DirectHandle_directCall, java_lang_invoke_DirectHandle_invokeExact,
    java_lang_invoke_DirectHandle_isAlreadyCompiled, java_lang_invoke_ExplicitCastHandle_convertArgs,
    java_lang_invoke_FilterArgumentsHandle_filterArguments, java_lang_invoke_FilterArgumentsHandle_numArgsToFilter,
    java_lang_invoke_FilterArgumentsHandle_numPrefixArgs, java_lang_invoke_FilterArgumentsHandle_numSuffixArgs,
    java_lang_invoke_FinallyHandle_numFinallyTargetArgsToPassThrough, java_lang_invoke_FoldHandle_argIndices,
    java_lang_invoke_FoldHandle_argumentsForCombiner, java_lang_invoke_FoldHandle_foldPosition,
    java_lang_invoke_GuardWithTestHandle_numGuardArgs, java_lang_invoke_ILGenMacros_arrayElements,
    java_lang_invoke_ILGenMacros_arrayLength, java_lang_invoke_ILGenMacros_dropFirstN,
    java_lang_invoke_ILGenMacros_first, java_lang_invoke_ILGenMacros_firstN, java_lang_invoke_ILGenMacros_getField,
    java_lang_invoke_ILGenMacros_invokeExact, java_lang_invoke_ILGenMacros_invokeExactAndFixup,
    java_lang_invoke_ILGenMacros_invokeExact_X, java_lang_invoke_ILGenMacros_isCustomThunk,
    java_lang_invoke_ILGenMacros_isShareableThunk, java_lang_invoke_ILGenMacros_last,
    java_lang_invoke_ILGenMacros_lastN, java_lang_invoke_ILGenMacros_middleN, java_lang_invoke_ILGenMacros_numArguments,
    java_lang_invoke_ILGenMacros_parameterCount, java_lang_invoke_ILGenMacros_placeholder,
    java_lang_invoke_ILGenMacros_pop, java_lang_invoke_ILGenMacros_populateArray, java_lang_invoke_ILGenMacros_push,
    java_lang_invoke_ILGenMacros_rawNew, java_lang_invoke_ILGenMacros_typeCheck,
    java_lang_invoke_InsertHandle_numPrefixArgs, java_lang_invoke_InsertHandle_numSuffixArgs,
    java_lang_invoke_InsertHandle_numValuesToInsert, java_lang_invoke_InterfaceHandle_interfaceCall,
    java_lang_invoke_InterfaceHandle_invokeExact, java_lang_invoke_MethodHandle_doCustomizationLogic,
    java_lang_invoke_MethodHandle_asType, java_lang_invoke_MethodHandle_asType_instance,
    java_lang_invoke_MethodHandle_invoke, java_lang_invoke_MethodHandle_invokeExact,
    java_lang_invoke_MethodHandle_invokeExactTargetAddress, java_lang_invoke_MethodHandle_invokeWithArgumentsHelper,
    java_lang_invoke_MethodHandles_getStackClass, java_lang_invoke_MethodHandle_undoCustomizationLogic,
    java_lang_invoke_PrimitiveHandle_initializeClassIfRequired, java_lang_invoke_MutableCallSite_getTarget,
    java_lang_invoke_PermuteHandle_permuteArgs, java_lang_invoke_SpreadHandle_arrayArg,
    java_lang_invoke_SpreadHandle_numArgsToPassThrough, java_lang_invoke_SpreadHandle_numArgsToSpread,
    java_lang_invoke_SpreadHandle_numArgsAfterSpreadArray, java_lang_invoke_SpreadHandle_spreadStart,
    java_lang_invoke_VarHandle_get, java_lang_invoke_VarHandle_set, java_lang_invoke_VarHandle_getVolatile,
    java_lang_invoke_VarHandle_setVolatile, java_lang_invoke_VarHandle_getOpaque, java_lang_invoke_VarHandle_setOpaque,
    java_lang_invoke_VarHandle_getAcquire, java_lang_invoke_VarHandle_setRelease,
    java_lang_invoke_VarHandle_compareAndSet, java_lang_invoke_VarHandle_compareAndExchange,
    java_lang_invoke_VarHandle_compareAndExchangeAcquire, java_lang_invoke_VarHandle_compareAndExchangeRelease,
    java_lang_invoke_VarHandle_weakCompareAndSet, java_lang_invoke_VarHandle_weakCompareAndSetAcquire,
    java_lang_invoke_VarHandle_weakCompareAndSetRelease, java_lang_invoke_VarHandle_weakCompareAndSetPlain,
    java_lang_invoke_VarHandle_getAndSet, java_lang_invoke_VarHandle_getAndSetAcquire,
    java_lang_invoke_VarHandle_getAndSetRelease, java_lang_invoke_VarHandle_getAndAdd,
    java_lang_invoke_VarHandle_getAndAddAcquire, java_lang_invoke_VarHandle_getAndAddRelease,
    java_lang_invoke_VarHandle_getAndBitwiseAnd, java_lang_invoke_VarHandle_getAndBitwiseAndAcquire,
    java_lang_invoke_VarHandle_getAndBitwiseAndRelease, java_lang_invoke_VarHandle_getAndBitwiseOr,
    java_lang_invoke_VarHandle_getAndBitwiseOrAcquire, java_lang_invoke_VarHandle_getAndBitwiseOrRelease,
    java_lang_invoke_VarHandle_getAndBitwiseXor, java_lang_invoke_VarHandle_getAndBitwiseXorAcquire,
    java_lang_invoke_VarHandle_getAndBitwiseXorRelease,
    java_lang_invoke_ArrayVarHandle_ArrayVarHandleOperations_OpMethod,
    java_lang_invoke_StaticFieldVarHandle_StaticFieldVarHandleOperations_OpMethod,
    java_lang_invoke_InstanceFieldVarHandle_InstanceFieldVarHandleOperations_OpMethod,
    java_lang_invoke_ByteArrayViewVarHandle_ByteArrayViewVarHandleOperations_OpMethod,
    java_lang_invoke_VirtualHandle_virtualCall, java_lang_invoke_VirtualHandle_invokeExact,

    // Clone and Deep Copy
    java_lang_J9VMInternals_is32Bit, java_lang_J9VMInternals_isClassModifierPublic,
    java_lang_J9VMInternals_getArrayLengthAsObject, java_lang_J9VMInternals_rawNewInstance,
    java_lang_J9VMInternals_rawNewArrayInstance, java_lang_J9VMInternals_defaultClone,
    java_lang_J9VMInternals_getNumBitsInReferenceField, java_lang_J9VMInternals_getNumBytesInReferenceField,
    java_lang_J9VMInternals_getNumBitsInDescriptionWord, java_lang_J9VMInternals_getNumBytesInDescriptionWord,
    java_lang_J9VMInternals_getNumBytesInJ9ObjectHeader, java_lang_J9VMInternals_getJ9ClassFromClass32,
    java_lang_J9VMInternals_getInstanceShapeFromJ9Class32, java_lang_J9VMInternals_getInstanceDescriptionFromJ9Class32,
    java_lang_J9VMInternals_getDescriptionWordFromPtr32, java_lang_J9VMInternals_getJ9ClassFromClass64,
    java_lang_J9VMInternals_getInstanceShapeFromJ9Class64, java_lang_J9VMInternals_getInstanceDescriptionFromJ9Class64,
    java_lang_J9VMInternals_getDescriptionWordFromPtr64, java_lang_J9VMInternals_getSuperclass,
    java_lang_J9VMInternals_identityHashCode, java_lang_J9VMInternals_fastIdentityHashCode,
    java_lang_J9VMInternals_primitiveClone,

    java_util_GregorianCalendar_computeFields,

    // IBMJCE API Methods
    com_ibm_jit_crypto_JITAESCryptInHardware_isAESSupportedByHardwareImpl,
    com_ibm_jit_crypto_JITAESCryptInHardware_doAESInHardware,
    com_ibm_jit_crypto_JITAESCryptInHardware_expandAESKeyInHardware, com_ibm_jit_crypto_JITFullHardwareCrypt_z_km,
    com_ibm_jit_crypto_JITFullHardwareCrypt_z_kmc, com_ibm_jit_crypto_JITFullHardwareCrypt_z_kmo,
    com_ibm_jit_crypto_JITFullHardwareCrypt_z_kmf, com_ibm_jit_crypto_JITFullHardwareCrypt_z_kmctr,
    com_ibm_jit_crypto_JITFullHardwareCrypt_z_kmgcm, com_ibm_jit_crypto_JITFullHardwareDigest_z_kimd,
    com_ibm_jit_crypto_JITFullHardwareDigest_z_klmd, com_ibm_jit_crypto_JITFullHardwareDigest_z_kmac,

    java_lang_StringCoding_decode, java_lang_StringCoding_encode, java_lang_StringCoding_StringDecoder_decode,
    java_lang_StringCoding_StringEncoder_encode, java_lang_StringCoding_implEncodeISOArray,
    java_lang_StringCoding_encode8859_1, java_lang_StringCoding_encodeASCII, java_lang_StringCoding_encodeUTF8,

    java_util_Arrays_copyOf_byte, java_util_Arrays_copyOf_short, java_util_Arrays_copyOf_char,
    java_util_Arrays_copyOf_int, java_util_Arrays_copyOf_long, java_util_Arrays_copyOf_float,
    java_util_Arrays_copyOf_double, java_util_Arrays_copyOf_boolean, java_util_Arrays_copyOf_Object1,
    java_util_Arrays_copyOf_Object2, java_util_Arrays_copyOfRange_byte, java_util_Arrays_copyOfRange_short,
    java_util_Arrays_copyOfRange_char, java_util_Arrays_copyOfRange_int, java_util_Arrays_copyOfRange_long,
    java_util_Arrays_copyOfRange_float, java_util_Arrays_copyOfRange_double, java_util_Arrays_copyOfRange_boolean,
    java_util_Arrays_copyOfRange_Object1, java_util_Arrays_copyOfRange_Object2,

    sun_nio_ch_NativeThread_current,

    // Multi-Tenancy Tenant Context switch methods
    com_ibm_tenant_TenantContext_switchTenant, com_ibm_tenant_TenantContext_attach, com_ibm_tenant_TenantContext_detach,
    com_ibm_tenant_InternalTenantContext_setCurrent,

    com_ibm_gpu_Kernel_blockIdxX, com_ibm_gpu_Kernel_blockIdxY, com_ibm_gpu_Kernel_blockIdxZ,
    com_ibm_gpu_Kernel_blockDimX, com_ibm_gpu_Kernel_blockDimY, com_ibm_gpu_Kernel_blockDimZ,
    com_ibm_gpu_Kernel_threadIdxX, com_ibm_gpu_Kernel_threadIdxY, com_ibm_gpu_Kernel_threadIdxZ,
    com_ibm_gpu_Kernel_syncThreads,

    // Vectorized toUpper and toLowerCase from j.l.String
    // toUpper method for prototype so j.l.S.toUpper doesn't get messed up
    com_ibm_jit_JITHelpers_supportsIntrinsicCaseConversion, com_ibm_jit_JITHelpers_toUpperIntrinsicLatin1,
    com_ibm_jit_JITHelpers_toUpperIntrinsicUTF16, com_ibm_jit_JITHelpers_toLowerIntrinsicLatin1,
    com_ibm_jit_JITHelpers_toLowerIntrinsicUTF16,

    // SIMD intrinsics built-in methods
    com_ibm_simd_VectorBase_vectorHWAvailable, firstVectorIntrinsic = com_ibm_simd_VectorBase_vectorHWAvailable,
    com_ibm_simd_VectorDouble_vectorLoadHelper, com_ibm_simd_VectorDouble_vectorStoreHelper,
    com_ibm_simd_VectorDouble_maddHelper, com_ibm_simd_VectorInt_vectorLoadHelper,
    com_ibm_simd_VectorInt_vectorStoreHelper, com_ibm_simd_VectorInt_splatHelper,
    com_ibm_simd_VectorInt_splatElementHelper, com_ibm_simd_VectorInt_addHelper, com_ibm_simd_VectorInt_subHelper,
    com_ibm_simd_VectorInt_minHelper, com_ibm_simd_VectorInt_maxHelper, com_ibm_simd_VectorInt_andHelper,
    com_ibm_simd_VectorInt_orHelper, com_ibm_simd_VectorInt_xorHelper, com_ibm_simd_VectorInt_selectHelper,
    com_ibm_simd_VectorInt_permHelper, com_ibm_simd_VectorInt_cmpeqHelper, com_ibm_simd_VectorInt_cmpgtHelper,
    com_ibm_simd_VectorInt_cmpltHelper, com_ibm_simd_VectorInt_isAllEqHelper, com_ibm_simd_VectorInt_isAllNeHelper,
    com_ibm_simd_VectorInt_isAllGtHelper, com_ibm_simd_VectorInt_isAllGeHelper, com_ibm_simd_VectorInt_isAllLtHelper,
    com_ibm_simd_VectorInt_isAllLeHelper, com_ibm_simd_VectorInt_isAnyEqHelper, com_ibm_simd_VectorInt_isAnyNeHelper,
    com_ibm_simd_VectorInt_isAnyGtHelper, com_ibm_simd_VectorInt_isAnyGeHelper, com_ibm_simd_VectorInt_isAnyLtHelper,
    com_ibm_simd_VectorInt_isAnyLeHelper, com_ibm_dataaccess_SIMD_vectorAddInt, com_ibm_dataaccess_SIMD_vectorSubInt,
    com_ibm_dataaccess_SIMD_vectorMulInt, com_ibm_dataaccess_SIMD_vectorDivInt, com_ibm_dataaccess_SIMD_vectorRemInt,
    com_ibm_dataaccess_SIMD_vectorNegInt, com_ibm_dataaccess_SIMD_vectorSplatsInt, com_ibm_dataaccess_SIMD_vectorMinInt,
    com_ibm_dataaccess_SIMD_vectorMaxInt, com_ibm_dataaccess_SIMD_vectorStoreInt,
    com_ibm_dataaccess_SIMD_vectorCmpEqInt, com_ibm_dataaccess_SIMD_vectorCmpGeInt,
    com_ibm_dataaccess_SIMD_vectorCmpGtInt, com_ibm_dataaccess_SIMD_vectorCmpLeInt,
    com_ibm_dataaccess_SIMD_vectorCmpLtInt, com_ibm_dataaccess_SIMD_vectorCmpAllEqInt,
    com_ibm_dataaccess_SIMD_vectorCmpAllGeInt, com_ibm_dataaccess_SIMD_vectorCmpAllGtInt,
    com_ibm_dataaccess_SIMD_vectorCmpAllLeInt, com_ibm_dataaccess_SIMD_vectorCmpAllLtInt,
    com_ibm_dataaccess_SIMD_vectorCmpAnyEqInt, com_ibm_dataaccess_SIMD_vectorCmpAnyGeInt,
    com_ibm_dataaccess_SIMD_vectorCmpAnyGtInt, com_ibm_dataaccess_SIMD_vectorCmpAnyLeInt,
    com_ibm_dataaccess_SIMD_vectorCmpAnyLtInt, com_ibm_dataaccess_SIMD_vectorGetElementInt,
    com_ibm_dataaccess_SIMD_vectorSetElementInt, com_ibm_dataaccess_SIMD_vectorMergeHighInt,
    com_ibm_dataaccess_SIMD_vectorMergeLowInt, com_ibm_dataaccess_SIMD_vectorAndInt,
    com_ibm_dataaccess_SIMD_vectorOrInt, com_ibm_dataaccess_SIMD_vectorXorInt, com_ibm_dataaccess_SIMD_vectorNotInt,

    com_ibm_dataaccess_SIMD_vectorAddLong, com_ibm_dataaccess_SIMD_vectorSubLong, com_ibm_dataaccess_SIMD_vectorMulLong,
    com_ibm_dataaccess_SIMD_vectorDivLong, com_ibm_dataaccess_SIMD_vectorRemLong, com_ibm_dataaccess_SIMD_vectorNegLong,

    com_ibm_dataaccess_SIMD_vectorStoreByte, com_ibm_dataaccess_SIMD_vectorStoreChar,
    com_ibm_dataaccess_SIMD_vectorStoreShort, com_ibm_dataaccess_SIMD_vectorStoreLong,

    com_ibm_dataaccess_SIMD_vectorSplatsByte, com_ibm_dataaccess_SIMD_vectorSplatsChar,
    com_ibm_dataaccess_SIMD_vectorSplatsShort, com_ibm_dataaccess_SIMD_vectorSplatsLong,

    com_ibm_dataaccess_SIMD_vectorAddFloat, com_ibm_dataaccess_SIMD_vectorSubFloat,
    com_ibm_dataaccess_SIMD_vectorMulFloat, com_ibm_dataaccess_SIMD_vectorDivFloat,
    com_ibm_dataaccess_SIMD_vectorNegFloat, com_ibm_dataaccess_SIMD_vectorSplatsFloat,

    com_ibm_dataaccess_SIMD_vectorAddDouble, com_ibm_dataaccess_SIMD_vectorAddress,
    com_ibm_dataaccess_SIMD_vectorAddReduceDouble, com_ibm_dataaccess_SIMD_vectorStoreDouble,
    com_ibm_dataaccess_SIMD_vectorCmpEqDouble, com_ibm_dataaccess_SIMD_vectorCmpGeDouble,
    com_ibm_dataaccess_SIMD_vectorCmpGtDouble, com_ibm_dataaccess_SIMD_vectorCmpLeDouble,
    com_ibm_dataaccess_SIMD_vectorCmpLtDouble, com_ibm_dataaccess_SIMD_vectorCmpAllEqDouble,
    com_ibm_dataaccess_SIMD_vectorCmpAllGeDouble, com_ibm_dataaccess_SIMD_vectorCmpAllGtDouble,
    com_ibm_dataaccess_SIMD_vectorCmpAllLeDouble, com_ibm_dataaccess_SIMD_vectorCmpAllLtDouble,
    com_ibm_dataaccess_SIMD_vectorCmpAnyEqDouble, com_ibm_dataaccess_SIMD_vectorCmpAnyGeDouble,
    com_ibm_dataaccess_SIMD_vectorCmpAnyGtDouble, com_ibm_dataaccess_SIMD_vectorCmpAnyLeDouble,
    com_ibm_dataaccess_SIMD_vectorCmpAnyLtDouble, com_ibm_dataaccess_SIMD_vectorMinDouble,
    com_ibm_dataaccess_SIMD_vectorMaxDouble, com_ibm_dataaccess_SIMD_vectorDivDouble,
    com_ibm_dataaccess_SIMD_vectorGetElementDouble, com_ibm_dataaccess_SIMD_vectorSetElementDouble,
    com_ibm_dataaccess_SIMD_vectorLoadWithStrideDouble, com_ibm_dataaccess_SIMD_vectorLogDouble,
    com_ibm_dataaccess_SIMD_vectorMaddDouble, com_ibm_dataaccess_SIMD_vectorMulDouble,
    com_ibm_dataaccess_SIMD_vectorNegDouble, com_ibm_dataaccess_SIMD_vectorNmsubDouble,
    com_ibm_dataaccess_SIMD_vectorMsubDouble, com_ibm_dataaccess_SIMD_vectorSelDouble,
    com_ibm_dataaccess_SIMD_vectorSplatsDouble, com_ibm_dataaccess_SIMD_vectorSubDouble,
    com_ibm_dataaccess_SIMD_vectorMergeHighDouble, com_ibm_dataaccess_SIMD_vectorSqrtDouble,
    com_ibm_dataaccess_SIMD_vectorMergeLowDouble, lastVectorIntrinsic = com_ibm_dataaccess_SIMD_vectorMergeLowDouble,
#if defined(ENABLE_SPMD_SIMD)
    com_ibm_simt_SPMDKernel_execute, com_ibm_simt_SPMDKernel_kernel,
#endif
    java_util_stream_AbstractPipeline_evaluate, java_util_stream_IntPipeline_forEach,
    java_util_stream_IntPipelineHead_forEach,

    com_ibm_crypto_provider_P224PrimeField_multiply, com_ibm_crypto_provider_P224PrimeField_addNoMod,
    com_ibm_crypto_provider_P224PrimeField_subNoMod, com_ibm_crypto_provider_P224PrimeField_divideHelper,
    com_ibm_crypto_provider_P224PrimeField_shiftRight, com_ibm_crypto_provider_P224PrimeField_mod,

    com_ibm_crypto_provider_P256PrimeField_multiply, com_ibm_crypto_provider_P256PrimeField_addNoMod,
    com_ibm_crypto_provider_P256PrimeField_subNoMod, com_ibm_crypto_provider_P256PrimeField_divideHelper,
    com_ibm_crypto_provider_P256PrimeField_shiftRight, com_ibm_crypto_provider_P256PrimeField_mod,

    com_ibm_crypto_provider_P384PrimeField_multiply, com_ibm_crypto_provider_P384PrimeField_addNoMod,
    com_ibm_crypto_provider_P384PrimeField_subNoMod, com_ibm_crypto_provider_P384PrimeField_divideHelper,
    com_ibm_crypto_provider_P384PrimeField_shiftRight, com_ibm_crypto_provider_P384PrimeField_mod,

    com_ibm_crypto_provider_AEScryptInHardware_cbcDecrypt, com_ibm_crypto_provider_AEScryptInHardware_cbcEncrypt,

    LastIBMMethod = com_ibm_crypto_provider_P384PrimeField_mod,

#endif
