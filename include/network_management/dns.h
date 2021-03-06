// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (306)
//--------------------------------------------------------------------------------
#define SIZEOF_IP4_ADDRESS (UINT)4
#define IP4_ADDRESS_STRING_LENGTH (UINT)16
#define IP4_ADDRESS_STRING_BUFFER_LENGTH (UINT)16
#define DNS_ADDR_MAX_SOCKADDR_LENGTH (UINT)32
#define IP6_ADDRESS_STRING_LENGTH (UINT)65
#define IP6_ADDRESS_STRING_BUFFER_LENGTH (UINT)65
#define DNS_PORT_HOST_ORDER (UINT)53
#define DNS_PORT_NET_ORDER (UINT)13568
#define DNS_RFC_MAX_UDP_PACKET_LENGTH (UINT)512
#define DNS_MAX_NAME_LENGTH (UINT)255
#define DNS_MAX_LABEL_LENGTH (UINT)63
#define DNS_MAX_NAME_BUFFER_LENGTH (UINT)256
#define DNS_MAX_LABEL_BUFFER_LENGTH (UINT)64
#define DNS_MAX_IP4_REVERSE_NAME_LENGTH (UINT)31
#define DNS_MAX_IP6_REVERSE_NAME_LENGTH (UINT)75
#define DNS_MAX_TEXT_STRING_LENGTH (UINT)255
#define DNS_COMPRESSED_QUESTION_NAME (UINT)49164
#define DNS_OPCODE_QUERY (UINT)0
#define DNS_OPCODE_IQUERY (UINT)1
#define DNS_OPCODE_SERVER_STATUS (UINT)2
#define DNS_OPCODE_UNKNOWN (UINT)3
#define DNS_OPCODE_NOTIFY (UINT)4
#define DNS_OPCODE_UPDATE (UINT)5
#define DNS_RCODE_NOERROR (UINT)0
#define DNS_RCODE_FORMERR (UINT)1
#define DNS_RCODE_SERVFAIL (UINT)2
#define DNS_RCODE_NXDOMAIN (UINT)3
#define DNS_RCODE_NOTIMPL (UINT)4
#define DNS_RCODE_REFUSED (UINT)5
#define DNS_RCODE_YXDOMAIN (UINT)6
#define DNS_RCODE_YXRRSET (UINT)7
#define DNS_RCODE_NXRRSET (UINT)8
#define DNS_RCODE_NOTAUTH (UINT)9
#define DNS_RCODE_NOTZONE (UINT)10
#define DNS_RCODE_MAX (UINT)15
#define DNS_RCODE_BADVERS (UINT)16
#define DNS_RCODE_BADSIG (UINT)16
#define DNS_RCODE_BADKEY (UINT)17
#define DNS_RCODE_BADTIME (UINT)18
#define DNS_CLASS_INTERNET (UINT)1
#define DNS_CLASS_CSNET (UINT)2
#define DNS_CLASS_CHAOS (UINT)3
#define DNS_CLASS_HESIOD (UINT)4
#define DNS_CLASS_NONE (UINT)254
#define DNS_CLASS_ALL (UINT)255
#define DNS_CLASS_ANY (UINT)255
#define DNS_CLASS_UNICAST_RESPONSE (UINT)32768
#define DNS_RCLASS_INTERNET (UINT)256
#define DNS_RCLASS_CSNET (UINT)512
#define DNS_RCLASS_CHAOS (UINT)768
#define DNS_RCLASS_HESIOD (UINT)1024
#define DNS_RCLASS_NONE (UINT)65024
#define DNS_RCLASS_ALL (UINT)65280
#define DNS_RCLASS_ANY (UINT)65280
#define DNS_RCLASS_UNICAST_RESPONSE (UINT)128
#define DNS_TYPE_ZERO (UINT)0
#define DNS_TYPE_A (UINT)1
#define DNS_TYPE_NS (UINT)2
#define DNS_TYPE_MD (UINT)3
#define DNS_TYPE_MF (UINT)4
#define DNS_TYPE_CNAME (UINT)5
#define DNS_TYPE_SOA (UINT)6
#define DNS_TYPE_MB (UINT)7
#define DNS_TYPE_MG (UINT)8
#define DNS_TYPE_MR (UINT)9
#define DNS_TYPE_NULL (UINT)10
#define DNS_TYPE_WKS (UINT)11
#define DNS_TYPE_PTR (UINT)12
#define DNS_TYPE_HINFO (UINT)13
#define DNS_TYPE_MINFO (UINT)14
#define DNS_TYPE_MX (UINT)15
#define DNS_TYPE_TEXT (UINT)16
#define DNS_TYPE_RP (UINT)17
#define DNS_TYPE_AFSDB (UINT)18
#define DNS_TYPE_X25 (UINT)19
#define DNS_TYPE_ISDN (UINT)20
#define DNS_TYPE_RT (UINT)21
#define DNS_TYPE_NSAP (UINT)22
#define DNS_TYPE_NSAPPTR (UINT)23
#define DNS_TYPE_SIG (UINT)24
#define DNS_TYPE_KEY (UINT)25
#define DNS_TYPE_PX (UINT)26
#define DNS_TYPE_GPOS (UINT)27
#define DNS_TYPE_AAAA (UINT)28
#define DNS_TYPE_LOC (UINT)29
#define DNS_TYPE_NXT (UINT)30
#define DNS_TYPE_EID (UINT)31
#define DNS_TYPE_NIMLOC (UINT)32
#define DNS_TYPE_SRV (UINT)33
#define DNS_TYPE_ATMA (UINT)34
#define DNS_TYPE_NAPTR (UINT)35
#define DNS_TYPE_KX (UINT)36
#define DNS_TYPE_CERT (UINT)37
#define DNS_TYPE_A6 (UINT)38
#define DNS_TYPE_DNAME (UINT)39
#define DNS_TYPE_SINK (UINT)40
#define DNS_TYPE_OPT (UINT)41
#define DNS_TYPE_DS (UINT)43
#define DNS_TYPE_RRSIG (UINT)46
#define DNS_TYPE_NSEC (UINT)47
#define DNS_TYPE_DNSKEY (UINT)48
#define DNS_TYPE_DHCID (UINT)49
#define DNS_TYPE_NSEC3 (UINT)50
#define DNS_TYPE_NSEC3PARAM (UINT)51
#define DNS_TYPE_TLSA (UINT)52
#define DNS_TYPE_UINFO (UINT)100
#define DNS_TYPE_UID (UINT)101
#define DNS_TYPE_GID (UINT)102
#define DNS_TYPE_UNSPEC (UINT)103
#define DNS_TYPE_ADDRS (UINT)248
#define DNS_TYPE_TKEY (UINT)249
#define DNS_TYPE_TSIG (UINT)250
#define DNS_TYPE_IXFR (UINT)251
#define DNS_TYPE_AXFR (UINT)252
#define DNS_TYPE_MAILB (UINT)253
#define DNS_TYPE_MAILA (UINT)254
#define DNS_TYPE_ALL (UINT)255
#define DNS_TYPE_ANY (UINT)255
#define DNS_TYPE_WINS (UINT)65281
#define DNS_TYPE_WINSR (UINT)65282
#define DNS_RTYPE_A (UINT)256
#define DNS_RTYPE_NS (UINT)512
#define DNS_RTYPE_MD (UINT)768
#define DNS_RTYPE_MF (UINT)1024
#define DNS_RTYPE_CNAME (UINT)1280
#define DNS_RTYPE_SOA (UINT)1536
#define DNS_RTYPE_MB (UINT)1792
#define DNS_RTYPE_MG (UINT)2048
#define DNS_RTYPE_MR (UINT)2304
#define DNS_RTYPE_NULL (UINT)2560
#define DNS_RTYPE_WKS (UINT)2816
#define DNS_RTYPE_PTR (UINT)3072
#define DNS_RTYPE_HINFO (UINT)3328
#define DNS_RTYPE_MINFO (UINT)3584
#define DNS_RTYPE_MX (UINT)3840
#define DNS_RTYPE_TEXT (UINT)4096
#define DNS_RTYPE_RP (UINT)4352
#define DNS_RTYPE_AFSDB (UINT)4608
#define DNS_RTYPE_X25 (UINT)4864
#define DNS_RTYPE_ISDN (UINT)5120
#define DNS_RTYPE_RT (UINT)5376
#define DNS_RTYPE_NSAP (UINT)5632
#define DNS_RTYPE_NSAPPTR (UINT)5888
#define DNS_RTYPE_SIG (UINT)6144
#define DNS_RTYPE_KEY (UINT)6400
#define DNS_RTYPE_PX (UINT)6656
#define DNS_RTYPE_GPOS (UINT)6912
#define DNS_RTYPE_AAAA (UINT)7168
#define DNS_RTYPE_LOC (UINT)7424
#define DNS_RTYPE_NXT (UINT)7680
#define DNS_RTYPE_EID (UINT)7936
#define DNS_RTYPE_NIMLOC (UINT)8192
#define DNS_RTYPE_SRV (UINT)8448
#define DNS_RTYPE_ATMA (UINT)8704
#define DNS_RTYPE_NAPTR (UINT)8960
#define DNS_RTYPE_KX (UINT)9216
#define DNS_RTYPE_CERT (UINT)9472
#define DNS_RTYPE_A6 (UINT)9728
#define DNS_RTYPE_DNAME (UINT)9984
#define DNS_RTYPE_SINK (UINT)10240
#define DNS_RTYPE_OPT (UINT)10496
#define DNS_RTYPE_DS (UINT)11008
#define DNS_RTYPE_RRSIG (UINT)11776
#define DNS_RTYPE_NSEC (UINT)12032
#define DNS_RTYPE_DNSKEY (UINT)12288
#define DNS_RTYPE_DHCID (UINT)12544
#define DNS_RTYPE_NSEC3 (UINT)12800
#define DNS_RTYPE_NSEC3PARAM (UINT)13056
#define DNS_RTYPE_TLSA (UINT)13312
#define DNS_RTYPE_UINFO (UINT)25600
#define DNS_RTYPE_UID (UINT)25856
#define DNS_RTYPE_GID (UINT)26112
#define DNS_RTYPE_UNSPEC (UINT)26368
#define DNS_RTYPE_TKEY (UINT)63744
#define DNS_RTYPE_TSIG (UINT)64000
#define DNS_RTYPE_IXFR (UINT)64256
#define DNS_RTYPE_AXFR (UINT)64512
#define DNS_RTYPE_MAILB (UINT)64768
#define DNS_RTYPE_MAILA (UINT)65024
#define DNS_RTYPE_ALL (UINT)65280
#define DNS_RTYPE_ANY (UINT)65280
#define DNS_RTYPE_WINS (UINT)511
#define DNS_RTYPE_WINSR (UINT)767
#define DNS_ATMA_FORMAT_E164 (UINT)1
#define DNS_ATMA_FORMAT_AESA (UINT)2
#define DNS_ATMA_MAX_ADDR_LENGTH (UINT)20
#define DNS_ATMA_AESA_ADDR_LENGTH (UINT)20
#define DNS_ATMA_MAX_RECORD_LENGTH (UINT)21
#define DNSSEC_ALGORITHM_RSAMD5 (UINT)1
#define DNSSEC_ALGORITHM_RSASHA1 (UINT)5
#define DNSSEC_ALGORITHM_RSASHA1_NSEC3 (UINT)7
#define DNSSEC_ALGORITHM_RSASHA256 (UINT)8
#define DNSSEC_ALGORITHM_RSASHA512 (UINT)10
#define DNSSEC_ALGORITHM_ECDSAP256_SHA256 (UINT)13
#define DNSSEC_ALGORITHM_ECDSAP384_SHA384 (UINT)14
#define DNSSEC_ALGORITHM_NULL (UINT)253
#define DNSSEC_ALGORITHM_PRIVATE (UINT)254
#define DNSSEC_DIGEST_ALGORITHM_SHA1 (UINT)1
#define DNSSEC_DIGEST_ALGORITHM_SHA256 (UINT)2
#define DNSSEC_DIGEST_ALGORITHM_SHA384 (UINT)4
#define DNSSEC_PROTOCOL_NONE (UINT)0
#define DNSSEC_PROTOCOL_TLS (UINT)1
#define DNSSEC_PROTOCOL_EMAIL (UINT)2
#define DNSSEC_PROTOCOL_DNSSEC (UINT)3
#define DNSSEC_PROTOCOL_IPSEC (UINT)4
#define DNSSEC_KEY_FLAG_NOAUTH (UINT)1
#define DNSSEC_KEY_FLAG_NOCONF (UINT)2
#define DNSSEC_KEY_FLAG_FLAG2 (UINT)4
#define DNSSEC_KEY_FLAG_EXTEND (UINT)8
#define DNSSEC_KEY_FLAG_FLAG4 (UINT)16
#define DNSSEC_KEY_FLAG_FLAG5 (UINT)32
#define DNSSEC_KEY_FLAG_USER (UINT)0
#define DNSSEC_KEY_FLAG_ZONE (UINT)64
#define DNSSEC_KEY_FLAG_HOST (UINT)128
#define DNSSEC_KEY_FLAG_NTPE3 (UINT)192
#define DNSSEC_KEY_FLAG_FLAG8 (UINT)256
#define DNSSEC_KEY_FLAG_FLAG9 (UINT)512
#define DNSSEC_KEY_FLAG_FLAG10 (UINT)1024
#define DNSSEC_KEY_FLAG_FLAG11 (UINT)2048
#define DNSSEC_KEY_FLAG_SIG0 (UINT)0
#define DNSSEC_KEY_FLAG_SIG1 (UINT)4096
#define DNSSEC_KEY_FLAG_SIG2 (UINT)8192
#define DNSSEC_KEY_FLAG_SIG3 (UINT)12288
#define DNSSEC_KEY_FLAG_SIG4 (UINT)16384
#define DNSSEC_KEY_FLAG_SIG5 (UINT)20480
#define DNSSEC_KEY_FLAG_SIG6 (UINT)24576
#define DNSSEC_KEY_FLAG_SIG7 (UINT)28672
#define DNSSEC_KEY_FLAG_SIG8 (UINT)32768
#define DNSSEC_KEY_FLAG_SIG9 (UINT)36864
#define DNSSEC_KEY_FLAG_SIG10 (UINT)40960
#define DNSSEC_KEY_FLAG_SIG11 (UINT)45056
#define DNSSEC_KEY_FLAG_SIG12 (UINT)49152
#define DNSSEC_KEY_FLAG_SIG13 (UINT)53248
#define DNSSEC_KEY_FLAG_SIG14 (UINT)57344
#define DNSSEC_KEY_FLAG_SIG15 (UINT)61440
#define DNS_TKEY_MODE_SERVER_ASSIGN (UINT)1
#define DNS_TKEY_MODE_DIFFIE_HELLMAN (UINT)2
#define DNS_TKEY_MODE_GSS (UINT)3
#define DNS_TKEY_MODE_RESOLVER_ASSIGN (UINT)4
#define DNS_WINS_FLAG_SCOPE (UINT)2147483648
#define DNS_WINS_FLAG_LOCAL (UINT)65536
#define DNS_CONFIG_FLAG_ALLOC (UINT)1
#define DNSREC_SECTION (UINT)3
#define DNSREC_QUESTION (UINT)0
#define DNSREC_ANSWER (UINT)1
#define DNSREC_AUTHORITY (UINT)2
#define DNSREC_ADDITIONAL (UINT)3
#define DNSREC_ZONE (UINT)0
#define DNSREC_PREREQ (UINT)1
#define DNSREC_UPDATE (UINT)2
#define DNSREC_DELETE (UINT)4
#define DNSREC_NOEXIST (UINT)4
#define DNS_QUERY_STANDARD (UINT)0
#define DNS_QUERY_ACCEPT_TRUNCATED_RESPONSE (UINT)1
#define DNS_QUERY_USE_TCP_ONLY (UINT)2
#define DNS_QUERY_NO_RECURSION (UINT)4
#define DNS_QUERY_BYPASS_CACHE (UINT)8
#define DNS_QUERY_NO_WIRE_QUERY (UINT)16
#define DNS_QUERY_NO_LOCAL_NAME (UINT)32
#define DNS_QUERY_NO_HOSTS_FILE (UINT)64
#define DNS_QUERY_NO_NETBT (UINT)128
#define DNS_QUERY_WIRE_ONLY (UINT)256
#define DNS_QUERY_RETURN_MESSAGE (UINT)512
#define DNS_QUERY_MULTICAST_ONLY (UINT)1024
#define DNS_QUERY_NO_MULTICAST (UINT)2048
#define DNS_QUERY_TREAT_AS_FQDN (UINT)4096
#define DNS_QUERY_ADDRCONFIG (UINT)8192
#define DNS_QUERY_DUAL_ADDR (UINT)16384
#define DNS_QUERY_DONT_RESET_TTL_VALUES (UINT)1048576
#define DNS_QUERY_DISABLE_IDN_ENCODING (UINT)2097152
#define DNS_QUERY_APPEND_MULTILABEL (UINT)8388608
#define DNS_QUERY_DNSSEC_OK (UINT)16777216
#define DNS_QUERY_DNSSEC_CHECKING_DISABLED (UINT)33554432
#define DNS_QUERY_RESERVED (UINT)4026531840
#define DNS_QUERY_RESULTS_VERSION1 (UINT)1
#define DNS_QUERY_REQUEST_VERSION1 (UINT)1
#define DNS_UPDATE_SECURITY_USE_DEFAULT (UINT)0
#define DNS_UPDATE_SECURITY_OFF (UINT)16
#define DNS_UPDATE_SECURITY_ON (UINT)32
#define DNS_UPDATE_SECURITY_ONLY (UINT)256
#define DNS_UPDATE_CACHE_SECURITY_CONTEXT (UINT)512
#define DNS_UPDATE_TEST_USE_LOCAL_SYS_ACCT (UINT)1024
#define DNS_UPDATE_FORCE_SECURITY_NEGO (UINT)2048
#define DNS_UPDATE_TRY_ALL_MASTER_SERVERS (UINT)4096
#define DNS_UPDATE_SKIP_NO_UPDATE_ADAPTERS (UINT)8192
#define DNS_UPDATE_REMOTE_SERVER (UINT)16384
#define DNS_UPDATE_RESERVED (UINT)4294901760
#define DNS_VALSVR_ERROR_INVALID_ADDR (UINT)1
#define DNS_VALSVR_ERROR_INVALID_NAME (UINT)2
#define DNS_VALSVR_ERROR_UNREACHABLE (UINT)3
#define DNS_VALSVR_ERROR_NO_RESPONSE (UINT)4
#define DNS_VALSVR_ERROR_NO_AUTH (UINT)5
#define DNS_VALSVR_ERROR_REFUSED (UINT)6
#define DNS_VALSVR_ERROR_NO_TCP (UINT)16
#define DNS_VALSVR_ERROR_UNKNOWN (UINT)255
#define DNS_CONNECTION_NAME_MAX_LENGTH (UINT)64
#define DNS_CONNECTION_PROXY_INFO_CURRENT_VERSION (UINT)1
#define DNS_CONNECTION_PROXY_INFO_SERVER_MAX_LENGTH (UINT)256
#define DNS_CONNECTION_PROXY_INFO_FRIENDLY_NAME_MAX_LENGTH (UINT)64
#define DNS_CONNECTION_PROXY_INFO_USERNAME_MAX_LENGTH (UINT)128
#define DNS_CONNECTION_PROXY_INFO_PASSWORD_MAX_LENGTH (UINT)128
#define DNS_CONNECTION_PROXY_INFO_EXCEPTION_MAX_LENGTH (UINT)1024
#define DNS_CONNECTION_PROXY_INFO_EXTRA_INFO_MAX_LENGTH (UINT)1024
#define DNS_CONNECTION_PROXY_INFO_FLAG_DISABLED (UINT)1
#define DNS_CONNECTION_PROXY_INFO_FLAG_BYPASSLOCAL (UINT)2
#define DNS_CONNECTION_POLICY_ENTRY_ONDEMAND (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (94)
//--------------------------------------------------------------------------------
typedef int IP6_ADDRESS;

