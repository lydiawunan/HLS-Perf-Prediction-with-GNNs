#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 303333805
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long long p_13, char p_15[5][5])
{
  unsigned char v_10;
  unsigned long long v_8;
  float v_6;
  short v_4;
  char v;
  long result;
  v_8 = (unsigned long long)p_13;
  v_6 = (float)p_15[2][4];
  v_4 = (short)p_13;
  v = (char)p_13;
  result = (long)p_13;
  if (! v_8 <= (unsigned long long)((! p_13 - (long long)(- result)) & (long long)((int)(~ p_15[0][0])))) {
    v_10 = (unsigned char)8;
    v = (char)(((int)(- v_6) | ((int)((short)7663345091.99) - 24181)) - (int)p_15[2][0]);
    v_4 = (short)(~ (~ (! (signed char)-91)));
  }
  else {
    v_10 = (unsigned char)p;
    v_8 = (unsigned long long)((long)p / (~ ((long)p % (result + 833L)) + 130L));
    v_6 = (float)((long long)(-872900096.f / (- v_6 + 746.f)) ^ p_13);
  }
  while (-12577. < - ((-1.69347843147e+38 + (double)v) / ((double)(6002 % (
                                                                   (int)v_4 + 868)) + 671.))) {
    v = (double)v_10 + (double)v_8 / (((double)v_6 - 271871055.924) + 177.);
    result = -105L;
    v_8 = (unsigned long long)(p_13 / (((-14988LL + p_13) + - p_13) + 894LL));
    v = (char)((unsigned long long)p + (555159675ULL * (unsigned long long)result) * (unsigned long long)v);
  }
  while_0_break: ;
  return result;
}


