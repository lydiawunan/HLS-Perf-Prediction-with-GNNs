#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042003393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned long p_5,
                       unsigned char p_7, short p_11, unsigned long long p_15)
{
  char v_23;
  double v_21;
  char v_19;
  unsigned int v_17;
  unsigned char v_13;
  char v_9;
  unsigned int v;
  unsigned long long result;
  v_23 = (char)p_15;
  v_19 = (char)p_15;
  v_17 = (unsigned int)p_5;
  v_13 = (unsigned char)5;
  v_9 = (char)p_11;
  result = 488638094ULL;
  if (- (- result + ((unsigned long long)v_23 + p_15)) > (unsigned long long)p_5) {
    v_21 = (double)(! (! ((int)v_9 * (int)v_9)));
    v = (unsigned int)(! ((unsigned long long)p_5 * (3617405757ULL + p_15)));
    v_13 = (unsigned char)v;
  }
  else {
    v_17 = (unsigned int)(result * (unsigned long long)v_23);
    v_21 = (double)((long long)(((int)v_13 - 37364) + ((int)((unsigned char)-3.06465708213e+38f) | (int)v_13)) + - (
                    (long long)v_9 & 4329LL));
    v = (unsigned int)((((unsigned long)v_13 - p_5) & (unsigned long)(- p_7)) << (
                       p_5 / (unsigned long)(- v_17 + 643U) & 31UL));
  }
  if ((int)v_19 < (int)((char)(- ((double)((unsigned long)v_21 + p_5) + (
                                  2730209475.97 - (double)v_13))))) {
    result = (unsigned long long)(v / (unsigned int)((int)(~ (- p_7)) + 686));
    v = (unsigned int)(4294931912UL - p_5);
    result = (unsigned long long)v % ((((unsigned long long)p ^ result) + (unsigned long long)(
                                       9 >> (v & 7U))) + 146ULL);
  }
  else {
    v_13 = (unsigned char)(v_17 % 2422318592U);
    v_9 = (char)((unsigned long long)(- (45242U % (v + 323U))) + ((unsigned long long)v_13 + p_15) * 18446744073709551614ULL);
    result = (unsigned long long)((unsigned long)(~ ((int)((char)-875.693061492) % (
                                                     (int)v_9 + 508))) / (
                                  p_5 * (unsigned long)p_11 + 459UL));
  }
  return result;
}