typedef int DnsContextHandle;

typedef int IP4_ARRAY;

typedef int DNS_ADDR;

typedef int DNS_ADDR_ARRAY;

typedef int DNS_HEADER;

typedef int DNS_HEADER_EXT;

typedef int DNS_WIRE_QUESTION;

typedef int DNS_WIRE_RECORD;

typedef enum {
    DnsConfigPrimaryDomainName_W = 0,
    DnsConfigPrimaryDomainName_A = 1,
    DnsConfigPrimaryDomainName_UTF8 = 2,
    DnsConfigAdapterDomainName_W = 3,
    DnsConfigAdapterDomainName_A = 4,
    DnsConfigAdapterDomainName_UTF8 = 5,
    DnsConfigDnsServerList = 6,
    DnsConfigSearchList = 7,
    DnsConfigAdapterInfo = 8,
    DnsConfigPrimaryHostNameRegistrationEnabled = 9,
    DnsConfigAdapterHostNameRegistrationEnabled = 10,
    DnsConfigAddressRegistrationMaxCount = 11,
    DnsConfigHostName_W = 12,
    DnsConfigHostName_A = 13,
    DnsConfigHostName_UTF8 = 14,
    DnsConfigFullHostName_W = 15,
    DnsConfigFullHostName_A = 16,
    DnsConfigFullHostName_UTF8 = 17,
    DnsConfigNameServer = 18,
} DNS_CONFIG_TYPE;

