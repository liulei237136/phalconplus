
extern zend_class_entry *phalconplus_facades_appengine_ce;

ZEPHIR_INIT_CLASS(PhalconPlus_Facades_AppEngine);

PHP_METHOD(PhalconPlus_Facades_AppEngine, getName);
PHP_METHOD(PhalconPlus_Facades_AppEngine, request);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalconplus_facades_appengine_getname, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalconplus_facades_appengine_getname, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalconplus_facades_appengine_request, 0, 3, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalconplus_facades_appengine_request, 0, 3, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, controller, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, controller)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, action)
#endif
	ZEND_ARG_ARRAY_INFO(0, params, 0)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalconplus_facades_appengine_method_entry) {
	PHP_ME(PhalconPlus_Facades_AppEngine, getName, arginfo_phalconplus_facades_appengine_getname, ZEND_ACC_PROTECTED)
	PHP_ME(PhalconPlus_Facades_AppEngine, request, arginfo_phalconplus_facades_appengine_request, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
