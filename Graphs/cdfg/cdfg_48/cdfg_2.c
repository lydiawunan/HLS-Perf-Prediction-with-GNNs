#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 371092455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, char p_7, long p_9, unsigned int p_11, unsigned char p_13)
{
  float v_21;
  long v_19;
  long v_17;
  unsigned int v_15;
  double v_4;
  long long v;
  long result;
  v_21 = -1.36084431729e+38f;
  v_19 = (long)p;
  v_17 = (long)p;
  v_15 = (unsigned int)p;
  v_4 = -1282479687.17;
  v = 46020LL;
  result = (long)p;
  if ((long long)((p_11 >> ((int)p_7 & 31)) * (unsigned int)((int)((char)v_21) | -66)) - ! (
      v % (long long)(v_15 + 297U)) < (long long)result) {
    v_15 = (unsigned int)(900675215UL + ! (4294959420UL + (unsigned long)p));
    v_4 = (double)((unsigned long)p_7 | (unsigned long)(- p) / (((unsigned long)v_15 - (unsigned long)v_17) + 177UL));
    v = (long long)(((unsigned int)(v_4 + 4294967232.) - p_11) + (unsigned int)(~ (~ p_13)));
  }
  else {
    v = 19873LL;
    result = (long)(~ ((unsigned long)(p_9 + v_19) + (unsigned long)(
                       (unsigned int)p_13 + p_11)));
    v |= (long long)v_19;
  }
  if ((549398481ULL | ((18446744073709497488ULL + (unsigned long long)p_7) + (unsigned long long)(- v_4))) != (unsigned long long)(
      ((result & (long)p_7) + 41429L) % (~ (p_9 & p_9) + 794L))) {
    v_4 = (double)result;
    result = 418739225L;
    result = (long)(- (v & (long long)result) % (long long)((int)(v_4 * 1.84467440732e+19) * (
                                                            (int)((short)9.62890155885e+37f) % (
                                                            (int)p + 150)) + 233));
  }
  else result = 13L;
  return result;
}