typedef int DNS_A_DATA;

typedef int DNS_PTR_DATAW;

typedef int DNS_PTR_DATAA;

typedef int DNS_SOA_DATAW;

typedef int DNS_SOA_DATAA;

typedef int DNS_MINFO_DATAW;

typedef int DNS_MINFO_DATAA;

typedef int DNS_MX_DATAW;

typedef int DNS_MX_DATAA;

typedef int DNS_TXT_DATAW;

typedef int DNS_TXT_DATAA;

typedef int DNS_NULL_DATA;

typedef int DNS_WKS_DATA;

typedef int DNS_AAAA_DATA;

typedef int DNS_SIG_DATAW;

typedef int DNS_SIG_DATAA;

typedef int DNS_KEY_DATA;

typedef int DNS_DHCID_DATA;

typedef int DNS_NSEC_DATAW;

typedef int DNS_NSEC_DATAA;

typedef int DNS_NSEC3_DATA;

typedef int DNS_NSEC3PARAM_DATA;

typedef int DNS_TLSA_DATA;

typedef int DNS_DS_DATA;

typedef int DNS_OPT_DATA;

typedef int DNS_LOC_DATA;

typedef int DNS_NXT_DATAW;

typedef int DNS_NXT_DATAA;

typedef int DNS_SRV_DATAW;

