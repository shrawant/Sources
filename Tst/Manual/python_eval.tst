LIB "tst.lib"; tst_init(); LIB("pyobject.so");
  python_eval("17 + 4");
  typeof(_);
  list ll = python_eval("range(10)");
tst_status(1);$
