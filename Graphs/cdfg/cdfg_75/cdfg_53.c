#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985593040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p)
{
  short v_17;
  long long v_15;
  double v_13;
  double v_10;
  unsigned int v_8;
  double v_6;
  char v_4;
  signed char v;
  signed char result;
  v_17 = (short)-12664;
  v_15 = (long long)p;
  v_13 = 9930364844.17;
  v_10 = (double)p;
  v_8 = (unsigned int)p;
  v_4 = (char)119;
  v = (signed char)105;
  result = (signed char)p;
  if (- (~ ((unsigned long long)v + 306478599ULL)) <= (unsigned long long)(
      - ((int)v - 92) / ((int)8561812617.08 + 153))) {
    v = (signed char)((long long)(~ p) * v_15 - (long long)(- v_10));
    v_10 = v_13;
    v_6 = (double)(((unsigned long)(~ v_8) % (42UL % (p + 992UL) + 513UL)) % 65360UL);
  }
  else {
    v = (signed char)p;
    v_6 = (double)(-53967LL << ((unsigned long)v_17 % (p + 702UL) & 63UL));
    v_4 = (char)((unsigned long)2.7169322067e+38f % (~ (p % (p + 850UL)) + 310UL));
  }
  while (502358334ULL > (unsigned long long)(! (3585LL / (long long)(
                                                (int)v + 545)) - (long long)v_4)) {
    v_10 = (double)((unsigned int)(- v_10 / ((double)v_4 / (v_6 + 65.) + 34.)) - - v_8);
    result = (signed char)(-3332469344U);
    v_4 = v_4;
  }
  while_0_break: ;
  return result;
}