typedef int DNS_SRV_DATAA;

typedef int DNS_NAPTR_DATAW;

typedef int DNS_NAPTR_DATAA;

typedef int DNS_ATMA_DATA;

typedef int DNS_TKEY_DATAW;

typedef int DNS_TKEY_DATAA;

typedef int DNS_TSIG_DATAW;

typedef int DNS_TSIG_DATAA;

typedef int DNS_UNKNOWN_DATA;

typedef int DNS_WINS_DATA;

typedef int DNS_WINSR_DATAW;

typedef int DNS_WINSR_DATAA;

typedef int DNS_RECORD_FLAGS;

typedef enum {
    DnsSectionQuestion = 0,
    DnsSectionAnswer = 1,
    DnsSectionAuthority = 2,
    DnsSectionAddtional = 3,
} DNS_SECTION;

typedef int DNS_RECORDW;

typedef int _DnsRecordOptW;

typedef int DNS_RECORDA;

typedef int _DnsRecordOptA;

typedef int DNS_RRSET;

typedef int DNS_PROXY_COMPLETION_ROUTINE;

typedef enum {
    DNS_PROXY_INFORMATION_DIRECT = 0,
    DNS_PROXY_INFORMATION_DEFAULT_SETTINGS = 1,
    DNS_PROXY_INFORMATION_PROXY_NAME = 2,
    DNS_PROXY_INFORMATION_DOES_NOT_EXIST = 3,
} DNS_PROXY_INFORMATION_TYPE;

