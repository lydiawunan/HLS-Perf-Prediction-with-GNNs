#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470959061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned char p_4, unsigned char p_7,
                  unsigned int p_9, float p_11)
{
  int v_25;
  long long v_23;
  long v_21;
  float v_19;
  unsigned int v_17;
  float v_15;
  unsigned int v_13;
  signed char v;
  unsigned char result;
  v_25 = 867344393;
  v_23 = -14239LL;
  v_21 = (long)p;
  v_17 = 4294943688U;
  v_13 = 3428784555U;
  if (140112802LL < (long long)((unsigned long)(- v_21) - (unsigned long)v_13) % (
                    ((-361130701LL + v_23) - (long long)(v_25 * (int)p_11)) + 938LL)) {
    v_15 = (float)v_17;
    v_13 = (unsigned int)704300705.145;
    v = (signed char)v_15;
  }
  else {
    v = (signed char)(~ 148259934UL);
    v_19 = (float)p_7;
    v_13 = (unsigned int)v_19;
  }
  if ((unsigned int)(! (- v)) == (unsigned int)p_7) result = (unsigned char)(~ p);
  else {
    v = (signed char)(- (~ ((long long)p_9 - 26933LL)));
    result = (unsigned char)((((int)p_4 | (int)v) % 171) % ((int)p_7 + 1010));
    result = (unsigned char)(4294935592UL * (unsigned long)((int)p + (int)result));
  }
  return result;
}


