#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872396888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, float p_5, signed char p_7, double p_13, char p_15)
{
  unsigned int v_19;
  int v_17;
  signed char v_11;
  long v_9;
  long long v;
  unsigned long result;
  v_19 = (unsigned int)p_13;
  v_9 = -777059460L;
  result = (unsigned long)p_15;
  if ((((long)(! p_15) - 11237L) ^ (long)((float)((unsigned long)v_19 & 776880760UL) * - p)) >= v_9) {
    v_9 = (long)p;
    v_11 = (signed char)(p_13 - (double)(p_5 * (p - (float)v_9)));
    v = (long long)((int)v_11 * (int)((signed char)((double)(result * result) + 1.75257149611e+38)));
  }
  else {
    v_17 = (int)(-1LL | (long long)(~ p_15));
    v_9 = (long)(~ (- (v_17 % ((int)p_7 + 764))));
    v = (long long)((float)(- ((int)p_15 * (int)p_7)) - ((float)(-54189 + (int)p_7) - 
                                                         p / 384.f));
  }
  if (! (198LL % (v + 555LL)) + (long long)((p_5 + (float)p_7) + (float)(! v_9)) > 22337LL) 
    result = 4294967281UL;
  else result = (unsigned long)(- p);
  return result;
}


