/* moon extension for PHP */

#ifndef PHP_MOON_H
# define PHP_MOON_H

extern zend_module_entry moon_module_entry;
# define phpext_moon_ptr &moon_module_entry

# define PHP_MOON_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_MOON)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_MOON_H */
