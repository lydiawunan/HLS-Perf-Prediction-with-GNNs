#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 35562513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, int p_9[1], unsigned long long p_13, unsigned char p_15,
         float p_17)
{
  float v_23;
  int v_21;
  long v_19;
  int v_11;
  long v_7;
  long v_4;
  unsigned short v;
  long result;
  v_21 = (int)p;
  v_19 = (long)p_15;
  v_11 = (int)p_13;
  v_7 = (long)p_9[0];
  v = (unsigned short)36316;
  while ((unsigned long long)((double)(v_7 % ((long)p_17 + 894L)) * - p) * (
         (unsigned long long)(-50 * (int)((signed char)-841.282679597)) - p_13) <= (unsigned long long)(! v)) {
    v_23 = (unsigned long)v_21 - (unsigned long)v_19 * 3688875087UL;
    v_19 = (long)((unsigned long long)(- v_23) << (! (p_13 * p_13) & 63ULL));
    v_21 = (int)(~ ((long)(p + (double)p_9[0]) - v_19 % ((long)7450372608.f + 193L)));
    v_7 = 610777427L | (long)(! ((int)p_15 / 29493));
  }
  while_0_break: ;
  if ((unsigned long long)((103. * p) / (((double)(23039 + v_11) - ((double)v_11 - 1.80434900757e+37)) + 488.)) != 
      ~ (p_13 % (unsigned long long)(v_11 + 533)) * (unsigned long long)(- (~ p_15))) {
    v_4 = (long)(((int)v - (int)((unsigned short)((float)v_7 - -2553301760.f))) * (int)(
                 p * (double)(12150 % (p_9[0] + 861))));
    v = (unsigned short)(108. + (double)(v_4 - (long)-9868928212.24) / (
                                p + 852.));
    result = (long)(! (~ ((unsigned long)v + 669427166UL)));
  }
  else result = 7260L;
  return result;
}


