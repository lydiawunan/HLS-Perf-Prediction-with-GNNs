#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256532106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(void)
{
  unsigned int v_12;
  long v_10;
  long v_8;
  long long v_6;
  float v_4;
  unsigned char v;
  unsigned int result;
  v_12 = 3233815238U;
  v_10 = -21341L;
  v_8 = 664728582L;
  v_6 = -88631620LL;
  v_4 = -209.039489746f;
  v = (unsigned char)70;
  result = (unsigned int)((unsigned long)v_10 % (unsigned long)(v_12 + 769U));
  v_4 = v_4;
  result = result;
  result = (unsigned int)(((unsigned long long)v * (365502107ULL + (unsigned long long)9.75471372023e+37) & (unsigned long long)v_4) / (unsigned long long)(
                          (~ v_6 + 14646LL * v_6) / (long long)(- ((unsigned long)v_8 % (unsigned long)(
                                                                   result + 483U)) + 612UL) + 113LL));
  return result;
}


