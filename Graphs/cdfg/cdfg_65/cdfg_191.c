#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 923811018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned short p_5, unsigned short p_9,
                 float p_15, float p_19)
{
  long v_25;
  long long v_23;
  unsigned int v_21;
  char v_17;
  unsigned long v_13;
  int v_11;
  int v_7;
  unsigned short v;
  unsigned int result;
  v_25 = 964147251L;
  v_23 = -151013176LL;
  v_17 = (char)p_9;
  v_13 = 3400723062UL;
  v = (unsigned short)62968;
  if ((! v_23 >> ((v_25 >> ((long)p_19 & 31L)) & 63L)) - (~ p + (long long)(~ v_13)) >= 
      (long long)(! p_9) + ! (p / ((long long)p_15 + 163LL))) {
    v_11 = ((int)v_17 + (int)v) >> ((unsigned long)(- p_19) / 211284184UL & 31UL);
    v_13 = (unsigned long)p_5;
    v_7 = (int)p_15;
  }
  else {
    v_21 = (unsigned int)((-38 - (int)v_17) % ((int)p_5 + 170));
    v_7 = (int)v_21;
    v_11 = (int)((42LL - (long long)((float)v + p_15)) % ((long long)(- (- p_19)) + 469LL));
  }
  if (! ((unsigned long)v_11 * v_13 + (unsigned long)v_7) != (unsigned long)(- p_15)) 
    result = (unsigned int)(- (! (unsigned char)172));
  else {
    result = (unsigned int)(4843243227.42 * (double)(~ (~ p_9)));
    v_7 = (int)((282.352203369f + (float)p_5) * (float)(result + 24U) - 4294903552.f);
    result = 12826U / ((result + (unsigned int)v) + 180U) << ((p % -30638LL | (long long)(
                                                               (int)p_5 + v_7)) & 31LL);
  }
  return result;
}