typedef int DNS_PROXY_INFORMATION;

typedef enum {
    DnsCharSetUnknown = 0,
    DnsCharSetUnicode = 1,
    DnsCharSetUtf8 = 2,
    DnsCharSetAnsi = 3,
} DNS_CHARSET;

typedef enum {
    DnsFreeFlat = 0,
    DnsFreeRecordList = 1,
    DnsFreeParsedMessageFields = 2,
} DNS_FREE_TYPE;

typedef int DNS_QUERY_RESULT;

typedef int PDNS_QUERY_COMPLETION_ROUTINE;

typedef int DNS_QUERY_REQUEST;

typedef int DNS_QUERY_CANCEL;

typedef enum {
    DnsNameDomain = 0,
    DnsNameDomainLabel = 1,
    DnsNameHostnameFull = 2,
    DnsNameHostnameLabel = 3,
    DnsNameWildcard = 4,
    DnsNameSrvRecord = 5,
    DnsNameValidateTld = 6,
} DNS_NAME_FORMAT;

typedef int DNS_MESSAGE_BUFFER;

typedef enum {
    DNS_CONNECTION_PROXY_TYPE_NULL = 0,
    DNS_CONNECTION_PROXY_TYPE_HTTP = 1,
    DNS_CONNECTION_PROXY_TYPE_WAP = 2,
    DNS_CONNECTION_PROXY_TYPE_SOCKS4 = 4,
    DNS_CONNECTION_PROXY_TYPE_SOCKS5 = 5,
} DNS_CONNECTION_PROXY_TYPE;

