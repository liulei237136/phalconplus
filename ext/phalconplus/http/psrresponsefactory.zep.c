
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "kernel/array.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(PhalconPlus_Http_PsrResponseFactory) {

	ZEPHIR_REGISTER_CLASS(PhalconPlus\\Http, PsrResponseFactory, phalconplus, http_psrresponsefactory, phalconplus_http_psrresponsefactory_method_entry, 0);

	zend_declare_property_null(phalconplus_http_psrresponsefactory_ce, SL("psrResponse"), ZEND_ACC_PROTECTED);

	return SUCCESS;

}

PHP_METHOD(PhalconPlus_Http_PsrResponseFactory, create) {

	zend_class_entry *_1 = NULL;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *response, response_sub, *protocol = NULL, protocol_sub, status, reason, content, headers, _0, psrResponse, _2, _3, _4$$4, _5$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&response_sub);
	ZVAL_UNDEF(&protocol_sub);
	ZVAL_UNDEF(&status);
	ZVAL_UNDEF(&reason);
	ZVAL_UNDEF(&content);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&psrResponse);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &response, &protocol);

	if (!protocol) {
		protocol = &protocol_sub;
		ZEPHIR_INIT_VAR(protocol);
		ZVAL_STRING(protocol, "1.1");
	}


	ZEPHIR_CALL_METHOD(&status, response, "getstatuscode", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&reason, response, "getreasonphrase", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&content, response, "getcontent", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&headers, "mapheaders", NULL, 0, response);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "GuzzleHttp\\Psr7\\Response");
	if (!(zephir_class_exists(&_0, 1))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(phalconplus_base_exception_ce, "We use GuzzleHttp\\Psr7\\Response, please include that package", "phalconplus/Http/PsrResponseFactory.zep", 28);
		return;
	}
	ZEPHIR_INIT_VAR(&psrResponse);
	if (!_1) {
	_1 = zephir_fetch_class_str_ex(SL("GuzzleHttp\\Psr7\\Response"), ZEND_FETCH_CLASS_AUTO);
	}
	object_init_ex(&psrResponse, _1);
	if (zephir_has_constructor(&psrResponse)) {
		ZEPHIR_INIT_VAR(&_2);
		if (zephir_is_true(&status)) {
			ZEPHIR_CPY_WRT(&_2, &status);
		} else {
			ZEPHIR_INIT_NVAR(&_2);
			ZVAL_LONG(&_2, 200);
		}
		ZEPHIR_INIT_VAR(&_3);
		if (zephir_is_true(&reason)) {
			ZEPHIR_CPY_WRT(&_3, &reason);
		} else {
			ZEPHIR_INIT_NVAR(&_3);
			ZVAL_STRING(&_3, "OK");
		}
		ZEPHIR_CALL_METHOD(NULL, &psrResponse, "__construct", NULL, 0, &_2, &headers, &content, protocol, &_3);
		zephir_check_call_status();
	}
	if (!(zephir_array_isset_string(&headers, SL("Content-Length")))) {
		ZEPHIR_INIT_VAR(&_4$$4);
		ZVAL_STRING(&_4$$4, "Content-Length");
		ZVAL_LONG(&_5$$4, zephir_fast_strlen_ev(&content));
		ZEPHIR_CALL_METHOD(NULL, &psrResponse, "withaddedheader", NULL, 0, &_4$$4, &_5$$4);
		zephir_check_call_status();
	}
	RETURN_CCTOR(&psrResponse);

}

