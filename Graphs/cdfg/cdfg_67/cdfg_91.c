#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115338776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p)
{
  unsigned long long v_15;
  long long v_13;
  short v_11;
  unsigned char v_9;
  unsigned long v_7;
  unsigned short v_5;
  signed char v;
  unsigned long long result;
  v_15 = 18446744072904587084ULL;
  v_13 = (long long)p;
  v_11 = (short)-5400;
  v_9 = (unsigned char)118;
  v_7 = 615936711UL;
  v_5 = (unsigned short)14445;
  v = (signed char)p;
  result = 4140ULL;
  while ((((unsigned long long)v_5 % (p + 529ULL)) % (3263324869ULL % (
                                                      p + 480ULL) + 171ULL)) * (unsigned long long)v_9 > 
         ((unsigned long long)-3.1941085473e+38f - - p) - ! (~ p)) {
    v_13 = v_15 / (unsigned long long)((v_13 & 62373LL) + 546LL);
    result = (unsigned long long)v_7 + (649100064ULL + p);
    v_15 = - p | 49ULL;
    v_9 = (unsigned char)(! (! (p % 18446744073709551614ULL)));
  }
  while_0_break: ;
  while (~ ((p / (unsigned long long)((int)v + 692)) * (unsigned long long)(
            (int)v_5 + (int)v_5)) <= (unsigned long long)v_7) {
    v_9 = (long)v_9 / -194444109L;
    v = (signed char)(-90 % ((int)(! (- v_11)) + 946));
    v_7 = (unsigned long)(387430477ULL % (- p + 585ULL));
    v_5 = (unsigned short)(! p);
  }
  while_0_break_0: ;
  return result;
}