typedef enum {
    DNS_CONNECTION_PROXY_INFO_SWITCH_CONFIG = 0,
    DNS_CONNECTION_PROXY_INFO_SWITCH_SCRIPT = 1,
    DNS_CONNECTION_PROXY_INFO_SWITCH_WPAD = 2,
} DNS_CONNECTION_PROXY_INFO_SWITCH;

typedef int DNS_CONNECTION_PROXY_INFO;

typedef int DNS_CONNECTION_PROXY_INFO_EX;

typedef int DNS_CONNECTION_PROXY_ELEMENT;

typedef int DNS_CONNECTION_PROXY_LIST;

typedef int DNS_CONNECTION_NAME;

typedef int DNS_CONNECTION_NAME_LIST;

typedef int DNS_CONNECTION_IFINDEX_ENTRY;

typedef int DNS_CONNECTION_IFINDEX_LIST;

typedef int DNS_CONNECTION_POLICY_ENTRY;

typedef int DNS_CONNECTION_POLICY_ENTRY_LIST;

typedef enum {
    TAG_DNS_CONNECTION_POLICY_TAG_DEFAULT = 0,
    TAG_DNS_CONNECTION_POLICY_TAG_CONNECTION_MANAGER = 1,
    TAG_DNS_CONNECTION_POLICY_TAG_WWWPT = 2,
} DNS_CONNECTION_POLICY_TAG;

