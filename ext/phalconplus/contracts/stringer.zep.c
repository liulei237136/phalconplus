
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(PhalconPlus_Contracts_Stringer) {

	ZEPHIR_REGISTER_INTERFACE(PhalconPlus\\Contracts, Stringer, phalconplus, contracts_stringer, phalconplus_contracts_stringer_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(PhalconPlus_Contracts_Stringer, __toString);

