LIB "tst.lib"; tst_init();
  ring r = 0, (x,y,z), ds;
  // the same as ring r = 0, (x,y,z), (ds, C);
  [x+y2,z3+xy];
  [x,x,x];
tst_status(1);$
