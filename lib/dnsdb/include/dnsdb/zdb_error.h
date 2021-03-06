/*------------------------------------------------------------------------------
*
* Copyright (c) 2011, EURid. All rights reserved.
* The YADIFA TM software product is provided under the BSD 3-clause license:
* 
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions
* are met:
*
*        * Redistributions of source code must retain the above copyright 
*          notice, this list of conditions and the following disclaimer.
*        * Redistributions in binary form must reproduce the above copyright 
*          notice, this list of conditions and the following disclaimer in the 
*          documentation and/or other materials provided with the distribution.
*        * Neither the name of EURid nor the names of its contributors may be 
*          used to endorse or promote products derived from this software 
*          without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
*------------------------------------------------------------------------------
*
* DOCUMENTATION */
/** @defgroup error Database error handling
 *  @ingroup dnsdb
 *  @brief Database error handling
 *
 * @{
 */

#ifndef _ZDB_ERROR_H
#define	_ZDB_ERROR_H

#include <dnscore/sys_types.h>

#ifdef	__cplusplus
extern "C" {
#endif

/** @brief a negative number that marks the start of the ZDB error codes */
#define ZDB_ERROR_BASE				0x80040000
#define ZDB_ERROR_CODE(code_)			((s32)(ZDB_ERROR_BASE+(code_)))

#define ZDB_ERROR_GENERAL			ZDB_ERROR_CODE( 0)
    
#define ZDB_ERROR_KEY_NOTFOUND			ZDB_ERROR_CODE( 1)
#define ZDB_ERROR_DELETEFROMEMPTY		ZDB_ERROR_CODE( 2)

#define ZDB_ERROR_CANTOPEN		        ZDB_ERROR_CODE( 3)
#define ZDB_ERROR_BADMAGIC		        ZDB_ERROR_CODE( 4)
#define ZDB_ERROR_CORRUPTEDDATA		        ZDB_ERROR_CODE( 5)

#define ZDB_ERROR_NOSUCHCLASS	                ZDB_ERROR_CODE( 6)

#define ZDB_ERROR_FIRSTENTRYNOTSOA	        ZDB_ERROR_CODE( 7)
#define ZDB_ERROR_ZONEALREADYLOADED	        ZDB_ERROR_CODE( 8)
#define ZDB_ERROR_WRONGNAMEFORZONE	        ZDB_ERROR_CODE( 9)
#define ZDB_ERROR_ZONENOTLOADED		        ZDB_ERROR_CODE(10)

#define ZDB_ERROR_NOSOAATAPEX			ZDB_ERROR_CODE(11)
#define ZDB_ERROR_CORRUPTEDSOA		    	ZDB_ERROR_CODE(12)

#define ZDB_ERROR_MMAPFAILED			ZDB_ERROR_CODE(13)
#define ZDB_ERROR_OUTOFMEMORY			ZDB_ERROR_CODE(14)

#define ZDB_ERROR_CANTOPENDIRECTORY  		ZDB_ERROR_CODE(15)
#define ZDB_ERROR_CANTOPENFILE   		ZDB_ERROR_CODE(16)

#define ZDB_ERROR_ICMTL_NOTFOUND   		ZDB_ERROR_CODE(17)
#define ZDB_ERROR_ICMTL_STATUS_INVALID          ZDB_ERROR_CODE(18)
#define ZDB_ERROR_ICMTL_FOLDERPATHTOOLONG       ZDB_ERROR_CODE(19)
#define ZDB_ERROR_ICMTL_SOADONTMATCH            ZDB_ERROR_CODE(20)
#define ZDB_ERROR_ICMTL_SOANOTFOUND             ZDB_ERROR_CODE(21)

#define ZDB_ERROR_FILEPATH_TOOLONG              ZDB_ERROR_CODE(22)

#define ZDB_ERROR_ZONE_IS_NOT_SIGNED            ZDB_ERROR_CODE(23)

#define ZDB_ERROR_ZONE_IS_ALREADY_BEING_SIGNED  ZDB_ERROR_CODE(24)
    
#define ZDB_READER_FIRST_RECORD_NOT_SOA         ZDB_ERROR_CODE(25)
#define ZDB_READER_ANOTHER_DOMAIN_WAS_EXPECTED  ZDB_ERROR_CODE(26)
#define ZDB_READER_NSEC3WITHOUTNSEC3PARAM       ZDB_ERROR_CODE(27)
#define ZDB_READER_MIXED_DNSSEC_VERSIONS        ZDB_ERROR_CODE(28)
#define ZDB_READER_ALREADY_LOADED               ZDB_ERROR_CODE(28)

#define DNSSEC_ERROR_BASE		        0x80050000
#define DNSSEC_ERROR_CODE(code_)	        ((s32)(DNSSEC_ERROR_BASE+(code_)))

#define DNSSEC_ERROR_GENERAL			DNSSEC_ERROR_CODE(  0)
    
#define DNSSEC_ERROR_NOENGINE			DNSSEC_ERROR_CODE(  1)
#define DNSSEC_ERROR_INVALIDENGINE		DNSSEC_ERROR_CODE(  2)
#define DNSSEC_ERROR_CANTCREATETHREAD		DNSSEC_ERROR_CODE(  3)
#define DNSSEC_ERROR_CANTPOOLTHREAD		DNSSEC_ERROR_CODE(  4)

#define DNSSEC_ERROR_NOSUPPORT			DNSSEC_ERROR_CODE(  4)

#define DNSSEC_ERROR_UNSUPPORTEDKEYALGORITHM	DNSSEC_ERROR_CODE( 10)
#define DNSSEC_ERROR_UNSUPPORTEDDIGESTALGORITHM	DNSSEC_ERROR_CODE( 11)

#define DNSSEC_ERROR_DUPLICATEKEY		DNSSEC_ERROR_CODE( 64)
#define DNSSEC_ERROR_INCOMPLETEKEY		DNSSEC_ERROR_CODE( 65)
#define DNSSEC_ERROR_KEYSTOREPATHISTOOLONG	DNSSEC_ERROR_CODE( 66)
#define DNSSEC_ERROR_UNABLETOCREATEKEYFILES	DNSSEC_ERROR_CODE( 67)
#define DNSSEC_ERROR_KEYWRITEERROR		DNSSEC_ERROR_CODE( 68)
#define DNSSEC_ERROR_BNISNULL	    		DNSSEC_ERROR_CODE( 69)
#define DNSSEC_ERROR_BNISBIGGERTHANBUFFER	DNSSEC_ERROR_CODE( 70)
#define DNSSEC_ERROR_UNEXPECTEDKEYSIZE		DNSSEC_ERROR_CODE( 71)
#define DNSSEC_ERROR_KEYISTOOBIG		    DNSSEC_ERROR_CODE( 72)

#define DNSSEC_ERROR_RSASIGNATUREFAILED		DNSSEC_ERROR_CODE(128)

#define DNSSEC_ERROR_NSEC3_INVALIDZONESTATE	DNSSEC_ERROR_CODE(256)
#define DNSSEC_ERROR_NSEC3_LABELTODIGESTFAILED	DNSSEC_ERROR_CODE(257)
#define DNSSEC_ERROR_NSEC3_DIGESTORIGINOVERFLOW	DNSSEC_ERROR_CODE(258)

#define DNSSEC_ERROR_RRSIG_NOENGINE		DNSSEC_ERROR_CODE(512)
#define DNSSEC_ERROR_RRSIG_NOZONEKEYS		DNSSEC_ERROR_CODE(513)
#define DNSSEC_ERROR_RRSIG_NOUSABLEKEYS		DNSSEC_ERROR_CODE(514)
#define DNSSEC_ERROR_RRSIG_NOSOA		DNSSEC_ERROR_CODE(515)
#define DNSSEC_ERROR_RRSIG_NOSIGNINGKEY		DNSSEC_ERROR_CODE(516)
#define DNSSEC_ERROR_RRSIG_UNSUPPORTEDRECORD	DNSSEC_ERROR_CODE(517)
    
void zdb_register_errors();

#ifdef	__cplusplus
}
#endif

#endif	/* _ZDB_ERROR_H */

/** @} */
