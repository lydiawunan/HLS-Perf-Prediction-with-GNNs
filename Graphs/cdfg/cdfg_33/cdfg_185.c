#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 364334759
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned long p_9, unsigned short p_11,
              float p_13, long p_15)
{
  unsigned long long v_21;
  unsigned long long v_19;
  unsigned int v_17;
  unsigned char v_6;
  char v_4;
  char v;
  long long result;
  v_21 = 694313335ULL;
  v_19 = 18446744073709542334ULL;
  v_17 = (unsigned int)p;
  v_6 = (unsigned char)p_11;
  v_4 = (char)-121;
  v = (char)112;
  result = (long long)((unsigned int)(~ (- p_11)) * ((unsigned int)v + ~ v_17));
  if ((unsigned long long)((int)(- v_6) % ((int)((unsigned char)(- (p_13 - (float)v_19))) + 761)) >= ~ v_21) {
    v_6 = (unsigned char)(! (result / 111305398LL) << ((- p_9 + (unsigned long)p_11) & 63UL));
    v = (char)((unsigned long)(! (~ v_4)) - (unsigned long)v_6 % (p + 40UL));
    result = (long long)v;
  }
  else {
    v = (char)p_9;
    v_4 = (char)((unsigned long)((long)p_13 * p_15 ^ (long)(68 % ((int)v + 52))) / (unsigned long)(
                 (v_17 % (unsigned int)((int)v_4 + 863) + (unsigned int)p_13) + 508U));
    result = (long long)(66 * (((int)v - -6) >> (20921 % ((int)v_4 + 61) & 31)));
  }
  return result;
}


