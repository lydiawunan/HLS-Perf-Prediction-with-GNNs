#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203393479
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, signed char p_7, long p_9,
                  unsigned long long p_11, float p_19)
{
  float v_25;
  unsigned short v_23;
  unsigned long long v_21;
  unsigned int v_17;
  char v_15;
  double v_13;
  long long v_5;
  unsigned char v;
  unsigned char result;
  v_25 = p;
  v_23 = (unsigned short)52057;
  v_21 = 480923779ULL;
  v_17 = (unsigned int)p_19;
  v_15 = (char)24;
  v = (unsigned char)p_19;
  result = (unsigned char)p_7;
  if (! ((unsigned long long)((int)v_15 % -24) | ((unsigned long long)p_7 ^ 12756ULL)) != p_11) {
    v_5 = (long long)((int)(- p_19) * ~ (-21747 - (int)p_7));
    result = (unsigned char)253;
    result = ~ result;
  }
  else {
    v_17 = (unsigned int)(- (! p_7));
    v_15 = (char)((int)(! (~ v_23)) - ((int)(- v_25) + ((int)v_23 + (int)v_23)));
    v_5 = (long long)((unsigned long long)((long)((int)((char)p_19) % (
                                                  (int)v_15 + 164)) % (
                                           p_9 + 903L)) ^ v_21);
  }
  if (0 == (unsigned long long)v) {
    v_5 = (long long)(((double)v * -5709570856.06 - (double)(p_9 * (long)result)) + (double)(- (- p_7)));
    v = (unsigned char)(((-29685LL * v_5) * 4294904836LL) * (long long)(- (
                        (int)result + (int)p_7)));
    result = (unsigned char)(- (- (p - (float)v)));
  }
  else {
    v_13 = (double)((unsigned long long)-345.778523276 / ((p_11 - (unsigned long long)(
                                                           4294942958U + v_17)) + 174ULL));
    v_13 = - (v_13 - (double)(18446744073709486234ULL - (unsigned long long)v_17));
    result = (unsigned char)((p_11 + (unsigned long long)((int)((unsigned char)v_13) % 191)) / (
                             ((unsigned long long)v_15 * p_11) % (unsigned long long)(
                             - v_5 + 224LL) + 295ULL));
  }
  return result;
}


