#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 687106290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned long long p_4, char p_9, unsigned int p_13,
          long p_15)
{
  unsigned short v_23;
  unsigned char v_21;
  float v_19;
  long long v_17;
  long v_11;
  double v_7;
  float v;
  short result;
  v_23 = (unsigned short)p_9;
  v_21 = (unsigned char)p_15;
  v_19 = (float)p_13;
  v_17 = 29489LL;
  v_11 = 979037517L;
  v_7 = (double)p_15;
  v = (float)p;
  while ((double)((unsigned long long)(-7763LL / (long long)((int)p + 927)) / (
                  p_4 / 55291ULL + 478ULL)) - (v_7 + 250.) * (double)(! v_17) > 
         -7505283906.31 / (double)(v_19 + 264.f)) {
    v_11 = (long)v_21 - -515599019L;
    v_21 = (unsigned char)(((20622L * (long)8643106816.f) * (long)v) % (long)(
                           (int)v_23 + 243));
    v = (float)(- v_7);
    v_7 = (double)-564584380;
  }
  while_0_break: ;
  if (((4294949651ULL | p_4 % (unsigned long long)(v_11 + 17L)) & (unsigned long long)(
       (unsigned long)(! p_13) / (unsigned long)(p_15 + 795L))) >= 44947ULL) {
    result = (short)(! (p_4 * (unsigned long long)2.05487614222e+38) * (unsigned long long)(
                     (115 * (int)((unsigned char)v_7)) * (-16325 << (
                                                          (int)p_9 & 31))));
    result = (short)((19306 / ((int)result + 857) - ((int)p | (int)p)) % (
                     ((int)p - (int)((signed char)(- v))) + 450));
    result = (short)((unsigned long long)p - ! (p_4 * (unsigned long long)result));
  }
  else {
    v_11 = (long)(~ ((3998892674UL & (unsigned long)p_13) * (unsigned long)(- p_15)));
    result = (short)(-480549114LL & (long long)(~ (v_11 * (long)-1.78996949109e+38)));
  }
  return result;
}


