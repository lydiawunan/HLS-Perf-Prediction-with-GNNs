#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 599861274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p[1], signed char p_7, double p_11, signed char p_19)
{
  signed char v_21;
  float v_17;
  unsigned char v_15;
  long v_13;
  float v_9;
  unsigned short v_5;
  long v;
  long long result;
  v_21 = (signed char)-51;
  v_13 = (long)p_19;
  v_5 = (unsigned short)6155;
  result = 200901120LL;
  v_9 = (float)(- (- (- p_11)));
  if (! (63628LL / (long long)((int)(! v_5) + 518)) > (long long)(1967346448UL + (unsigned long)p_19)) {
    v_5 = (unsigned short)((long)v_9 % ((long)(139 / ((int)((unsigned char)p_11) + 950)) % (
                                        39300L * v_13 + 737L) + 552L));
    v = (long)((result * (long long)((int)v_5 / ((int)p_7 + 963))) % (
               (long long)p[0] + 1019LL));
    result = (long long)(~ ((long)(- p[0]) % (! v + 759L)));
  }
  else {
    v_15 = (unsigned char)(1443709375UL * (unsigned long)((int)(~ v_21) * -14));
    v_17 = (float)(! (((int)p_7 - 75) / ((int)(- p_19) + 975)));
    result = (long long)(- ((float)v_15 / (p[0] + 376.f) + - v_17));
  }
  return result;
}