PHP_METHOD(PhalconPlus_Http_PsrResponseFactory, mapHeaders) {

	zval _8$$6, _15$$11;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *response, response_sub, __$null, headers, _0, rawHeaders, h, pos, nativeHeaders, *_1, _2, _17, _3$$3, name$$4, _4$$4, value$$4, _5$$4, _6$$4, _7$$5, _9$$6, _10$$8, name$$9, _11$$9, value$$9, _12$$9, _13$$9, _14$$10, _16$$11, _18$$13, _19$$13, _20$$13, _21$$13;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&response_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&rawHeaders);
	ZVAL_UNDEF(&h);
	ZVAL_UNDEF(&pos);
	ZVAL_UNDEF(&nativeHeaders);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&name$$4);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&value$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_9$$6);
	ZVAL_UNDEF(&_10$$8);
	ZVAL_UNDEF(&name$$9);
	ZVAL_UNDEF(&_11$$9);
	ZVAL_UNDEF(&value$$9);
	ZVAL_UNDEF(&_12$$9);
	ZVAL_UNDEF(&_13$$9);
	ZVAL_UNDEF(&_14$$10);
	ZVAL_UNDEF(&_16$$11);
	ZVAL_UNDEF(&_18$$13);
	ZVAL_UNDEF(&_19$$13);
	ZVAL_UNDEF(&_20$$13);
	ZVAL_UNDEF(&_21$$13);
	ZVAL_UNDEF(&_8$$6);
	ZVAL_UNDEF(&_15$$11);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &response);



	ZEPHIR_CALL_METHOD(&_0, response, "getheaders", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&headers, &_0, "toarray", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&rawHeaders, "headers_list", NULL, 140);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&nativeHeaders);
	array_init(&nativeHeaders);
	zephir_is_iterable(&rawHeaders, 0, "phalconplus/Http/PsrResponseFactory.zep", 68);
	if (Z_TYPE_P(&rawHeaders) == IS_ARRAY) {
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(&rawHeaders), _1)
		{
			ZEPHIR_INIT_NVAR(&h);
			ZVAL_COPY(&h, _1);
			ZEPHIR_INIT_NVAR(&_3$$3);
			ZVAL_STRING(&_3$$3, ":");
			ZEPHIR_INIT_NVAR(&pos);
			zephir_fast_strpos(&pos, &h, &_3$$3, 0 );
			if (!ZEPHIR_IS_FALSE_IDENTICAL(&pos)) {
				ZVAL_LONG(&_4$$4, 0);
				ZEPHIR_INIT_NVAR(&name$$4);
				zephir_substr(&name$$4, &h, 0 , zephir_get_intval(&pos), 0);
				ZVAL_LONG(&_5$$4, (zephir_get_numberval(&pos) + 1));
				ZEPHIR_INIT_NVAR(&_6$$4);
				zephir_substr(&_6$$4, &h, zephir_get_intval(&_5$$4), 0, ZEPHIR_SUBSTR_NO_LENGTH);
				ZEPHIR_INIT_NVAR(&value$$4);
				zephir_fast_trim(&value$$4, &_6$$4, NULL , ZEPHIR_TRIM_BOTH);
				if (zephir_array_isset(&nativeHeaders, &name$$4)) {
					zephir_array_fetch(&_7$$5, &nativeHeaders, &name$$4, PH_NOISY | PH_READONLY, "phalconplus/Http/PsrResponseFactory.zep", 57);
					if (!(Z_TYPE_P(&_7$$5) == IS_ARRAY)) {
						ZEPHIR_INIT_NVAR(&_8$$6);
						zephir_create_array(&_8$$6, 1, 0);
						ZEPHIR_OBS_NVAR(&_9$$6);
						zephir_array_fetch(&_9$$6, &nativeHeaders, &name$$4, PH_NOISY, "phalconplus/Http/PsrResponseFactory.zep", 58);
						zephir_array_fast_append(&_8$$6, &_9$$6);
						zephir_array_update_zval(&nativeHeaders, &name$$4, &_8$$6, PH_COPY | PH_SEPARATE);
					}
					zephir_array_update_multi(&nativeHeaders, &value$$4, SL("za"), 2, &name$$4);
				} else {
					zephir_array_update_zval(&nativeHeaders, &name$$4, &value$$4, PH_COPY | PH_SEPARATE);
				}
			}
		} ZEND_HASH_FOREACH_END();
	} else {
		ZEPHIR_CALL_METHOD(NULL, &rawHeaders, "rewind", NULL, 0);
		zephir_check_call_status();
		while (1) {
			ZEPHIR_CALL_METHOD(&_2, &rawHeaders, "valid", NULL, 0);
			zephir_check_call_status();
			if (!zend_is_true(&_2)) {
				break;
			}
			ZEPHIR_CALL_METHOD(&h, &rawHeaders, "current", NULL, 0);
			zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_10$$8);
				ZVAL_STRING(&_10$$8, ":");
				ZEPHIR_INIT_NVAR(&pos);
				zephir_fast_strpos(&pos, &h, &_10$$8, 0 );
				if (!ZEPHIR_IS_FALSE_IDENTICAL(&pos)) {
					ZVAL_LONG(&_11$$9, 0);
					ZEPHIR_INIT_NVAR(&name$$9);
					zephir_substr(&name$$9, &h, 0 , zephir_get_intval(&pos), 0);
					ZVAL_LONG(&_12$$9, (zephir_get_numberval(&pos) + 1));
					ZEPHIR_INIT_NVAR(&_13$$9);
					zephir_substr(&_13$$9, &h, zephir_get_intval(&_12$$9), 0, ZEPHIR_SUBSTR_NO_LENGTH);
					ZEPHIR_INIT_NVAR(&value$$9);
					zephir_fast_trim(&value$$9, &_13$$9, NULL , ZEPHIR_TRIM_BOTH);
					if (zephir_array_isset(&nativeHeaders, &name$$9)) {
						zephir_array_fetch(&_14$$10, &nativeHeaders, &name$$9, PH_NOISY | PH_READONLY, "phalconplus/Http/PsrResponseFactory.zep", 57);
						if (!(Z_TYPE_P(&_14$$10) == IS_ARRAY)) {
							ZEPHIR_INIT_NVAR(&_15$$11);
							zephir_create_array(&_15$$11, 1, 0);
							ZEPHIR_OBS_NVAR(&_16$$11);
							zephir_array_fetch(&_16$$11, &nativeHeaders, &name$$9, PH_NOISY, "phalconplus/Http/PsrResponseFactory.zep", 58);
							zephir_array_fast_append(&_15$$11, &_16$$11);
							zephir_array_update_zval(&nativeHeaders, &name$$9, &_15$$11, PH_COPY | PH_SEPARATE);
						}
						zephir_array_update_multi(&nativeHeaders, &value$$9, SL("za"), 2, &name$$9);
					} else {
						zephir_array_update_zval(&nativeHeaders, &name$$9, &value$$9, PH_COPY | PH_SEPARATE);
					}
				}
			ZEPHIR_CALL_METHOD(NULL, &rawHeaders, "next", NULL, 0);
			zephir_check_call_status();
		}
	}
	ZEPHIR_INIT_NVAR(&h);
	ZEPHIR_CALL_FUNCTION(NULL, "header_remove", NULL, 141);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_17);
	zephir_fast_array_merge(&_17, &nativeHeaders, &headers);
	ZEPHIR_CPY_WRT(&headers, &_17);
	if (zephir_array_isset_string(&nativeHeaders, SL("Set-Cookie"))) {
		ZEPHIR_INIT_VAR(&_18$$13);
		zephir_array_fetch_string(&_19$$13, &nativeHeaders, SL("Set-Cookie"), PH_NOISY | PH_READONLY, "phalconplus/Http/PsrResponseFactory.zep", 72);
		if (Z_TYPE_P(&_19$$13) == IS_ARRAY) {
			ZEPHIR_OBS_NVAR(&_18$$13);
			zephir_array_fetch_string(&_18$$13, &nativeHeaders, SL("Set-Cookie"), PH_NOISY, "phalconplus/Http/PsrResponseFactory.zep", 72);
		} else {
			ZEPHIR_INIT_VAR(&_20$$13);
			zephir_create_array(&_20$$13, 1, 0);
			ZEPHIR_OBS_VAR(&_21$$13);
			zephir_array_fetch_string(&_21$$13, &nativeHeaders, SL("Set-Cookie"), PH_NOISY, "phalconplus/Http/PsrResponseFactory.zep", 72);
			zephir_array_fast_append(&_20$$13, &_21$$13);
			ZEPHIR_CPY_WRT(&_18$$13, &_20$$13);
		}
		zephir_array_update_string(&headers, SL("Set-Cookie"), &_18$$13, PH_COPY | PH_SEPARATE);
	} else {
		zephir_array_update_string(&headers, SL("Set-Cookie"), &__$null, PH_COPY | PH_SEPARATE);
	}
	RETURN_CCTOR(&headers);

}

