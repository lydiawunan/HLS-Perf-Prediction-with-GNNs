#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692490302
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, long p_4, unsigned int p_6, unsigned char p_9, char p_11)
{
  float v_25;
  unsigned char v_23;
  char v_21;
  signed char v_19;
  unsigned char v_17;
  long v_15;
  unsigned int v_13;
  unsigned short v;
  float result;
  v_25 = (float)p;
  v_23 = (unsigned char)6;
  v_21 = (char)89;
  v_17 = (unsigned char)24;
  v_13 = (unsigned int)p_4;
  if (p_6 != (unsigned int)(~ (((int)v_21 - (int)p) ^ (int)p_9 * (int)p_9))) {
    v_15 = (long)(((unsigned int)(- p_9) / (! v_13 + 16U)) % (unsigned int)(
                  ! ((int)v_17 * (int)p_9) + 964));
    result = (float)(((long)(~ p_9) - (78L - v_15)) / ((long)(- p_11) % (
                                                       - p_4 + 236L) + 920L));
    v_13 = (unsigned int)((unsigned long)((float)p / (result + 882.f) - 7004908.5f) - 1UL);
  }
  else {
    v_21 = (char)(((int)v_23 - (int)p_11) % 69 + (int)(- (- v_25)));
    v_19 = (signed char)v_21;
    v_13 = (unsigned int)((unsigned long long)p_4 * (((unsigned long long)p_9 - 811416952ULL) - (unsigned long long)(
                                                     (int)v_19 >> ((int)p_11 & 7))));
  }
  if ((unsigned int)p_11 <= ! ((unsigned int)p_11 - v_13)) result = (float)(- (
                                                           (int)(- p) / (
                                                           (int)p + 768)));
  else {
    v = (unsigned short)p_9;
    result = (float)((long long)(- ((unsigned long)p_4 - (unsigned long)p_6)) / (
                     (long long)v * -456116645LL + 115LL));
  }
  return result;
}