typedef int DNS_SERVICE_INSTANCE;

typedef int DNS_SERVICE_CANCEL;

typedef int PDNS_SERVICE_BROWSE_CALLBACK;

typedef int DNS_SERVICE_BROWSE_REQUEST;

typedef int PDNS_SERVICE_RESOLVE_COMPLETE;

typedef int DNS_SERVICE_RESOLVE_REQUEST;

typedef int PDNS_SERVICE_REGISTER_COMPLETE;

typedef int DNS_SERVICE_REGISTER_REQUEST;

typedef int MDNS_QUERY_HANDLE;

typedef int PMDNS_QUERY_CALLBACK;

typedef int MDNS_QUERY_REQUEST;

typedef int IP6_ADDRESS;


//--------------------------------------------------------------------------------
// Section: Functions (57)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsQueryConfig();

// TODO: this type is limited to platform 'windows5.0'
/*?*DNS_RECORDA*/void DnsRecordCopyEx();

// TODO: this type is limited to platform 'windows5.0'
/*?*DNS_RECORDA*/void DnsRecordSetCopyEx();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsRecordCompare();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsRecordSetCompare();

// TODO: this type is limited to platform 'windows5.0'
/*?*DNS_RECORDA*/void DnsRecordSetDetach();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void DnsFree();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsQuery_A();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsQuery_UTF8();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsQuery_W();

