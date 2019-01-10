/*
 * Copyright (C) 2018 Zhiyi Zhang, Tianyuan Yu, Xinyu Ma
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#ifndef NDN_ERROR_CODE_H
#define NDN_ERROR_CODE_H

#include <inttypes.h>

#define NDN_SUCCESS 0

// General Error Types
#define NDN_OVERSIZE -10
#define NDN_NAME_INVALID_FORMAT -11
#define NDN_WRONG_TLV_TYPE -12
#define NDN_OVERSIZE_VAR -13

// Security Error
#define NDN_SEC_WRONG_KEY_SIZE -22
#define NDN_SEC_WRONG_SIG_SIZE -23
#define NDN_SEC_DISABLED_FEATURE -24
#define NDN_SEC_CRYPTO_ALGO_FAILURE -25
#define NDN_SEC_UNSUPPORT_CRYPTO_ALGO -26
#define NDN_SEC_UNSUPPORT_SIGN_TYPE -26
#define NDN_SEC_WRONG_AES_SIZE -27
#define NDN_SEC_INIT_FAILURE -28
#define NDN_SEC_FAIL_VERIFY_SIG -29

// Fragmentation Error
#define NDN_FRAG_NO_MORE_FRAGS -30
#define NDN_FRAG_OUT_OF_ORDER -31
#define NDN_FRAG_NO_MEM -32
#define NDN_FRAG_WRONG_IDENTIFIER -33

// Forwarder Error
#define NDN_FWD_NO_MEM -40
#define NDN_FWD_PIT_FULL -41
#define NDN_FWD_PIT_ENTRY_FACE_LIST_FULL -42
#define NDN_FWD_FIB_FULL -43
#define NDN_FWD_INTEREST_REJECTED -44
#define NDN_FWD_NO_MATCHED_CALLBACK -45

// Face Error
#define NDN_FWD_APP_FACE_CB_TABLE_FULL -50

// Service Discovery
#define NDN_SD_NO_MATCH_SERVCE -51

// Access Control
#define NDN_AC_UNRECOGNIZED_KEY_REQUEST -52

// Sign-on Protocol
#define NDN_SIGN_ON_BASIC_CLIENT_INIT_FAILED_UNRECOGNIZED_VARIANT -101
#define NDN_SIGN_ON_BASIC_CLIENT_INIT_FAILED_TO_SET_SEC_INTF -102
#define NDN_SIGN_ON_CNSTRCT_BTSTRP_RQST_BUFFER_TOO_SHORT -103
#define NDN_SIGN_ON_CNSTRCT_BTSTRP_RQST_ENCODING_FAILED -104
#define NDN_SIGN_ON_CNSTRCT_BTSTRP_RQST_FAILED_TO_GENERATE_N1_KEYPAIR -105
#define NDN_SIGN_ON_CNSTRCT_BTSTRP_RQST_FAILED_TO_GENERATE_SIG_PAYLOAD_HASH -106
#define NDN_SIGN_ON_CNSTRCT_BTSTRP_RQST_FAILED_TO_GENERATE_SIG -107
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_VERIFY_SIGNATURE -108
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_PARSE_TLV_BTSTRP_RQST_RSPNS -109
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_PARSE_TLV_SIG -110
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_PARSE_TLV_TRUST_ANCHOR_CERT -111
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_PARSE_TLV_N2_PUB -112
#define NDN_SIGN_ON_PRCS_BTSTRP_RQST_RSPNS_FAILED_TO_GENERATE_KT -113
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_BUFFER_TOO_SHORT -114
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_ENCODING_FAILED -115
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_FAILED_TO_GENERATE_N2_PUB_HASH -116
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_FAILED_TO_GENERATE_TRUST_ANCHOR_CERT_HASH -117
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_FAILED_TO_GENERATE_SIG_PAYLOAD_HASH -118
#define NDN_SIGN_ON_CNSTRCT_CERT_RQST_FAILED_TO_GENERATE_SIG -119
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_VERIFY_SIGNATURE -120
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_PARSE_TLV_CERT_RQST_RSPNS -121
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_PARSE_TLV_KD_PUB_CERT -122
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_PARSE_TLV_KD_PRI_ENC -123
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_PARSE_TLV_SIG -124
#define NDN_SIGN_ON_PRCS_CERT_RQST_RSPNS_FAILED_TO_DECRYPT_KD_PRI -125
#define NDN_SIGN_ON_CNSTRCT_FIN_MSG_BUFFER_TOO_SHORT -126
#define NDN_SIGN_ON_CNSTRCT_FIN_MSG_ENCODING_FAILED -127
#define NDN_SIGN_ON_CNSTRCT_FIN_MSG_FAILED_TO_GENERATE_SIG_PAYLOAD_HASH -128
#define NDN_SIGN_ON_CNSTRCT_FIN_MSG_FAILED_TO_GENERATE_SIG -129
#define NDN_SIGN_ON_BASIC_SET_SEC_INTF_SUCCESS -130
#define NDN_SIGN_ON_BASIC_SET_SEC_INTF_FAILURE -131
#define NDN_SIGN_ON_BASIC_CLIENT_NRF_SDK_BLE_CONSTRUCT_FAILED_TO_INITIALIZE_SIGN_ON_BASIC_CLIENT -132

// Sign-on Protocol over BLE
#define SIGN_ON_BASIC_CLIENT_BLE_FAILED_TO_SEND_BOOTSTRAPPING_REQUEST -129
#define SIGN_ON_BASIC_CLIENT_BLE_FAILED_TO_SEND_CERTIFICATE_REQUEST -130
#define SIGN_ON_BASIC_CLIENT_BLE_FAILED_TO_SEND_FINISH_MESSAGE -131

// ASN encoding
#define NDN_ASN_ENCODE_ECDSA_SIG_INVALID_SIZE -132
#define NDN_ASN_ENCODE_ECDSA_SIG_BUFFER_TOO_SMALL -133
#define NDN_ASN_ENCODE_ECDSA_SIG_FAILED_TO_PROBE_ASN1_INT_SIZE -134
#define NDN_ASN_ENCODE_ECDSA_SIG_FAILED_TO_WRITE_ASN1_INT -135


#endif // NDN_ERROR_CODE_H
