// STATUS: NOT STARTED

int __mb_cur_max = 1;
static lconv lconv = {
	/* .decimal_point = */ 0x354ef0,
	/* .thousands_sep = */ 0x354ee8,
	/* .grouping = */ 0x354ee8,
	/* .int_curr_symbol = */ 0x354ee8,
	/* .currency_symbol = */ 0x354ee8,
	/* .mon_decimal_point = */ 0x354ee8,
	/* .mon_thousands_sep = */ 0x354ee8,
	/* .mon_grouping = */ 0x354ee8,
	/* .positive_sign = */ 0x354ee8,
	/* .negative_sign = */ 0x354ee8,
	/* .int_frac_digits = */ 127,
	/* .frac_digits = */ 127,
	/* .p_cs_precedes = */ 127,
	/* .p_sep_by_space = */ 127,
	/* .n_cs_precedes = */ 127,
	/* .n_sep_by_space = */ 127,
	/* .p_sign_posn = */ 127,
	/* .n_sign_posn = */ 127
};

char* _setlocale_r(_reent *p, int category, char *locale) {
	static char lc_ctype[8] = {
		/* [0] = */ 67,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	};
	static char last_lc_ctype[8] = {
		/* [0] = */ 67,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	};
	
  int iVar1;
  
  if (locale != (char *)0x0) {
    iVar1 = strcmp(locale,"C");
    if ((iVar1 != 0) && (iVar1 = strcmp(locale,""), iVar1 != 0)) {
      return (char *)0x0;
    }
    p->_current_locale = locale;
    p->_current_category = category;
  }
  return "C";
}

lconv* _localeconv_r(_reent *data) {
  return &lconv;
}

char* setlocale(int category, char *locale) {
  char *pcVar1;
  
  pcVar1 = _setlocale_r(_impure_ptr,category,locale);
  return pcVar1;
}

lconv* localeconv() {
  lconv *plVar1;
  
  plVar1 = (lconv *)_localeconv_r(_impure_ptr);
  return plVar1;
}
