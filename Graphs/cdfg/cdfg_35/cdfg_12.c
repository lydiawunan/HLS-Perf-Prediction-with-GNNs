#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 887405108
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p)
{
  long long v_17;
  long v_15;
  float v_13;
  long v_10;
  unsigned long long v_8;
  double v_6;
  unsigned short v_4;
  long long v;
  short result;
  v_15 = -36L;
  v_13 = (float)p;
  v_10 = -647073957L;
  v_8 = 980142762ULL;
  v_6 = -1522997494.12;
  v_4 = (unsigned short)p;
  result = (short)32744;
  if ((double)(- (~ v_10 + (long)(! p))) <= (double)((p - 108) * (int)(- result)) + 
                                            ((double)v_15 / 690605480.821) * 148.) {
    v_4 = (unsigned short)(385566217 - 0 / ((p | 39988) + 294));
    v = (long long)(~ (- ((int)v_4 + 6543)));
    v_10 = (long)((int)((short)((double)(v % (long long)(v_15 + 278L)) + 4663426006.94)) / (
                  (int)(~ (! result)) + 965));
  }
  else {
    v_17 = (long long)(- ((float)p * v_13));
    v = (long long)(! (~ (! 809538316U)));
    result = (short)((long long)(-4321604L & (long)p) + (v_17 ^ 47336LL * v));
  }
  while (! ((unsigned long long)(- v) + ((unsigned long long)-399.354248047f + 21580ULL)) == (unsigned long long)(~ v_4)) {
    v_13 = (double)v_10 + ((double)v_8 - (v_6 + 4294951460.));
    v_10 = (long)(1017060655LL / (long long)(! ((int)v_13 / (p + 322)) + 330));
    v_8 = 102390802ULL;
    v = (long long)(~ ((unsigned long long)((long long)p / (v + 619LL)) * 18446744073709546887ULL));
  }
  while_0_break: ;
  return result;
}


