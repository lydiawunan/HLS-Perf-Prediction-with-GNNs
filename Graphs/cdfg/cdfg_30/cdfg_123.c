#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548755640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, long long p_9)
{
  float v_17;
  long v_15;
  short v_13;
  unsigned long long v_11;
  unsigned int v_7;
  unsigned char v_4;
  short v;
  short result;
  v_17 = (float)p_9;
  v_15 = -784730552L;
  v_13 = (short)1275;
  v_11 = 592046129ULL;
  v_7 = 3611728149U;
  v_4 = (unsigned char)p;
  v = (short)p;
  result = (short)23251;
  if ((unsigned long long)v_15 < ((unsigned long long)v_13 - p) / (((unsigned long long)p_9 | p) + 338ULL) + (unsigned long long)(! (! p_9))) {
    result = (short)(- v_11 % (p / (p + 812ULL) + 934ULL) - ((18446744073709514452ULL + p) ^ (unsigned long long)p_9));
    v_13 = (short)(! ((p + (unsigned long long)v) - (unsigned long long)v_15));
    v = (short)(~ (! ((unsigned long long)result - p)));
  }
  else {
    v_7 = (unsigned int)((int)((short)((float)(-37931L % (long)((int)v_4 + 269)) * - v_17)) * (int)v);
    v_13 = (short)79;
    v_4 = (unsigned char)(62911ULL % ((((unsigned long long)p_9 + p) - (unsigned long long)v) + 827ULL));
  }
  while ((unsigned long long)(((int)v - -7862) % ((int)v % ((int)v_4 + 112) + 203)) - - (! p) != 
         5646508997ULL - (! p + (unsigned long long)((long long)v_7 + p_9))) {
    v = (unsigned long long)v_13 / (v_11 / 126ULL + 586ULL);
    v_7 = (unsigned int)(- ((int)v / ((int)((short)((double)result - 8.15272153663)) + 521)));
    v_4 = (unsigned char)(- (~ p));
    v = (short)((p * 4282905665ULL - 4294947695ULL) % (unsigned long long)(
                v_15 + 490L));
  }
  while_0_break: ;
  return result;
}


