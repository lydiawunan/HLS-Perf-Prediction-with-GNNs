#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 385826389
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[1], float p_5, short p_9[3][3][5],
                  signed char p_15, long p_17)
{
  float v_25;
  unsigned long long v_23;
  unsigned char v_21;
  unsigned char v_19;
  unsigned char v_13;
  float v_11;
  unsigned char v_7;
  unsigned long long v;
  unsigned char result;
  v_25 = (float)p[0];
  v_23 = (unsigned long long)p_5;
  v_21 = (unsigned char)64;
  v_19 = (unsigned char)p_5;
  v_13 = (unsigned char)p_17;
  v_7 = (unsigned char)130;
  result = (unsigned char)233;
  if ((unsigned long long)(- ((float)(4294932175UL - (unsigned long)p_17) / (
                              (53.f - v_25) + 733.f))) >= (unsigned long long)(
                                                          (long long)(! v_7) / -21882LL) % (
                                                          ~ (- v_23) + 254ULL)) {
    v_11 = (float)631391304ULL;
    v = (unsigned long long)(- ((int)v_13 / ((int)v_21 + 648)) % ((int)result * (int)(~ p[0]) + 51));
    v_13 = (unsigned char)((float)((int)(- p_15) - (int)((signed char)(
                                   -4.47577727987e+37 - (double)v_19))) + 
                           ((float)p_9[0][2][0] * -1.47488115116e+38f) / (
                           (float)(v * (unsigned long long)p_15) + 247.f));
  }
  else {
    v_11 = (float)(short)10090;
    v_23 = 104ULL;
    result = (unsigned char)(! ((unsigned long long)p_17 - v_23));
  }
  if ((unsigned long)p_15 < (unsigned long)((unsigned int)result - 20610U) + (unsigned long)(
                            (long)p_15 / (p_17 + 764L) - (long)9317888000.f)) 
    result = (unsigned char)231;
  else {
    v_7 = (unsigned char)((float)v_13 / -256.079833984f);
    v = (unsigned long long)((float)((int)(~ v_7) | (int)(! p_9[2][1][3])) * v_11);
    result = (unsigned char)((unsigned long long)p[0] * (! v - (unsigned long long)p_5));
  }
  return result;
}


