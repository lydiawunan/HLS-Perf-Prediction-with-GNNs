#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940892994
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, long long p_7, int p_9, unsigned int p_13, short p_15)
{
  double v_25;
  signed char v_23;
  unsigned long long v_21;
  int v_19;
  unsigned short v_17;
  signed char v_11;
  int v_5;
  float v;
  char result;
  v_25 = (double)p_9;
  v_23 = (signed char)p_7;
  v_21 = (unsigned long long)p_15;
  v_19 = -773206481;
  v_17 = (unsigned short)38680;
  if (- (((unsigned int)v_19 + 4294951983U) * (unsigned int)(- p)) > (unsigned int)v_25) {
    v_11 = (signed char)((((unsigned int)p_15 + p_13) * (p_13 + (unsigned int)v_17)) % (unsigned int)(
                         v_19 + 26));
    v_5 = (int)(~ ((unsigned long long)p_13 & 65028ULL));
    v = (float)((long long)(4167327570UL & (unsigned long)(61171 - v_5)) | (
                (p_7 & (long long)p_9) + (long long)(- v_11)));
  }
  else {
    v_23 = - v_23;
    v = (float)(-3453804418U);
    v = (float)(((18446744073709551535ULL & v_21) * (unsigned long long)(- v)) * (unsigned long long)(! v_23));
  }
  result = (char)((unsigned int)p + (3569046855U - (unsigned int)(- v)));
  return result;
}


