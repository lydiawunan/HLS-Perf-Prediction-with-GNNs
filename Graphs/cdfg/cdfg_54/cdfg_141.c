#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 716580244
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned int p_4, short p_11, long long p_19)
{
  long long v_17;
  long v_15;
  unsigned char v_13;
  float v_9;
  unsigned char v_7;
  float v;
  char result;
  v_17 = (long long)p_4;
  v_15 = 267800714L;
  v_13 = (unsigned char)87;
  v_9 = (float)p_4;
  v_7 = (unsigned char)37;
  v = (float)p;
  result = (char)-26;
  while ((unsigned int)(- ((10862. + p) + 4294965225.)) == (unsigned int)(! (- v_7)) / (
                                                           (unsigned int)(- v_9) / 463636954U + 741U)) {
    v = v_17 | 3398615443LL;
    v_17 = (long long)p_11;
    v_9 = (float)(((double)(p_4 % ((unsigned int)-737.61741515 + 375U)) / (
                   (double)p_19 * p + 278.)) * (double)result);
    v_7 = (unsigned char)(- (((unsigned long)p_11 & 412426527UL) / ((unsigned long)2.30741250828e+38f + 325UL)));
  }
  while_0_break: ;
  if ((double)(((unsigned int)result % (p_4 + 940U) + p_4 % ((unsigned int)p + 550U)) + (unsigned int)(
               (int)v_13 % 774782471)) == -278.797454572) result = (char)p;
  else {
    v_9 = (float)((unsigned long)(((long)v_13 / (v_15 + 531L)) * (long)v_9) & (unsigned long)(
                  ((unsigned int)v_9 + p_4) / (p_4 + 1022U)));
    v_7 = (unsigned char)(((double)v_9 * p - (double)(- p_4)) - (double)(
                          (float)((int)((short)v) / ((int)p_11 + 861)) / (
                          v + 842.f)));
    result = (char)(~ p_4 / (unsigned int)((int)((unsigned char)v) % (
                                           (int)v_7 + 309) + 482) << 18UL);
  }
  return result;
}


