#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 670313337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_5, char p_11,
                  unsigned long p_15[5])
{
  unsigned int v_19;
  long v_17;
  unsigned long long v_13;
  short v_9;
  char v_7;
  unsigned short v;
  unsigned long result;
  v_19 = 167535291U;
  v_13 = 759983116ULL;
  v_9 = (short)p_11;
  v_7 = (char)0;
  v = (unsigned short)p_11;
  if (p_15[2] != (unsigned long)((unsigned int)v_7 | (11409U - - v_19))) {
    result = (unsigned long)(~ (~ (unsigned char)216));
    result *= (unsigned long)(~ ((unsigned int)p_11 / 3937180200U));
    v = (unsigned short)(~ 3400765671U);
  }
  else {
    v_9 = (short)(529.261172264 / ((double)v_9 + 1022.));
    v_17 = (long)(! (~ p_15[3]) * 4294959620UL);
    result = (unsigned long)(((v_13 * (unsigned long long)p_15[3]) / (unsigned long long)(
                              (int)(~ v_9) + 218)) % (unsigned long long)(
                             (unsigned long)(v_17 - (long)v_7) / (unsigned long)(
                             ((unsigned int)v_7 + v_19) + 374U) + 412UL));
  }
  while (- (result - (unsigned long)p) >> 31LL == ! (! (~ result))) {
    v_9 = (int)v - 12;
    v_7 = (char)(1173340 * (int)(! v_9));
    v = (unsigned short)(- ((float)v_7 / 1.72060000821e+38f));
    result = (unsigned long)(- ((int)p_5 * (int)p) - (int)p);
  }
  while_0_break: ;
  return result;
}


