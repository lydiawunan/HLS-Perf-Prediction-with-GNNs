#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734143899
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned long long p_7,
                       long long p_13, float p_15, double p_19)
{
  long v_17;
  float v_11;
  double v_9;
  unsigned char v_5;
  char v;
  unsigned long long result;
  v_11 = 1.55523731989e+38f;
  v_5 = (unsigned char)p_19;
  v_17 = (long)(- (- (999.182205337 - (double)(p_15 / 243.f))));
  v_9 = (double)(p_13 % ((long long)((float)p_7 - p_15) + 705LL)) / (
        (((double)v_17 + p_19) + 19651.) + 515.) - (double)p_7;
  v = (char)((unsigned long long)(- (v_9 / (double)(v_11 + 474.f)) + (double)v_11) + p_7);
  result = (18446744067043167376ULL % (unsigned long long)((int)v + 189)) % (
           (unsigned long long)(! (! p)) * ((unsigned long long)(-9.78773137971e+37 * (double)v_5) / (
                                            p_7 + 635ULL)) + 983ULL);
  return result;
}