// TODO: this type is limited to platform 'windows8.0'
/*i32*/void DnsQueryEx();

// TODO: this type is limited to platform 'windows8.0'
/*i32*/void DnsCancelQuery();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsAcquireContextHandle_W();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsAcquireContextHandle_A();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void DnsReleaseContextHandle();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsModifyRecordsInSet_W();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsModifyRecordsInSet_A();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsModifyRecordsInSet_UTF8();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsReplaceRecordSetW();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsReplaceRecordSetA();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsReplaceRecordSetUTF8();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsValidateName_W();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsValidateName_A();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsValidateName_UTF8();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsNameCompare_A();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsNameCompare_W();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsWriteQuestionToBuffer_W();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DnsWriteQuestionToBuffer_UTF8();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsExtractRecordsFromMessage_W();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DnsExtractRecordsFromMessage_UTF8();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void DnsGetProxyInformation();

// TODO: this type is limited to platform 'windows6.1'
/*void*/void DnsFreeProxyName();

/*u32*/void DnsConnectionGetProxyInfoForHostUrl();

/*void*/void DnsConnectionFreeProxyInfoEx();

/*u32*/void DnsConnectionGetProxyInfo();

/*void*/void DnsConnectionFreeProxyInfo();

/*u32*/void DnsConnectionSetProxyInfo();

/*u32*/void DnsConnectionDeleteProxyInfo();

/*u32*/void DnsConnectionGetProxyList();

/*void*/void DnsConnectionFreeProxyList();

/*u32*/void DnsConnectionGetNameList();

/*void*/void DnsConnectionFreeNameList();

/*u32*/void DnsConnectionUpdateIfIndexTable();

/*u32*/void DnsConnectionSetPolicyEntries();

/*u32*/void DnsConnectionDeletePolicyEntries();

// TODO: this type is limited to platform 'windows10.0.10240'
/*?*DNS_SERVICE_INSTANCE*/void DnsServiceConstructInstance();

// TODO: this type is limited to platform 'windows10.0.10240'
/*?*DNS_SERVICE_INSTANCE*/void DnsServiceCopyInstance();

// TODO: this type is limited to platform 'windows10.0.10240'
/*void*/void DnsServiceFreeInstance();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsServiceBrowse();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsServiceBrowseCancel();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsServiceResolve();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsServiceResolveCancel();

// TODO: this type is limited to platform 'windows10.0.10240'
/*u32*/void DnsServiceRegister();

// TODO: this type is limited to platform 'windows10.0.10240'
/*u32*/void DnsServiceDeRegister();

// TODO: this type is limited to platform 'windows10.0.10240'
/*u32*/void DnsServiceRegisterCancel();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsStartMulticastQuery();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void DnsStopMulticastQuery();

