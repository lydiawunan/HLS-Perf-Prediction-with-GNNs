#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663305150
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned short p_4, unsigned long long p_17,
          signed char p_19, unsigned long p_21[1][3][1])
{
  double v_23;
  long long v_15;
  double v_13;
  unsigned long long v_11;
  float v_9;
  unsigned long v_7;
  unsigned long long v;
  short result;
  v_23 = (double)p_4;
  v_15 = -28777LL;
  v_11 = 45520ULL;
  v_9 = (float)p_17;
  v = 18446744072860453672ULL;
  result = (short)p_17;
  if (- ((108 / ((int)result + 369)) * (int)(~ p)) > (int)((double)((
                                                                    v_11 - (unsigned long long)v_15) + (unsigned long long)(
                                                                    (int)p - 42961)) / (
                                                           ((double)(
                                                            (long long)p_19 / (
                                                            v_15 + 327LL)) - v_23) + 197.))) {
    v_11 = 2376245952ULL;
    v_13 = (double)(-87);
    v_7 = (unsigned long)(((int)((short)v_9) * (int)result) / ((int)v_13 + 153) + 
                          (int)(-8575013888.f * (float)p) * -610225298);
  }
  else {
    v_7 = - p_21[0][2][0];
    v_15 = (long long)((unsigned long long)(-13686LL * ! v_15) - - (p_17 % (unsigned long long)(
                                                                    (int)p_19 + 627)));
    v_11 = (unsigned long long)(v_15 % (long long)(4294916290UL / (unsigned long)(
                                                   ((unsigned int)p - 8037U) + 541U) + 354UL));
  }
  result = (short)((unsigned long long)(((double)p - 618.387082489) + (double)(
                                        (unsigned long long)p_4 % (v + 733ULL))) + 
                   (unsigned long long)(~ v_7) % (((unsigned long long)v_9 & v_11) + 723ULL));
  return result;
}


